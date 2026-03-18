/*
 * XREFs of CcPostWorkQueue @ 0x140275F94
 * Callers:
 *     CcLazyWriteScan @ 0x140275670 (CcLazyWriteScan.c)
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 *     CcNotifyOfMappedWrite @ 0x140310AD0 (CcNotifyOfMappedWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14053D400 (CcQueueLazyWriteScanThreadForVolume.c)
 * Callees:
 *     CcPostWorkQueueCachemapUninit @ 0x140274E94 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueRegular @ 0x1402EEC18 (CcPostWorkQueueRegular.c)
 */

__int64 __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    return CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    return CcPostWorkQueueRegular();
}
