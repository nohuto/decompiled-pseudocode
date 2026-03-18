/*
 * XREFs of MiLocateLockedVadEvent @ 0x1402AA0CC
 * Callers:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiVadCommitCrossPartition @ 0x14027D378 (MiVadCommitCrossPartition.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiCheckUserVirtualAddress @ 0x1402B2640 (MiCheckUserVirtualAddress.c)
 *     MiMarkMdlComplete @ 0x1405340A0 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x140546960 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408D53D0 (MiCopyLargeVad.c)
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
