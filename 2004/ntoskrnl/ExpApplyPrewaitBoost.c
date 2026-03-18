/*
 * XREFs of ExpApplyPrewaitBoost @ 0x1403431A0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
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
