/*
 * XREFs of DpiLdaValidateSystemChainStatus @ 0x1C0219C24
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C0160D20 (DpiSessionCreateCallback.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiLdaValidateChainStatus @ 0x1C0396D34 (DpiLdaValidateChainStatus.c)
 */

LONG DpiLdaValidateSystemChainStatus()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  struct _DEVICE_OBJECT *v3; // rcx

  AcquireMiniportListMutex();
  v0 = qword_1C01304C8;
  if ( *(_QWORD *)v0 != v0 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v0 + 72), Executive, 0, 0, 0LL);
      v1 = *(_QWORD *)(v0 + 56);
      if ( *(_QWORD *)v1 != v1 )
      {
        do
        {
          if ( *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v1 + 484) )
              DpiCheckForOutstandingD3Requests(v1);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v1 + 168), 1u);
            if ( *(_DWORD *)(v1 + 504) && (int)DpiLdaValidateChainStatus(*(_QWORD *)(v1 + 24)) < 0 )
            {
              v3 = *(struct _DEVICE_OBJECT **)(v1 + 152);
              *(_BYTE *)(v1 + 232) = 1;
              IoInvalidateDeviceState(v3);
              DxgCreateLiveDumpWithWdLogs(403LL, 2053LL);
            }
            if ( *(_BYTE *)(v1 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
            KeLeaveCriticalRegion();
          }
          v1 = *(_QWORD *)v1;
        }
        while ( *(_QWORD *)v1 != *(_QWORD *)(v0 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v0 + 72), 0);
      v0 = *(_QWORD *)v0;
    }
    while ( *(_QWORD *)v0 != qword_1C01304C8 );
  }
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
