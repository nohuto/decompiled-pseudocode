/*
 * XREFs of RawEndOperation @ 0x140202CD8
 * Callers:
 *     RawCompletionRoutine @ 0x140202C40 (RawCompletionRoutine.c)
 *     RawQueryFsVolumeInfo @ 0x1405D84D8 (RawQueryFsVolumeInfo.c)
 *     RawReadWriteDeviceControl @ 0x1405D8A28 (RawReadWriteDeviceControl.c)
 *     RawUserFsCtrl @ 0x140769E38 (RawUserFsCtrl.c)
 *     RawQueryFsDeviceInfo @ 0x140911C54 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x140911CD8 (RawQueryFsSizeInfo.c)
 *     RawQueryInformation @ 0x140911F84 (RawQueryInformation.c)
 *     RawSetInformation @ 0x140912028 (RawSetInformation.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
}
