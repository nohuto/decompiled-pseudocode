/*
 * XREFs of CcPostWorkQueue @ 0x1402336C8
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x140232E2C (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B50D0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1402347B4 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14023496C (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
