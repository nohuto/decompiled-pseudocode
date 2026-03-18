/*
 * XREFs of NtOpenPrivateNamespace @ 0x14071B1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14071B7BC (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x14071BB58 (ObpLookupNamespaceEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, void *a4)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 v12; // r14
  struct _DMA_ADAPTER *v13; // r14
  int v14; // [rsp+40h] [rbp-38h]
  unsigned int P; // [rsp+48h] [rbp-30h]
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v14 = 0;
  if ( AccessMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( a3 )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v14 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4);
  if ( (int)result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v12 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, 0LL);
    ExFreePoolWithTag(0LL, 0x534E624Fu);
    if ( v12 && (v13 = *(struct _DMA_ADAPTER **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      P = ObOpenObjectByPointer(
            v13,
            v14 & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            a2,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      HalPutDmaAdapter(v13);
      *a1 = Handle;
      return P;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225530LL;
    }
  }
  return result;
}
