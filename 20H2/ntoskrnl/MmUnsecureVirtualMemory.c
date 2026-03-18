/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1406245E0
 * Callers:
 *     RtlFileMapFree @ 0x140370DFC (RtlFileMapFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AA48 (AlpcpPrepareViewForDelivery.c)
 *     WbFreeMemoryBlock @ 0x14065D558 (WbFreeMemoryBlock.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x140685CD0 (AlpcpRestoreWriteAccess.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406D7768 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C5DB0 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408CC1A8 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408CF704 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x140931AE0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14096EFC4 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x14022EB00 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  void *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DCD0 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (void *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
