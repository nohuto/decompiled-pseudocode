/*
 * XREFs of HvlpLogHypervisorSchedulerType @ 0x1404F4944
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CBAA8 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x1404F4D24 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogHypervisorSchedulerType()
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&HvlpSchedulerType;
  UserData.Size = 4;
  return HvlpWriteEventLog(&HV_EVENTLOG_SCHEDULER_TYPE, 1u, &UserData);
}
