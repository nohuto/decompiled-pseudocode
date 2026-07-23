/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x1408A32DC
 * Callers:
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x14062A0C4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v16; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v16 = 0LL;
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
        if ( (int)PiPnpRtlBeginOperation(&P) >= 0 )
        {
          v10 = KeGetCurrentThread();
          --v10->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v11 = PiPnpRtlObjectEventCreate((__int64)a2, 1u, (__int64)P, &v16);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
          if ( v11 >= 0 && v16 )
            *((_DWORD *)v16 + 1) |= 1u;
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
