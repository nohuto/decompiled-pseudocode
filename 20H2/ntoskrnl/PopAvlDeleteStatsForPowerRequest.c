/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x14071CB48
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14071DE44 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14023F7B0 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x14057E150 (PoUninitializeStopWatch.c)
 *     PopFreeUnicodeString @ 0x1406E1388 (PopFreeUnicodeString.c)
 *     PopGetStopWatchByRequestType @ 0x14071CE98 (PopGetStopWatchByRequestType.c)
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
