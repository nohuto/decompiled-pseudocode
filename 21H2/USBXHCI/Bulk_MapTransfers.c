/*
 * XREFs of Bulk_MapTransfers @ 0x1C000E85C
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EP_StartMapping @ 0x1C000E4D0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000E7D0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_EvtDmaCallback @ 0x1C001A6F0 (Bulk_EvtDmaCallback.c)
 *     Bulk_CommonBufferCallback @ 0x1C0044500 (Bulk_CommonBufferCallback.c)
 * Callees:
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     Bulk_MappingLoop @ 0x1C000E8C4 (Bulk_MappingLoop.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall Bulk_MapTransfers(__int64 a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v4,
        14,
        37,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    result = Bulk_MappingLoop(a1);
    if ( *(_DWORD *)(a1 + 108) != 2 )
      break;
    if ( !*(_DWORD *)(a1 + 340) )
      break;
    result = TR_AttemptStateChange(a1, 2, 3);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
