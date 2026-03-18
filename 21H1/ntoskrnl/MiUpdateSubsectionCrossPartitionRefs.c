/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14054F6DC
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiConvertStaticSubsections @ 0x1402A56A4 (MiConvertStaticSubsections.c)
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x1402BF084 (MiAppendSubsectionChain.c)
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
