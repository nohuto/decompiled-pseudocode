/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1402C1144
 * Callers:
 *     CcZeroData @ 0x1402C0D40 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404E4970 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD **)(v1 + 8)) != 0LL )
    return CcGetPartition(v2);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
