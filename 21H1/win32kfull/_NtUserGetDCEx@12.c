/*
 * XREFs of _NtUserGetDCEx@12 @ 0x9C7D4
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserGetDCEx(int a1, int a2, int a3)
{
  int DCEx; // esi
  int *v4; // ebx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v6; // eax
  PKTHREAD v7; // eax
  int v8; // eax
  int v9; // ecx

  DCEx = 0;
  EnterSharedCrit(0, 1);
  if ( a2 && !GreIsValidRegion(a2) || a2 == _ghrgnGDC || (a3 & 0xFFDAF800) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_20;
  }
  if ( a1 )
  {
    v4 = (int *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = *(int **)(*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248) + 4) + 12);
    v6 = KeGetCurrentThread();
    if ( (*(_DWORD *)(W32GetThreadWin32Thread(v6) + 264) & 0x20000000) != 0 )
    {
      v7 = KeGetCurrentThread();
      v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v7) + 232) + 416) + 12) & 1;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 )
    {
      v9 = 0;
      if ( v4 )
        v9 = *v4;
      if ( !ValidateHwnd(v9) )
      {
        UserSetLastError((struct _NT_TIB *)5);
        goto LABEL_20;
      }
    }
  }
  if ( !a2 || GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v4, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return DCEx;
}
