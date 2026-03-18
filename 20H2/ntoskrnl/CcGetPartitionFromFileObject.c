/*
 * XREFs of CcGetPartitionFromFileObject @ 0x140240E64
 * Callers:
 *     CcZeroData @ 0x140240A60 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404E84B0 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
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
