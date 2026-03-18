/*
 * XREFs of MiLocateLockedVadEvent @ 0x1402EE0E0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiComputeVadCharges @ 0x14030B440 (MiComputeVadCharges.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiCheckUserVirtualAddress @ 0x140353858 (MiCheckUserVirtualAddress.c)
 *     MiMarkMdlComplete @ 0x14059519C (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x1405AAFD8 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (a2 & *(_DWORD *)(result + 64)) != 0 )
      break;
  }
  return result;
}
