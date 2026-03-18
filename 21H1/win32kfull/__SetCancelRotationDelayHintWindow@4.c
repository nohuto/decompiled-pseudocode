/*
 * XREFs of __SetCancelRotationDelayHintWindow@4 @ 0x141A47
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SetCancelRotationDelayHintWindow(int a1)
{
  int v1; // esi
  int v2; // edx

  v1 = 1;
  if ( IAMThreadAccessGranted(_gptiCurrent) )
  {
    HMAssignmentLock(a1, v2);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  return v1;
}
