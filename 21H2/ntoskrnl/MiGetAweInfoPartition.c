/*
 * XREFs of MiGetAweInfoPartition @ 0x14054C394
 * Callers:
 *     MiFreePhysicalPageChain @ 0x14054BBE8 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x14054C480 (MiGetAweVadPartition.c)
 *     MiReleaseVadEventBlocks @ 0x1406ED390 (MiReleaseVadEventBlocks.c)
 *     MiAllocateAweInfo @ 0x1408D4B80 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1408D598C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BA8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6800 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C4E648 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
}
