/*
 * XREFs of _xxxMenuBarCompute@20 @ 0xB6974
 * Callers:
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _xxxCalcMenuBar@20 @ 0x94A6C (_xxxCalcMenuBar@20.c)
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     ?MBC_RightJustifyMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xB6AC2 (-MBC_RightJustifyMenu@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     _MNClearCachedPopupSizes@4 @ 0x1AB7D1 (_MNClearCachedPopupSizes@4.c)
 */

int __fastcall xxxMenuBarCompute(int **a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  __int16 WindowDpiLastNotify; // ax
  int v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h]

  v15 = 0;
  if ( a2 )
  {
    v8 = a2[5];
    v16 = v8;
    v9 = *(_DWORD *)(v8 + 184) & 0xF;
    if ( v9 == 3 )
    {
      v7 = (*(_DWORD *)(v8 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v8 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      v8 = v16;
      LOWORD(v7) = WindowDpiLastNotify;
    }
    else if ( !v9 && (v11 = *(_DWORD *)(a2[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v11 + 4) + 32) & 1) != 0 )
    {
      LOWORD(v7) = 96;
    }
    else
    {
      LOWORD(v7) = *(_WORD *)(*(_DWORD *)(a2[2] + 232) + 160);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      LOWORD(v7) = *(_WORD *)(PsGetCurrentProcessWin32Process() + 160);
    else
      LOWORD(v7) = 96;
    v8 = MEMORY[0x14];
  }
  if ( ((*(_DWORD *)(v8 + 144) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 464) & 0x100000) != 0)
    && *(_WORD *)(**a1 + 48) != (_WORD)v7 )
  {
    v12 = a1[2];
    if ( !v12 )
      v12 = (int *)**a1;
    MNClearCachedPopupSizes(v12);
    *(_WORD *)(**a1 + 48) = v7;
  }
  v13 = xxxMNCompute(a2, a3, a4, a5, &v15);
  if ( (*(_BYTE *)(*(_DWORD *)(**a1 + 20) + 20) & 1) == 0 )
  {
    if ( v15 )
      v13 = xxxMNCompute(a2, a3, a4, a5, &v15);
    MBC_RightJustifyMenu(a1);
  }
  return v13 != 0 ? v13 + 1 : 0;
}
