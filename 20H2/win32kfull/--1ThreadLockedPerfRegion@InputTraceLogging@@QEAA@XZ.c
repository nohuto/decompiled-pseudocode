/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C0029580 (-OnPointerCursorOperation@@YAXXZ.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C002DCDC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     NtUserSetCursorPos @ 0x1C002E040 (NtUserSetCursorPos.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     EditionLLMouseButtonHook @ 0x1C00780A0 (EditionLLMouseButtonHook.c)
 *     NtUserSendInput @ 0x1C00BA360 (NtUserSendInput.c)
 *     EditionHandleMitSignal @ 0x1C00D72D0 (EditionHandleMitSignal.c)
 *     ProcessHidRawInput @ 0x1C01D4FD0 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01D92D0 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01FD9E0 (NtUserInjectTouchInput.c)
 *     OnPTPMouseOperation @ 0x1C02137E0 (OnPTPMouseOperation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D458C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        InputTraceLogging::ThreadLockedPerfRegion *this)
{
  __int64 v1; // rdi

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)this;
    *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *(_QWORD *)(v1 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(this);
  }
}
