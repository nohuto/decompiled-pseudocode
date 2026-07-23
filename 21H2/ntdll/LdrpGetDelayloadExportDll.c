/*
 * XREFs of LdrpGetDelayloadExportDll @ 0x18001664C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800880FC (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800165B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetDelayloadExportDll(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 *v7; // r14
  const CHAR *v9; // rsi
  int ForwardedDll; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)LdrpFindLoadedDllByHandle(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    LdrpInitializeDllPath(*(_QWORD *)(a1 + 80), a4 | 1LL, Path);
    RtlInitAnsiString(&DestinationString, v9);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)&DestinationString, (unsigned int)Path, a1, a1, 3, (__int64)a3);
    if ( ForwardedDll >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *((_QWORD *)*a3 + 6);
      LdrpLogDelayLoadTrigger(a1, a2, (__int64)*a3, a5);
    }
    if ( v14 )
      RtlReleasePath(Path[0]);
  }
  return (unsigned int)ForwardedDll;
}
