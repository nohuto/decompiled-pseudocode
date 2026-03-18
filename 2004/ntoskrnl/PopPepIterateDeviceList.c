/*
 * XREFs of PopPepIterateDeviceList @ 0x14056FF70
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x1405795E4 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

bool __fastcall PopPepIterateDeviceList(
        void (__fastcall *a1)(__int64),
        unsigned __int8 (__fastcall *a2)(__int64 *, __int64),
        void (__fastcall *a3)(void (__fastcall *)(__int64), __int64),
        __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  void (__fastcall *v9)(__int64); // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbx
  bool v12; // di

  v9 = a1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  }
  if ( v9 )
    v9(a7);
  v11 = (__int64 *)PopPepDeviceList;
  v12 = 1;
  if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
  {
    do
    {
      if ( !a2(v11, a7) )
        break;
      v11 = (__int64 *)*v11;
    }
    while ( v11 != &PopPepDeviceList );
    v12 = v11 == &PopPepDeviceList;
  }
  if ( a3 )
  {
    LOBYTE(a1) = v12;
    a3(a1, a7);
  }
  if ( a6 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12;
}
