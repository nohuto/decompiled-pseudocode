/*
 * XREFs of ExClearPoolFlags @ 0x1405AD9B8
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409DD3D0 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
