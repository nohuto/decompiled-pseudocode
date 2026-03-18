/*
 * XREFs of MiLocateLockedVadEvent @ 0x1402506EC
 * Callers:
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiVadCommitCrossPartition @ 0x14023029C (MiVadCommitCrossPartition.c)
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiLocateVadEvent @ 0x1402506D4 (MiLocateVadEvent.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiMarkMdlComplete @ 0x1405380C0 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x14054A980 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408DC560 (MiCopyLargeVad.c)
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
