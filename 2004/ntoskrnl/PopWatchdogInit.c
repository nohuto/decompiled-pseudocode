/*
 * XREFs of PopWatchdogInit @ 0x140A6FA68
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C204F8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C22FA0.Header.Lock = 8LL;
  stru_140C22FA0.Header.WaitListHead.Blink = &stru_140C22FA0.Header.WaitListHead;
  stru_140C22FA0.Header.WaitListHead.Flink = &stru_140C22FA0.Header.WaitListHead;
  qword_140C22F78 = (__int64)PopPowerActionWatchdog;
  qword_140C23C58 = 0LL;
  qword_140C22F58 = 0LL;
  stru_140C22FA0.DueTime.QuadPart = 0LL;
  stru_140C22FA0.Period = 0;
  stru_140C22FA0.Processor = 0;
  dword_140C22F60 = 275;
  qword_140C22F80 = 0LL;
  qword_140C22F98 = 0LL;
  qword_140C22F70 = 0LL;
  byte_140C22FE0 = 1;
  return PopReleasePolicyLock();
}
