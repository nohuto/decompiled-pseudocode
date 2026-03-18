/*
 * XREFs of NtUserClearForeground @ 0x1C01F6F20
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 1LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v2 == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v1, v2);
    v0 = 0LL;
  }
  else if ( v2 )
  {
    HMAssignmentUnlock(v2 + 88);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3);
  return v0;
}
