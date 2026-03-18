/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x140350C30
 * Callers:
 *     SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403E8AEC (SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeRestoreExtendedAndSupervisorState @ 0x140350C48 (KeRestoreExtendedAndSupervisorState.c)
 */

void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
