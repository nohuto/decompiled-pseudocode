/*
 * XREFs of ExSetPoolFlags @ 0x14063B338
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140A82328 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140A82480 (VfInitVerifierComponents.c)
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140A9AF9C (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140A9B2E4 (ViIovInitialization.c)
 *     ViPtInitCircularPoolTrace @ 0x140A9DD9C (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
