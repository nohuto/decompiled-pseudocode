/*
 * XREFs of ExpApplyRewaitBoost @ 0x14025C860
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280LL, KeGetCurrentThread());
}
