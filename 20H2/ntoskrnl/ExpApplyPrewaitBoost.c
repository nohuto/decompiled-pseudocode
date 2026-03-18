/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140314650
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402A1EA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B3370 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 */

__int64 ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  int v1; // r10d
  __int64 v2; // r11
  int v3; // r9d
  __int64 result; // rax
  int v5; // edx

  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 1
    && ((unsigned __int8)(v1 + 4) & *(_BYTE *)(v2 + 26)) == 0 )
  {
    v1 += 4;
  }
  v3 = v1 | 2;
  result = *(unsigned __int8 *)(v2 + 27);
  if ( (*(_BYTE *)(v2 + 26) & 2) != 0 )
    v3 = v1;
  v5 = v3 | 0xFF00;
  if ( *(char *)(v0 + 195) <= (int)result )
    v5 = v3;
  if ( v5 )
    return ExpApplyPriorityBoost(v2, v5, v0);
  return result;
}
