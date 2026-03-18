/*
 * XREFs of IoVerifierInit @ 0x1409C777C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C9D50 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140A4D7D4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1404FFDD8 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C76E4 (IoVerifierCheckForSettingsChange.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    return IoVerifierCheckForSettingsChange(a1);
  }
  return result;
}
