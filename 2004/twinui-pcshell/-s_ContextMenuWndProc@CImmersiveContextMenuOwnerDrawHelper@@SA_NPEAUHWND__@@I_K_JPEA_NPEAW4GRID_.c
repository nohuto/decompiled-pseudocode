/*
 * XREFs of ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18047B544
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18039BE30 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     s_HitTestContextMenu @ 0x18047BEAC (s_HitTestContextMenu.c)
 *     s_OnDrawItem @ 0x18047BF50 (s_OnDrawItem.c)
 *     s_OnMeasureItem @ 0x18047C99C (s_OnMeasureItem.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18047D370 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveContextMenuOwnerDrawHelper::s_ContextMenuWndProc(
        HWND hwnd,
        int a2,
        ImmersiveContextMenuHelper *a3,
        int a4,
        bool *a5)
{
  bool v5; // di
  int v8; // eax
  UINT v9; // ecx
  __int64 result; // rax
  bool v11; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v11 = 0;
  switch ( a2 )
  {
    case 43:
      v8 = s_OnDrawItem(hwnd);
      goto LABEL_9;
    case 44:
      GetWindowLongW(hwnd, -20);
      v8 = s_OnMeasureItem(hwnd);
LABEL_9:
      v5 = v8 >= 0;
      break;
    case 279:
      ImmersiveContextMenuHelper::HandleMergedMenus(a3, (HMENU)hwnd, (HWND)a3);
      break;
    case 517:
      LODWORD(a5) = (unsigned __int16)a4;
      HIDWORD(a5) = HIWORD(a4);
      s_HitTestContextMenu(hwnd, a5, &v11);
      v5 = v11;
      break;
  }
  v9 = dword_1805CF738;
  if ( !dword_1805CF738 )
  {
    v9 = RegisterWindowMessageW(L"TileContextMenuWindowMessage");
    dword_1805CF738 = v9;
  }
  result = v5;
  if ( a2 == v9 )
    return 1LL;
  return result;
}
