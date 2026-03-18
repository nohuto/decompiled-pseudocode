/*
 * XREFs of RawBeginOperation @ 0x1402C26F8
 * Callers:
 *     RawReadWriteDeviceControl @ 0x140652488 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14069F444 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140759748 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090AD74 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090ADF8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090B0A4 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090B148 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 200);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  return result;
}
