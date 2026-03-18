/*
 * XREFs of MiDeleteSparseRange @ 0x1408D3E00
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1408D3CFC (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiReturnPfnList @ 0x1403B66D0 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1403CA9A8 (MiReturnSplitPageCharges.c)
 *     MiCaptureSparsePages @ 0x1408D3C14 (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  _QWORD *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned __int64 v11; // rax

  if ( a1 )
  {
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v7 = MiCaptureSparsePages((unsigned __int64)PteAddress, v4, v5, v6);
    MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, a2);
    if ( v7 )
    {
      v11 = MiReturnPfnList(v7, v8, v9, v10);
      MiReturnSplitPageCharges((__int64)&MiSystemPartition, v11, 9);
    }
  }
}
