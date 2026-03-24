/*
 * XREFs of MiLocateLockedVadEvent @ 0x1402FE3CC
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x1402FE3B4 (MiLocateVadEvent.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 *     MiVadCommitCrossPartition @ 0x14031823C (MiVadCommitCrossPartition.c)
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x14032EA00 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiZeroFault @ 0x14034EE60 (MiZeroFault.c)
 *     MiMarkMdlComplete @ 0x140539BC0 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14054C480 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140559328 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408D9D20 (MiCopyLargeVad.c)
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
