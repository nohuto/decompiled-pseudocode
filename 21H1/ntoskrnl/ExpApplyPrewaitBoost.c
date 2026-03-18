/*
 * XREFs of ExpApplyPrewaitBoost @ 0x140305750
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140285BF0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF0F0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 */

__int64 ExpApplyPrewaitBoost()
{
  __int64 v0; // r8
  unsigned int v1; // r10d
  __int64 v2; // r11
  unsigned __int64 v3; // r9
  __int64 result; // rax
  unsigned int v5; // edx

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
    return ExpApplyPriorityBoost(v2, v5, v0, (_DWORD *)v3);
  return result;
}
