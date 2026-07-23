/*
 * XREFs of MiLocateLockedVadEvent @ 0x14030911C
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 *     MiVadCommitCrossPartition @ 0x140322F8C (MiVadCommitCrossPartition.c)
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 *     MiMarkMdlComplete @ 0x140539E00 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14054C6C0 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408D9E80 (MiCopyLargeVad.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateLockedVadEvent(__int64 a1, int a2)
{
  __int64 **result; // rax

  for ( result = *(__int64 ***)(a1 + 56); result && (a2 & (_DWORD)result[8]) == 0; result = (__int64 **)*result )
    ;
  return result;
}
