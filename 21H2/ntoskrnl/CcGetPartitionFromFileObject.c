/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1402E86C4
 * Callers:
 *     CcZeroData @ 0x1402E82C0 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return CcGetPartition(v2);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
