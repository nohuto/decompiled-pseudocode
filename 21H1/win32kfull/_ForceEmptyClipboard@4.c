/*
 * XREFs of _ForceEmptyClipboard@4 @ 0xACADE
 * Callers:
 *     _FreeWindowStation@4 @ 0xAC9DA (_FreeWindowStation@4.c)
 * Callees:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 */

void __userpurge ForceEmptyClipboard(_DWORD *Object@<ecx>, struct tagWINDOWSTATION *a2@<ebx>, int a3)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  Object[10] = W32GetThreadWin32Thread(CurrentThread);
  HMAssignmentUnlock(Object + 14);
  HMAssignmentUnlock(Object + 13);
  HMAssignmentUnlock(Object + 12);
  xxxEmptyClipboard(Object);
  if ( (Object[8] & 0x10) == 0 )
    xxxCloseClipboard(a2, Object);
  JUMPOUT(0xACB28);
}
