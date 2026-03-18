/*
 * XREFs of MiLocateLockedVadEvent @ 0x14025109C
 * Callers:
 *     MiVadCommitCrossPartition @ 0x140224328 (MiVadCommitCrossPartition.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiFreeVadRange @ 0x140252064 (MiFreeVadRange.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiMarkMdlComplete @ 0x1405346F0 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x140546FB0 (MiGetAweVadPartition.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
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
