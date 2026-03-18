/*
 * XREFs of ExSetPoolFlags @ 0x1405ADF58
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D20 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409C3E50 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409DD3D0 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
