/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1408A007C
 * Callers:
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405D8C04 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, (__int64 *)&BugCheckParameter2);
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
        v6 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(v6 + 32) |= 1u;
        ExReleasePushLockEx(v6, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation(&P) >= 0 )
        {
          v7 = KeGetCurrentThread();
          --v7->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v8 = PiPnpRtlObjectEventCreate((__int64)a2, 1u, (__int64)P, &v10);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v8 >= 0 && v10 )
            *((_DWORD *)v10 + 1) |= 1u;
          PiPnpRtlEndOperation((PVOID **)P);
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v4;
}
