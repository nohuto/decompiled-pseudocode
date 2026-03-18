/*
 * XREFs of Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000E7D0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C000E85C (Bulk_MapTransfers.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Bulk_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // di
  int v4; // edx
  int v5; // r8d
  int v6; // r9d

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a2 + 40));
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1352LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) == 2
         || (_InterlockedExchange((volatile __int32 *)(a2 + 340), 1), (unsigned int)TR_AttemptStateChange(a2, 2, 3) == 2) )
  {
    Bulk_MapTransfers(a2);
  }
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a2 + 40));
  }
}
