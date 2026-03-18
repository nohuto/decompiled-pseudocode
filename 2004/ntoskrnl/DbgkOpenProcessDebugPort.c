/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x1408812F8
 * Callers:
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B5EA8 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS v6; // edi
  struct _DMA_ADAPTER *v7; // rbx
  __int64 v8; // rcx

  v6 = -1073740973;
  if ( *(_QWORD *)(a1 + 1400) )
  {
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v7 = *(struct _DMA_ADAPTER **)(a1 + 1400);
    if ( v7 )
      ObfReferenceObject(*(PVOID *)(a1 + 1400));
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( v7 )
    {
      LOBYTE(v8) = a2;
      if ( PsTestProtectedProcessIncompatibility(v8, (__int64)KeGetCurrentThread()->ApcState.Process, a1) )
      {
        v6 = -1073740014;
LABEL_8:
        HalPutDmaAdapter(v7);
        return (unsigned int)v6;
      }
      v6 = ObOpenObjectByPointer(v7, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  return (unsigned int)v6;
}
