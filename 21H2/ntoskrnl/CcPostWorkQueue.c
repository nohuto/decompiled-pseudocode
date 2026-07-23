/*
 * XREFs of CcPostWorkQueue @ 0x140300E80
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x1402D1EDC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1403005E4 (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x140301D58 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140301F10 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
