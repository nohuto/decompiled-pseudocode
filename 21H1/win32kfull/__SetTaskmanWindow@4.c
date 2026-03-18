/*
 * XREFs of __SetTaskmanWindow@4 @ 0xE81FC
 * Callers:
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SetTaskmanWindow(int a1)
{
  int v1; // edx
  int *v2; // eax
  int v3; // eax

  v1 = 0;
  v2 = *(int **)(_gptiCurrent + 252);
  if ( a1 && v2[24] )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  else
  {
    v3 = *v2;
    if ( a1 )
      v1 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v3 + 12) = v1;
    HMAssignmentLock(a1, v1);
    return 1;
  }
}
