/*
 * XREFs of ExClearPoolFlags @ 0x1405B1C38
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1409E3450 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
