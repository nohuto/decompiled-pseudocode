/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0236AEC
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01FE3C0 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0221F50 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02365C8 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C02366E8 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
