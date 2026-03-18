/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x14025BC20
 * Callers:
 *     IopCopyOffloadCapable @ 0x1406E8D8C (IopCopyOffloadCapable.c)
 *     IopQueryInformation @ 0x14072A9B0 (IopQueryInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
