/*
 * XREFs of ExSetPoolFlags @ 0x1405B3E08
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C7D40 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E1440 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
