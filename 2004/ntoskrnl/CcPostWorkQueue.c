/*
 * XREFs of CcPostWorkQueue @ 0x1402C64F8
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1402C5C5C (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B5F00 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1402C75E4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402C779C (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
