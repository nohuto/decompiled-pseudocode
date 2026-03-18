/*
 * XREFs of MiGetAweInfoPartition @ 0x140546EC4
 * Callers:
 *     MiFreePhysicalPageChain @ 0x140546718 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x140546FB0 (MiGetAweVadPartition.c)
 *     MiReleaseVadEventBlocks @ 0x1405F8F10 (MiReleaseVadEventBlocks.c)
 *     MiAllocateAweInfo @ 0x1408D1580 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1408D238C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D25A8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C4E448 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
}
