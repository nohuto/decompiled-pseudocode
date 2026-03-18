/*
 * XREFs of HvlpLogHypervisorSchedulerType @ 0x1404F42F4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x1404F46D4 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogHypervisorSchedulerType()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&HvlpSchedulerType;
  UserData.Size = 4;
  return HvlpWriteEventLog(&HV_EVENTLOG_SCHEDULER_TYPE, 1u, &UserData);
}
