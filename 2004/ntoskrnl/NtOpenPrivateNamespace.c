/*
 * XREFs of NtOpenPrivateNamespace @ 0x1406F3C10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5DC (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x1406F42EC (ObpLookupNamespaceEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtOpenPrivateNamespace(HANDLE *a1, ACCESS_MASK a2, __int64 a3, __m128i *a4)
{
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v7; // rcx
  __int64 result; // rax
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v11; // rsi
  __int64 v12; // r14
  struct _DMA_ADAPTER *v13; // r14
  unsigned int v14; // ebx
  int v15; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF

  P = 0LL;
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v15 = 0;
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
      v15 = *(_DWORD *)(a3 + 24);
    }
  }
  else if ( a3 )
  {
    v15 = *(_DWORD *)(a3 + 24);
  }
  result = ObpCaptureBoundaryDescriptor(a4, (char **)&P);
  if ( (int)result >= 0 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
    v12 = ObpLookupNamespaceEntry(CurrentServerSiloGlobals + 128, P);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v12 && (v13 = *(struct _DMA_ADAPTER **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v14 = ObOpenObjectByPointer(
              v13,
              v15 & (AccessMode != 0 ? 7666 : 73714),
              0LL,
              a2,
              ObpDirectoryObjectType,
              AccessMode,
              &Handle);
      LODWORD(P) = v14;
      HalPutDmaAdapter(v13);
      *a1 = Handle;
      return v14;
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
