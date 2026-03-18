/*
 * XREFs of NtOpenPrivateNamespace @ 0x1406C0720
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406C0D00 (ObpCaptureBoundaryDescriptor.c)
 *     ObpLookupNamespaceEntry @ 0x1406C12F4 (ObpLookupNamespaceEntry.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  void *v13; // r14
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
    if ( v12 && (v13 = *(void **)(v12 + 16)) != 0LL )
    {
      ObfReferenceObject(v13);
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      P = ObOpenObjectByPointer(
            v13,
            v14 & (AccessMode != 0 ? 7666 : 73714),
            0LL,
            a2,
            ObpDirectoryObjectType,
            AccessMode,
            &Handle);
      ObfDereferenceObject(v13);
      *a1 = Handle;
      return P;
    }
    else
    {
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225530LL;
    }
  }
  return result;
}
