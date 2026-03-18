/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1C02CAE30
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0174A60 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // edx
  _QWORD v8[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v5 = IoObject[8];
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 10;
  LOBYTE(v8[6]) = -1;
  IoFreeWorkItem(IoWorkItem);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v5 + 484) )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 4080LL));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
  v6 = *(_DWORD *)(v5 + 236);
  if ( (v6 == 2 || *(_DWORD *)(v5 + 240) == 2 && ((v6 - 3) & 0xFFFFFFFC) == 0 && v6 != 4)
    && *(_DWORD *)(v5 + 3976) != 1
    && *(_DWORD *)(v5 + 284) == 1 )
  {
    if ( *(_BYTE *)(v5 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
    KeLeaveCriticalRegion();
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v5 + 484) )
      DpiCheckForOutstandingD3Requests(v5);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 168), 1u);
    v7 = *(_DWORD *)(v5 + 236);
    if ( (v7 == 2 || *(_DWORD *)(v5 + 240) == 2 && ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 4)
      && *(_DWORD *)(v5 + 3976) != 1
      && *(_DWORD *)(v5 + 284) == 1 )
    {
      DpiFdoInvalidateChildRelations((__int64)IoObject, 6u, (__int64)v8);
    }
  }
  if ( *(_BYTE *)(v5 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v5 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
  KeLeaveCriticalRegion();
}
