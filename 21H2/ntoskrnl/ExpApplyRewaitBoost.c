/*
 * XREFs of ExpApplyRewaitBoost @ 0x1402D2E00
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
}
