/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140235590
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1403294A0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 */

__int64 ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  unsigned int v1; // r10d
  __int64 v2; // r11
  unsigned int v3; // r9d
  __int64 result; // rax
  __int64 v5; // rdx

  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 1 && ((unsigned __int8)(v1 + 4) & *(_BYTE *)(v2 + 26)) == 0 )
    v1 += 4;
  v3 = v1 | 2;
  result = *(unsigned __int8 *)(v2 + 27);
  if ( (*(_BYTE *)(v2 + 26) & 2) != 0 )
    v3 = v1;
  v5 = v3 | 0xFF00;
  if ( *(char *)(v0 + 195) <= (int)result )
    v5 = v3;
  if ( (_DWORD)v5 )
    return ExpApplyPriorityBoost(v2, v5, v0);
  return result;
}
