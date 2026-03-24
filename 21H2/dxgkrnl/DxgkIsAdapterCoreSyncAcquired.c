/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C02174B0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C019D6B0 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C02C5B00 (DpExcludeAdapterAccess.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02CCC94 (DpiFdoWaitConnectionChangeComplete.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02CED50 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C020DBF4 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
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
