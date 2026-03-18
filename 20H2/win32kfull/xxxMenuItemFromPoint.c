/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C024E8F4
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C01FF550 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MNItemHitTest @ 0x1C023676C (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024E19C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, __int64 **a2, unsigned __int64 a3)
{
  __int64 MenuPwnd; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = GetMenuPwnd(a1, (__int64)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) & 1) == 0 )
  {
    v14[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v14;
    v14[1] = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, (__int64 ***)a2, v8, v9);
    ThreadUnlock1(v11, v10, v12);
  }
  v13 = (__int64)a2[2];
  if ( !v13 )
    v13 = **a2;
  return MNItemHitTest(v13, MenuPwnd, a3);
}
