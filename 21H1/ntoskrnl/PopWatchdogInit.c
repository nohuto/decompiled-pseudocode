/*
 * XREFs of PopWatchdogInit @ 0x140A6F044
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C20718 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C23560.Header.Lock = 8LL;
  stru_140C23560.Header.WaitListHead.Blink = &stru_140C23560.Header.WaitListHead;
  stru_140C23560.Header.WaitListHead.Flink = &stru_140C23560.Header.WaitListHead;
  qword_140C23538 = (__int64)PopPowerActionWatchdog;
  qword_140C22FB8 = 0LL;
  qword_140C23518 = 0LL;
  stru_140C23560.DueTime.QuadPart = 0LL;
  stru_140C23560.Period = 0;
  stru_140C23560.Processor = 0;
  dword_140C23520 = 275;
  qword_140C23540 = 0LL;
  qword_140C23558 = 0LL;
  qword_140C23530 = 0LL;
  byte_140C235A0 = 1;
  return PopReleasePolicyLock();
}
