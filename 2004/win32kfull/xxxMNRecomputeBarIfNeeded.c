/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C024FDDC
 * Callers:
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024A0E4 (xxxHiliteMenuItem.c)
 *     xxxGetMenuItemRect @ 0x1C024FC50 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C024FEFC (xxxMenuItemFromPoint.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     GetWindowBordersForDpi @ 0x1C0060694 (GetWindowBordersForDpi.c)
 *     GetCaptionHeight @ 0x1C01084FC (GetCaptionHeight.c)
 */

__int64 *__fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  int *v7; // r8
  int v8; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v10; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(__int64 **)(**a2 + 40);
  if ( (*((_DWORD *)result + 10) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(**a2 + 80) != a1 || !*(_DWORD *)(**a2 + 64) || (result = *a2, !*(_DWORD *)(**a2 + 68)) )
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
             && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return (__int64 *)xxxMenuBarCompute(
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
