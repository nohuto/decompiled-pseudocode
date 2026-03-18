/*
 * XREFs of PopWatchdogInit @ 0x140A75F88
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C20608 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C23460.Header.Lock = 8LL;
  stru_140C23460.Header.WaitListHead.Blink = &stru_140C23460.Header.WaitListHead;
  stru_140C23460.Header.WaitListHead.Flink = &stru_140C23460.Header.WaitListHead;
  qword_140C23438 = (__int64)PopPowerActionWatchdog;
  qword_140C22EB8 = 0LL;
  qword_140C23418 = 0LL;
  stru_140C23460.DueTime.QuadPart = 0LL;
  stru_140C23460.Period = 0;
  stru_140C23460.Processor = 0;
  dword_140C23420 = 275;
  qword_140C23440 = 0LL;
  qword_140C23458 = 0LL;
  qword_140C23430 = 0LL;
  byte_140C234A0 = 1;
  return PopReleasePolicyLock();
}
