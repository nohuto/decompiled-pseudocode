/*
 * XREFs of PopAvlDeleteStatsForPowerRequest @ 0x14064EAA8
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14064D028 (PopStatsDeletePowerRequest.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F302C (PopPublishAndPurgePowerRequestStats.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     PoUninitializeStopWatch @ 0x14057A720 (PoUninitializeStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x14064DFF8 (PopGetStopWatchByRequestType.c)
 *     PopFreeUnicodeString @ 0x14064EE54 (PopFreeUnicodeString.c)
 */

__int64 __fastcall PopAvlDeleteStatsForPowerRequest(char *Buffer)
{
  unsigned int i; // ebx
  _QWORD *StopWatchByRequestType; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType((__int64)Buffer, i);
    if ( StopWatchByRequestType )
      PoUninitializeStopWatch(StopWatchByRequestType);
  }
  v5 = *(_OWORD *)(Buffer + 8);
  RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  return PopFreeUnicodeString(&v5);
}
