/*
 * XREFs of DpiLdaValidateSystemChainStatus @ 0x1C01867F4
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C015A9A8 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     DpiLdaValidateChainStatus @ 0x1C02D3DD0 (DpiLdaValidateChainStatus.c)
 */

LONG DpiLdaValidateSystemChainStatus()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  int v3; // eax
  unsigned __int64 v4; // rbp
  struct _DEVICE_OBJECT *v5; // rcx

  AcquireMiniportListMutex();
  v0 = qword_1C00AFA40;
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
            if ( *(_DWORD *)(v1 + 504) )
            {
              v3 = DpiLdaValidateChainStatus(*(_QWORD *)(v1 + 24));
              v4 = v3;
              if ( v3 < 0 )
              {
                v5 = *(struct _DEVICE_OBJECT **)(v1 + 152);
                *(_BYTE *)(v1 + 232) = 1;
                IoInvalidateDeviceState(v5);
                DxgCreateLiveDumpWithWdLogs(0x193u, 0x805uLL, v4, *(int *)(v1 + 236), *(int *)(v1 + 240), 0);
              }
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
    while ( *(_QWORD *)v0 != qword_1C00AFA40 );
  }
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
