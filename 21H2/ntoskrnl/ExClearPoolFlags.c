/*
 * XREFs of ExClearPoolFlags @ 0x1405B3868
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E1440 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
