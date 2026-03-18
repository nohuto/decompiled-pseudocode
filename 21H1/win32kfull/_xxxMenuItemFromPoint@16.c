/*
 * XREFs of _xxxMenuItemFromPoint@16 @ 0x1ABB72
 * Callers:
 *     _NtUserMenuItemFromPoint@16 @ 0x166E46 (_NtUserMenuItemFromPoint@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _MNItemHitTest@16 @ 0x19761B (_MNItemHitTest@16.c)
 *     ?GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1AB3D1 (-GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 */

int __fastcall xxxMenuItemFromPoint(int a1, int **a2, int a3, int a4)
{
  _DWORD *MenuPwnd; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // ecx
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF

  MenuPwnd = (_DWORD *)GetMenuPwnd(a1, (int)a2);
  if ( !MenuPwnd )
    return -1;
  if ( (*(_BYTE *)(*(_DWORD *)(**a2 + 20) + 20) & 1) == 0 )
  {
    v10[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v10[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v10;
    v10[1] = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    ThreadUnlock1();
  }
  v9 = (int)a2[2];
  if ( !v9 )
    v9 = **a2;
  return MNItemHitTest(v9, (int)MenuPwnd, a3, a4);
}
