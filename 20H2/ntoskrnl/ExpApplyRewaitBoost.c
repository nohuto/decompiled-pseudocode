/*
 * XREFs of ExpApplyRewaitBoost @ 0x140330D90
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
}
