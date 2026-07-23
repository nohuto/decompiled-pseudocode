/*
 * XREFs of ExpApplyRewaitBoost @ 0x140251380
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280LL, KeGetCurrentThread());
}
