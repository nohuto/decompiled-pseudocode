/*
 * XREFs of RawBeginOperation @ 0x140202F38
 * Callers:
 *     RawQueryFsVolumeInfo @ 0x1405D84D8 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x1405D8A28 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x140769E38 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140911C54 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x140911F84 (RawQueryInformation.c)
 *     RawSetInformation @ 0x140912028 (RawSetInformation.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140202F70 (ExAcquireRundownProtectionCacheAwareEx.c)
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
