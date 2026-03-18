/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C023797C
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01FF230 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0237458 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0237578 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
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
