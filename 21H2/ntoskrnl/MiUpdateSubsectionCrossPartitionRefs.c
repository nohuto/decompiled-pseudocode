/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14055540C
 * Callers:
 *     MiAppendSubsectionChain @ 0x14021E9FC (MiAppendSubsectionChain.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x1403638D8 (MiConvertStaticSubsections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
