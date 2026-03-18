/*
 * XREFs of ExpApplyRewaitBoost @ 0x14035FF00
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread(), a4);
}
