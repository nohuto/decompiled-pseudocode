/*
 * XREFs of ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00B2DE4
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0039F7C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     NtUserSetCursorPos @ 0x1C003A370 (NtUserSetCursorPos.c)
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 *     EditionLLMouseButtonHook @ 0x1C0043AC0 (EditionLLMouseButtonHook.c)
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C004A450 (-OnPointerCursorOperation@@YAXXZ.c)
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     EditionHandleMitSignal @ 0x1C00B2D40 (EditionHandleMitSignal.c)
 *     ProcessHidRawInput @ 0x1C01D5C90 (ProcessHidRawInput.c)
 *     EditionLLMouseWheelHook @ 0x1C01D9F90 (EditionLLMouseWheelHook.c)
 *     NtUserInjectTouchInput @ 0x1C01FE850 (NtUserInjectTouchInput.c)
 *     OnPTPMouseOperation @ 0x1C0214660 (OnPTPMouseOperation.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01D524C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
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
