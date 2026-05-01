/*
 * XREFs of ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x180154158
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180156424 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

bool __fastcall CApplicationManager::TryClosePopupForWindow(CApplicationManager *this, HWND a2)
{
  HWND LastActivePopup; // rdi
  bool v4; // bl
  HMENU SystemMenu; // rsi
  tagMENUITEMINFOW mii; // [rsp+20h] [rbp-58h] BYREF

  LastActivePopup = GetLastActivePopup(a2);
  if ( LastActivePopup == a2 || IsWindowEnabled(a2) )
    return 0;
  v4 = 0;
  SystemMenu = GetSystemMenu(LastActivePopup, 0);
  if ( SystemMenu )
  {
    mii.cbSize = 80;
    memset_0(&mii.fMask, 0, 0x4CuLL);
    if ( GetMenuItemInfoW(SystemMenu, 0xF060u, 0, &mii) )
    {
      v4 = (mii.fState & 3) == 0;
      if ( (mii.fState & 3) == 0 )
        PostMessageW(LastActivePopup, 0x112u, 0xF060uLL, 0LL);
    }
  }
  return v4;
}
