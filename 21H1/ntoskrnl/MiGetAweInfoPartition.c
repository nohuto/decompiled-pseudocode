/*
 * XREFs of MiGetAweInfoPartition @ 0x140546874
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x140546960 (MiGetAweVadPartition.c)
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 *     MiAllocateAweInfo @ 0x1408D0230 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1408D103C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D1258 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
    return *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C4E588 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
}
