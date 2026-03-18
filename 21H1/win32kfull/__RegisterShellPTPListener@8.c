/*
 * XREFs of __RegisterShellPTPListener@8 @ 0xE82D0
 * Callers:
 *     _NtUserRegisterShellPTPListener@8 @ 0xE8246 (_NtUserRegisterShellPTPListener@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall _RegisterShellPTPListener(int a1, int a2)
{
  int v4; // ecx
  int v5; // ecx
  int *v6; // ecx
  int v7; // edx

  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 && (v5 = *(_DWORD *)(v4 + 4)) != 0 )
  {
    v6 = (int *)(v5 + 116);
    v7 = *v6;
    if ( !a2 )
    {
      if ( v7 == a1 )
        HMAssignmentUnlock(v6);
      return 1;
    }
    if ( !v7 )
    {
      HMAssignmentLock(v6, 0);
      return 1;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  return 0;
}
