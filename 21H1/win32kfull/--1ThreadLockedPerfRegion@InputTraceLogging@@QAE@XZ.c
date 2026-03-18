/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _NtUserSetCursorPos@8 @ 0xAE922 (_NtUserSetCursorPos@8.c)
 *     ?OnPointerCursorOperation@@YGXXZ @ 0xAF582 (-OnPointerCursorOperation@@YGXXZ.c)
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     _EditionHandleMitSignal@4 @ 0xAFAEE (_EditionHandleMitSignal@4.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     _ProcessHidRawInput@4 @ 0x14434F (_ProcessHidRawInput@4.c)
 *     _EditionLLMouseButtonHook@28 @ 0x1479C6 (_EditionLLMouseButtonHook@28.c)
 *     _EditionLLMouseWheelHook@24 @ 0x147BBA (_EditionLLMouseWheelHook@24.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     _OnPTPMouseOperation@0 @ 0x178BB9 (_OnPTPMouseOperation@0.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void __thiscall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  int v2; // edi
  PKTHREAD CurrentThread; // eax

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 8) = *(_DWORD *)(v2 + 40);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
