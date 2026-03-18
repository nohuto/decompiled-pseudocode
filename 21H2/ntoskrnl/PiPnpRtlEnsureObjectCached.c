/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1409483EC
 * Callers:
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x14077A750 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, __int64 a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v6; // rbx
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, a2, (__int64 *)&BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = (unsigned int *)BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        v6[8] |= 1u;
        ExReleasePushLockEx((ULONG_PTR)v6, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) < 0 )
          goto LABEL_11;
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v8 = PiPnpRtlObjectEventCreate(a2, 1u, (__int64)P, &v10);
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegion();
        if ( v8 >= 0 && v10 )
          *((_DWORD *)v10 + 1) |= 1u;
        PiPnpRtlEndOperation((PVOID **)P);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  v6 = (unsigned int *)BugCheckParameter2;
LABEL_11:
  if ( v6 )
    PiDmObjectRelease(v6);
  return (unsigned int)v4;
}
