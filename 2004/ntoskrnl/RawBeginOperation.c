/*
 * XREFs of RawBeginOperation @ 0x1402FEF58
 * Callers:
 *     RawReadWriteDeviceControl @ 0x1406BBF48 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x1406D2DA4 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x14075B548 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x14090C024 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090C0A8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x14090C354 (RawQueryInformation.c)
 *     RawSetInformation @ 0x14090C3F8 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402FEF90 (ExAcquireRundownProtectionCacheAwareEx.c)
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
