/*
 * XREFs of ExClearPoolFlags @ 0x14063A5D8
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140A9AF9C (VfSettingsApplyMiscellaneousChecks.c)
 *     ViPtPluginUnload @ 0x140A9E0D0 (ViPtPluginUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
