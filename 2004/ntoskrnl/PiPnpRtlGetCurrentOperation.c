/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1405DACCC
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405DABBC (PiPnpRtlCacheObjectBaseKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  __int64 *v5; // rax

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 )
    *a1 = v4;
  else
    return (unsigned int)-1073741275;
  return v2;
}
