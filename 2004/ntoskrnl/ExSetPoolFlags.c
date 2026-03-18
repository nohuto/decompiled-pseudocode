/*
 * XREFs of ExSetPoolFlags @ 0x1405AE678
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D30 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409C3E60 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409DD430 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
