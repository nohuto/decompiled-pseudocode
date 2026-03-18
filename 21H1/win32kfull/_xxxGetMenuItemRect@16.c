/*
 * XREFs of _xxxGetMenuItemRect@16 @ 0x1AB926
 * Callers:
 *     _NtUserGetMenuItemRect@16 @ 0x1637F2 (_NtUserGetMenuItemRect@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1AB3D1 (-GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 */

int __fastcall xxxGetMenuItemRect(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v5; // esi
  int MenuPwnd; // eax
  int v7; // edi
  int v8; // esi
  int v9; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // esi
  int v18; // edi
  _DWORD v20[3]; // [esp+Ch] [ebp-10h] BYREF
  int v21; // [esp+18h] [ebp-4h]
  int v22; // [esp+28h] [ebp+Ch]

  v21 = a2;
  v5 = a1;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  a4[3] = 0;
  if ( a3 >= *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 24) )
    return 0;
  if ( !a1 || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 13) & 4) != 0 )
  {
    MenuPwnd = GetMenuPwnd(a1, a2);
    a2 = v21;
    v5 = MenuPwnd;
  }
  if ( !v5 )
    return 0;
  v22 = *(_BYTE *)(*(_DWORD *)(v5 + 20) + 18) & 0x40;
  if ( (*(_BYTE *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 20) & 1) != 0 )
  {
    v7 = *(_DWORD *)(v5 + 20);
    v8 = (*(_BYTE *)(v7 + 18) & 0x40) != 0 ? *(_DWORD *)(v7 + 76) : *(_DWORD *)(v7 + 68);
    v9 = *(_DWORD *)(v7 + 72);
  }
  else
  {
    v20[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v20[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v20;
    v20[1] = v5;
    HMLockObject(v5);
    xxxMNRecomputeBarIfNeeded(v5, v21);
    v12 = *(_DWORD **)(v5 + 20);
    v8 = v22 ? v12[15] : v12[13];
    v9 = v12[14];
    ThreadUnlock1();
    a2 = v21;
  }
  if ( a3 >= *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a2 + 20) + 24) )
    return 0;
  v13 = *(_DWORD *)(**(_DWORD **)a2 + 56) + 80 * a3;
  v14 = *(_DWORD *)(*(_DWORD *)v13 + 44);
  a4[2] = v14;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 48);
  a4[3] = v15;
  v16 = *(_DWORD **)v13;
  if ( v22 )
    v17 = v8 - (v16[9] + v16[11]);
  else
    v17 = v16[9] + v8;
  v18 = v16[10] + v9;
  *a4 += v17;
  a4[1] += v18;
  a4[2] = v14 + v17;
  a4[3] = v18 + v15;
  return 1;
}
