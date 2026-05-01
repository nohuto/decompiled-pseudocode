/*
 * XREFs of ?v_OnWindowCreated@UAPViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802CA460
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007D2E0 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

BOOL __fastcall UAPViewWrapper::v_OnWindowCreated(__int64 a1, int a2)
{
  BOOL result; // eax

  if ( a2 != 1 )
  {
    PushWindowTransparencyModeToWindow(*(HWND *)(a1 + 272), *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 560));
    return SetPropW(*(HWND *)(a1 + 272), L"CanOpenInNewTab", (HANDLE)(*(_DWORD *)(a1 + 260) != 0));
  }
  return result;
}
