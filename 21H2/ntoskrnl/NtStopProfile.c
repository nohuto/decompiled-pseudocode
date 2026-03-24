/*
 * XREFs of NtStopProfile @ 0x14095B040
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeStopProfile @ 0x14051BCE0 (KeStopProfile.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtStopProfile(void *a1)
{
  int v1; // ebp
  NTSTATUS result; // eax
  PADAPTER_OBJECT v3; // r14
  void *v4; // rbx
  struct _MDL *DmaOperations; // rdi
  _DMA_OPERATIONS *v6; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             ExProfileObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = DmaAdapter;
    if ( *(_QWORD *)&DmaAdapter[3].Version )
    {
      KeStopProfile((ULONG_PTR)DmaAdapter[2].DmaOperations);
      v4 = *(void **)&v3[3].Version;
      DmaOperations = (struct _MDL *)v3[3].DmaOperations;
      v6 = v3[2].DmaOperations;
      --ExpCurrentProfileUsage;
      *(_QWORD *)&v3[3].Version = 0LL;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnmapLockedPages(v4, DmaOperations);
      MmUnlockPages(DmaOperations);
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      v1 = -1073741641;
    }
    HalPutDmaAdapter(v3);
    return v1;
  }
  return result;
}
