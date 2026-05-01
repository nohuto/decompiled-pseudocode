/*
 * XREFs of ?GetCaretPointFromWindowThread@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@PEAUHWND__@@@Z @ 0x18046325C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C1670 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C1670.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetCaretPointFromWindowThread(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  DWORD WindowThreadProcessId; // ebx
  HWND hwndCaret; // rcx
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  WindowThreadProcessId = GetWindowThreadProcessId(a3, 0LL);
  memset_0(&pgui, 0, sizeof(pgui));
  pgui.cbSize = 72;
  if ( GetGUIThreadInfo(WindowThreadProcessId, &pgui) && pgui.hwndCaret )
  {
    ClientToScreen(pgui.hwndCaret, (LPPOINT)&pgui.rcCaret);
    ClientToScreen(pgui.hwndCaret, (LPPOINT)&pgui.rcCaret.right);
    hwndCaret = pgui.hwndCaret;
    *(RECT *)a2 = pgui.rcCaret;
    *(_QWORD *)(a2 + 16) = hwndCaret;
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return a2;
}
