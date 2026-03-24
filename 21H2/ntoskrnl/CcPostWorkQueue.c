/*
 * XREFs of CcPostWorkQueue @ 0x1402F6130
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1402F5894 (CcLazyWriteScan.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B93A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x1402F7008 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402F71C0 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
