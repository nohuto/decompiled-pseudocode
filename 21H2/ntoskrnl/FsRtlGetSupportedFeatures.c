/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x14021CF90
 * Callers:
 *     IopQueryInformation @ 0x1405E7B50 (IopQueryInformation.c)
 *     IopCopyOffloadCapable @ 0x1405E7D54 (IopCopyOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  return result;
}
