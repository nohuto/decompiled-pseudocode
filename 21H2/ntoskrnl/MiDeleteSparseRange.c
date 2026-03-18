/*
 * XREFs of MiDeleteSparseRange @ 0x14097E850
 * Callers:
 *     MiDeletePfnBitMaps @ 0x14097E6E8 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiReturnSplitPageCharges @ 0x1403C2A18 (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x1403C2A5C (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x14097E614 (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  _QWORD *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax

  if ( a1 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v5 = MiCaptureSparsePages((unsigned __int64)PteAddress, v4);
    MiReleasePtes((__int64)&qword_140C534C0, PteAddress, a2);
    if ( v5 )
    {
      v6 = MiReturnPfnList(v5);
      MiReturnSplitPageCharges((__int64)&MiSystemPartition, v6, 9);
    }
  }
}
