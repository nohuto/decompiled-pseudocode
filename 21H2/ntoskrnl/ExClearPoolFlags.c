/*
 * XREFs of ExClearPoolFlags @ 0x1405B3638
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E0440 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
