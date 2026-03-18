/*
 * XREFs of xxxMenuBarCompute @ 0x1C005EE48
 * Callers:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C005E394 (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024FDDC (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C005EFC0 (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MNClearCachedPopupSizes @ 0x1C01216B8 (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 **a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 WindowDpiLastNotify; // bx
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 *v16; // rcx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0;
  if ( a2 )
  {
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(v9 + 288) & 0xF;
    if ( (_DWORD)v10 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v9 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
    }
    else if ( !(_DWORD)v10
           && (v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 448LL)) != 0
           && (v10 = **(_QWORD **)(v11 + 8), (*(_DWORD *)(v10 + 64) & 1) != 0) )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL);
      WindowDpiLastNotify = *(_WORD *)(v10 + 284);
    }
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
      WindowDpiLastNotify = *(_WORD *)(PsGetCurrentProcessWin32Process(v10) + 284);
    else
      WindowDpiLastNotify = 96;
    v9 = MEMORY[0x28];
  }
  if ( ((*(_DWORD *)(v9 + 232) & 0x10000000) != 0
     || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 820) & 0x100000) != 0)
    && *(_WORD *)(**a1 + 76) != WindowDpiLastNotify )
  {
    v16 = a1[2];
    if ( !v16 )
      v16 = (__int64 *)**a1;
    MNClearCachedPopupSizes(v16);
    *(_WORD *)(**a1 + 76) = WindowDpiLastNotify;
  }
  v13 = a5;
  v14 = xxxMNCompute((_DWORD)a1, a2, a2, a3, a4, a5, (__int64)&v17);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) == 0 )
  {
    if ( v17 )
      v14 = xxxMNCompute((_DWORD)a1, a2, a2, a3, a4, v13, (__int64)&v17);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
