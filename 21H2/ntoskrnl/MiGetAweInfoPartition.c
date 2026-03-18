/*
 * XREFs of MiGetAweInfoPartition @ 0x1405AAEC8
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x1405AAFD8 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x14097BBE0 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x14097CAE8 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
}
