/*
 * XREFs of CcGetPartitionFromFileObject @ 0x140268114
 * Callers:
 *     CcZeroData @ 0x140267D10 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404E4F20 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && *(_QWORD *)(v1 + 8) )
    return CcGetPartition();
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
