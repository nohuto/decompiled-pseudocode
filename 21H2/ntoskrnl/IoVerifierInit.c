/*
 * XREFs of IoVerifierInit @ 0x1409C576C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C7D40 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x140A4FD74 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1405018D8 (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x1409C56D4 (IoVerifierCheckForSettingsChange.c)
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
