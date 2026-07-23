/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1406893D0
 * Callers:
 *     RtlFileMapFree @ 0x14037103C (RtlFileMapFree.c)
 *     WbFreeMemoryBlock @ 0x1405E70E8 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x1406895C0 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C36D0 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C9AC8 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x14092F410 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14096C8BC (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x14027CB50 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x14027CC60 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DE90 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
