/*
 * XREFs of __SetActivationFilter@8 @ 0x119D2
 * Callers:
 *     _NtUserSetActivationFilter@8 @ 0x11952 (_NtUserSetActivationFilter@8.c)
 * Callees:
 *     __FindActivationFilterWindow@4 @ 0x718AC (__FindActivationFilterWindow@4.c)
 */

BOOL __fastcall _SetActivationFilter(int a1, int a2)
{
  int ActivationFilterWindow; // eax
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  ActivationFilterWindow = _FindActivationFilterWindow();
  v5 = (_DWORD *)ActivationFilterWindow;
  if ( !a2 )
    goto LABEL_6;
  if ( ActivationFilterWindow )
  {
LABEL_7:
    v5[3] = a2;
    return v5 != 0;
  }
  v5 = (_DWORD *)Win32AllocPoolZInit(16, 1869443925);
  if ( v5 )
  {
    HMAssignmentLock(v7, v6);
    v8 = *(_DWORD *)(a1 + 12) + 192;
    v9 = *(_DWORD *)v8;
    if ( *(_DWORD *)(*(_DWORD *)v8 + 4) != v8 )
      __fastfail(3u);
    *v5 = v9;
    v5[1] = v8;
    *(_DWORD *)(v9 + 4) = v5;
    *(_DWORD *)v8 = v5;
LABEL_6:
    if ( v5 )
      goto LABEL_7;
  }
  return v5 != 0;
}
