/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1406A92FC
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406A91EC (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0LL;
  *a1 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  v5 = (__int64 *)PiPnpRtlActiveOperations;
  while ( v5 != &PiPnpRtlActiveOperations )
  {
    v4 = v5;
    if ( (struct _KTHREAD *)v5[2] == CurrentThread )
      break;
    v5 = (__int64 *)*v5;
    v4 = 0LL;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( v4 )
    *a1 = v4;
  else
    return (unsigned int)-1073741275;
  return v2;
}
