/*
 * XREFs of IoVerifierInit @ 0x140A7FDC0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140A9B2E4 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14055712C (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140A7FD04 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
