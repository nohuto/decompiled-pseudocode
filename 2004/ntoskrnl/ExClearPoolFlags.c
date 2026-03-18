/*
 * XREFs of ExClearPoolFlags @ 0x1405AE0D8
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409DD430 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
