/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000CBA0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Bulk_MapTransfers @ 0x1C000CC18 (Bulk_MapTransfers.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2, int a3, int a4)
{
  char v5; // di

  v5 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v5 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a2 + 40));
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1352LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 340), 1),
             _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2) )
  {
    Bulk_MapTransfers(a2);
  }
  if ( v5 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a2 + 40));
  }
}
