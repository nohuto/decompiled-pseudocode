/*
 * XREFs of ExpApplyRewaitBoost @ 0x1403225F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread(), a4);
}
