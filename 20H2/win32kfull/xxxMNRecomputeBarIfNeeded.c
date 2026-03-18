/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C024E7D4
 * Callers:
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242468 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0248B34 (xxxHiliteMenuItem.c)
 *     xxxGetMenuItemRect @ 0x1C024E648 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C024E8F4 (xxxMenuItemFromPoint.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     GetWindowBordersForDpi @ 0x1C00C7CA0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C0109718 (GetCaptionHeight.c)
 */

__int64 **__fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 ***a2, __int64 a3, __int64 a4)
{
  __int64 **result; // rax
  int *v7; // r8
  int v8; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v10; // rax
  unsigned int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = (__int64 **)(**a2)[5];
  if ( (*((_DWORD *)result + 10) & 0x80u) == 0 )
  {
    if ( (**a2)[10] != a1 || !*((_DWORD *)**a2 + 16) || (result = *a2, !*((_DWORD *)**a2 + 17)) )
    {
      v7 = *(int **)(a1 + 40);
      v8 = v7[72] & 0xF;
      if ( v8 == 3 )
      {
        WindowDpiLastNotify = ((unsigned int)v7[72] >> 8) & 0x1FF;
      }
      else if ( (v7[58] & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v8
             && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return (__int64 **)xxxMenuBarCompute(
                           a2,
                           a1,
                           WindowBordersForDpi + CaptionHeight,
                           WindowBordersForDpi,
                           *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
                         - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
                         - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
