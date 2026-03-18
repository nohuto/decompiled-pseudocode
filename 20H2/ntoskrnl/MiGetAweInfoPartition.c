/*
 * XREFs of MiGetAweInfoPartition @ 0x14054A894
 * Callers:
 *     MiFreePhysicalPageChain @ 0x14054A0E8 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x14054A980 (MiGetAweVadPartition.c)
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiAllocateAweInfo @ 0x1408D73C0 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1408D81CC (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D83E8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C4E4C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
}
