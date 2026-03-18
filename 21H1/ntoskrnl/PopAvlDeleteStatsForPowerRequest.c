/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x1406FF4A0
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x140700340 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F1D3C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x14057A0E0 (PoUninitializeStopWatch.c)
 *     PopFreeUnicodeString @ 0x1406FF10C (PopFreeUnicodeString.c)
 *     PopGetStopWatchByRequestType @ 0x140700BA4 (PopGetStopWatchByRequestType.c)
 */

void __fastcall PopAvlDeleteStatsForPowerRequest(char *Buffer)
{
  unsigned int i; // ebx
  _QWORD *StopWatchByRequestType; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(Buffer, i, 0LL);
    if ( StopWatchByRequestType )
      PoUninitializeStopWatch(StopWatchByRequestType);
  }
  v4 = *(_OWORD *)(Buffer + 8);
  RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  PopFreeUnicodeString((__int64)&v4);
}
