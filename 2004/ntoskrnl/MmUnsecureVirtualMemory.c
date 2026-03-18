/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140600750
 * Callers:
 *     RtlFileMapFree @ 0x14036EEAC (RtlFileMapFree.c)
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14060360C (AlpcpRestoreWriteAccess.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     WbFreeMemoryBlock @ 0x1406D9FD8 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BFF70 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C6368 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408C98C4 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x14092BCB0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x1409691F4 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x14024B900 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x14024BA10 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  void *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DC50 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (void *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
