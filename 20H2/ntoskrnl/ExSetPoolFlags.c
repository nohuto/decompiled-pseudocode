/*
 * XREFs of ExSetPoolFlags @ 0x1405B21D8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C9D50 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409C9E80 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E3450 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
