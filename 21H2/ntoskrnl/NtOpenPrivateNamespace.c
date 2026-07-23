/*
 * XREFs of NtOpenPrivateNamespace @ 0x1406BBF90
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5AC (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x1406BC948 (ObpLookupNamespaceEntry.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v13; // rsi
  __int64 v14; // r14
  struct _DMA_ADAPTER *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG Attributes; // [rsp+40h] [rbp-38h]
  NTSTATUS P; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  Attributes = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)NamespaceHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      Attributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    Attributes = ObjectAttributes->Attributes;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals(v10, v9);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v14 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, 0LL);
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    if ( v14 && (v15 = *(struct _DMA_ADAPTER **)(v14 + 16)) != 0LL )
    {
      ObfReferenceObject(v15);
      ExReleasePushLockEx(v13, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
      P = ObOpenObjectByPointer(
            v15,
            Attributes & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            DesiredAccess,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      HalPutDmaAdapter(v15);
      *NamespaceHandle = Handle;
      return P;
    }
    else
    {
      ExReleasePushLockEx(v13, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
      return -1073741766;
    }
  }
  return result;
}
