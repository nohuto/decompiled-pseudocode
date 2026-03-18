/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14054FD2C
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiConvertStaticSubsections @ 0x14024C674 (MiConvertStaticSubsections.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x140266054 (MiAppendSubsectionChain.c)
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
