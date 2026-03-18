/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C021777C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0196790 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C02C5750 (DpExcludeAdapterAccess.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02CC8E4 (DpiFdoWaitConnectionChangeComplete.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02CE9A0 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C020DEC4 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL, a2);
  *(_QWORD *)(v2 + 24) = 306LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
