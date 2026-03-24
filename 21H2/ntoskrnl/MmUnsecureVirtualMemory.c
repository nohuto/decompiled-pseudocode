/*
 * XREFs of MmUnsecureVirtualMemory @ 0x14061F760
 * Callers:
 *     RtlFileMapFree @ 0x1403714EC (RtlFileMapFree.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x14061DE30 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x14061F950 (AlpcpRestoreWriteAccess.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140661B50 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140661FB8 (AlpcpPrepareViewForDelivery.c)
 *     WbFreeMemoryBlock @ 0x140687F88 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406B61EC (MmStoreAllocateVirtualMemory.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C3570 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C9968 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408CCEC4 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x14092F2B0 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14096C6DC (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x14025B5E0 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x14025B6F0 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DE50 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
