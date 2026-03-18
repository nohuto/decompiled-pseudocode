/*
 * XREFs of _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C
 * Callers:
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     _xxxHiliteMenuItem@16 @ 0x1A6B5B (_xxxHiliteMenuItem@16.c)
 *     _xxxGetMenuItemRect@16 @ 0x1AB926 (_xxxGetMenuItemRect@16.c)
 *     _xxxMenuItemFromPoint@16 @ 0x1ABB72 (_xxxMenuItemFromPoint@16.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     _xxxMenuBarCompute@20 @ 0xB6974 (_xxxMenuBarCompute@20.c)
 */

int __fastcall xxxMNRecomputeBarIfNeeded(_DWORD *a1, int **a2)
{
  int result; // eax
  _DWORD *v5; // ecx
  int v6; // eax
  INT v7; // esi
  int WindowDpiLastNotify; // eax
  int v9; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // ecx
  int v13; // eax
  int WindowBordersForDpiWithCompatFlags2; // esi
  int CaptionHeight; // eax
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(**a2 + 20);
  if ( *(char *)(result + 20) >= 0 )
  {
    if ( *(_DWORD **)(**a2 + 52) != a1 || !*(_DWORD *)(**a2 + 36) || (result = **a2, !*(_DWORD *)(result + 40)) )
    {
      v5 = (_DWORD *)a1[5];
      v17 = v5;
      v6 = v5[46] & 0xF;
      if ( v6 == 3 )
      {
        v7 = (v5[46] >> 8) & 0x1FF;
      }
      else if ( (v5[36] & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        v5 = v17;
        v7 = WindowDpiLastNotify;
      }
      else if ( !v6 && (v9 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v9 + 4) + 32) & 1) != 0 )
      {
        v7 = 96;
      }
      else
      {
        v7 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
      }
      v18 = v5[4];
      v16 = v5[5];
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
        v13 = *(_DWORD *)(ThreadWin32Thread + 352);
      else
        v13 = 0;
      WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(v16, v18, v12, 0, v7, v13);
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               a2,
               a1,
               WindowBordersForDpiWithCompatFlags2 + CaptionHeight,
               WindowBordersForDpiWithCompatFlags2,
               *(_DWORD *)(a1[5] + 60) - *(_DWORD *)(a1[5] + 52) - 2 * WindowBordersForDpiWithCompatFlags2);
    }
  }
  return result;
}
