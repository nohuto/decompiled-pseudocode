/*
 * XREFs of CcGetPartitionFromFileObject @ 0x140299A14
 * Callers:
 *     CcZeroData @ 0x140299610 (CcZeroData.c)
 *     CcDeferWrite @ 0x1404EA280 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1, char a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
    return CcGetPartition(v4, a2, a3);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
