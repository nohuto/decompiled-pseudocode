/*
 * XREFs of MiDeleteSparseRange @ 0x1408D88B0
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1408D87AC (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiReturnPfnList @ 0x1403BAB10 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CEF04 (MiReturnSplitPageCharges.c)
 *     MiCaptureSparsePages @ 0x1408D86C4 (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  _QWORD *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  unsigned __int64 v9; // rax

  if ( a1 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v5 = MiCaptureSparsePages((unsigned __int64)PteAddress, v4);
    MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, a2);
    if ( v5 )
    {
      v9 = MiReturnPfnList(v5, v6, v7, v8);
      MiReturnSplitPageCharges((__int64)&MiSystemPartition, v9, 9);
    }
  }
}
