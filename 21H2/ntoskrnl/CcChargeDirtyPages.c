/*
 * XREFs of CcChargeDirtyPages @ 0x14029D818
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 * Callees:
 *     CcChargeDirtyPagesInternal @ 0x14029E120 (CcChargeDirtyPagesInternal.c)
 */

__int64 __fastcall CcChargeDirtyPages(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 528);
    if ( CcEnablePerVolumeLazyWriter == 1 )
      v4 = *(_QWORD *)(a1 + 592);
  }
  else
  {
    v5 = *((_QWORD *)PspSystemPartition + 1);
  }
  return CcChargeDirtyPagesInternal(a1, a2, a3, a4, v5, v4);
}
