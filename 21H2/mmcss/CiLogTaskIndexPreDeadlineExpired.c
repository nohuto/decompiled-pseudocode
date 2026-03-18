/*
 * XREFs of CiLogTaskIndexPreDeadlineExpired @ 0x1C0004254
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C00013B0 (CiSchedulerProcessDeadlines.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003170 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexPreDeadlineExpired(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexPreDeadlineExpiredEvent, 0LL, 1u, &UserData);
}
