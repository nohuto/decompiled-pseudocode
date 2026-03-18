/*
 * XREFs of PsRegisterAltSystemCallHandler @ 0x140908720
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PsRegisterAltSystemCallHandler(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  v2 = (int)a2;
  if ( !a1 || a2 >= 2 )
    KeBugCheckEx(0x1E0u, 2uLL, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeBugCheckEx(0x1E0u, 3uLL, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  if ( PsAltSystemCallHandlers[v2] )
  {
    ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
    KeLeaveCriticalRegion();
    KeBugCheckEx(0x1E0u, 1uLL, PsAltSystemCallHandlers[v2], 0LL, 0LL);
  }
  PsAltSystemCallHandlers[v2] = a1;
  ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
