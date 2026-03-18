/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1406F8010
 * Callers:
 *     RtlFileMapFree @ 0x1402D89E8 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x140617B10 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     AlpcpRestoreWriteAccess @ 0x1406F60E8 (AlpcpRestoreWriteAccess.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     WbFreeMemoryBlock @ 0x1407E4374 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1407FABA0 (MmStoreAllocateVirtualMemory.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 *     VmUnsecureBackingMemory @ 0x1409D9B80 (VmUnsecureBackingMemory.c)
 *     VmpLockMemoryForPin @ 0x1409DA070 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 *     AslpFilePartialViewFree @ 0x140A1A5D0 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140C50680 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
