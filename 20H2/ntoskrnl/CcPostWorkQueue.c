/*
 * XREFs of CcPostWorkQueue @ 0x14024A8E0
 * Callers:
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x14024A044 (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B89A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueRegular @ 0x14024B058 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x14024B210 (CcPostWorkQueueCachemapUninit.c)
 */

__int64 __fastcall CcPostWorkQueue(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 128) + 288LL == a2 )
    return CcPostWorkQueueCachemapUninit();
  else
    return CcPostWorkQueueRegular();
}
