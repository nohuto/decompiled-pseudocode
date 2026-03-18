/*
 * XREFs of MmUnsecureVirtualMemory @ 0x140635790
 * Callers:
 *     RtlFileMapFree @ 0x14036E27C (RtlFileMapFree.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     AlpcpRestoreWriteAccess @ 0x14063864C (AlpcpRestoreWriteAccess.c)
 *     WbFreeMemoryBlock @ 0x14065BC4C (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E17BC (MmStoreAllocateVirtualMemory.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BEC20 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C5018 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x14092AA00 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x140967E54 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x1402A4930 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DD90 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
