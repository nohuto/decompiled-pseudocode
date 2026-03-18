/*
 * XREFs of BgpFwReserveAllocate @ 0x1403AA42C
 * Callers:
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C54920, v1, HintIndex);
  v3 = dword_140C54930;
  if ( ClearBitsAndSet > dword_140C54930 - 16 )
  {
    HintIndex = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C54920, v1, 0);
    v3 = dword_140C54930;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  HintIndex = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140C54910 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
