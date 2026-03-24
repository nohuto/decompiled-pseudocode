/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1405551CC
 * Callers:
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402A147C (MiAppendSubsectionChain.c)
 *     MiDeleteControlArea @ 0x1402F7AE4 (MiDeleteControlArea.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x140358B88 (MiConvertStaticSubsections.c)
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
