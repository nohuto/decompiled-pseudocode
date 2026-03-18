/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1403E7CAC
 * Callers:
 *     SymCryptRestoreYmm @ 0x1403C4D4C (SymCryptRestoreYmm.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x140312D80 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
