/*
 * XREFs of _UnlockMFMWFPWindow@4 @ 0x19784F
 * Callers:
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _LockMFMWFPWindow@8 @ 0x197508 (_LockMFMWFPWindow@8.c)
 *     _MNCheckButtonDownState@4 @ 0x1975B5 (_MNCheckButtonDownState@4.c)
 *     _xxxMNDragLeave@0 @ 0x1A7618 (_xxxMNDragLeave@0.c)
 * Callees:
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 */

int __thiscall UnlockMFMWFPWindow(void **this)
{
  int result; // eax
  _DWORD *v2; // edx

  result = IsMFMWFPWindow(*this);
  if ( result )
    return HMAssignmentUnlock(v2);
  *v2 = 0;
  return result;
}
