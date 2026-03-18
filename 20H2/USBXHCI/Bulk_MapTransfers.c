/*
 * XREFs of Bulk_MapTransfers @ 0x1C000CC18
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_EP_StartMapping @ 0x1C000C8B0 (Bulk_EP_StartMapping.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000CBA0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_CommonBufferCallback @ 0x1C00449C0 (Bulk_CommonBufferCallback.c)
 *     Bulk_EvtDmaCallback @ 0x1C0044C80 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     Bulk_MappingLoop @ 0x1C000CC80 (Bulk_MappingLoop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
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
      WPP_RECORDER_SF_ddL(
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
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 2);
    if ( (_DWORD)result != 2 )
      break;
  }
  return result;
}
