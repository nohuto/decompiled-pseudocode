/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@SAXPEAX@Z @ 0x1C0026A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::DeferredWorkQueueCallback(PKSPIN_LOCK SpinLock)
{
  PKSPIN_LOCK v2; // rsi
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK v4; // rax
  void (__fastcall *v5)(KSPIN_LOCK *); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    *((_BYTE *)SpinLock + 113) = 1;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
    if ( *((_DWORD *)SpinLock + 8) )
    {
      v2 = SpinLock + 2;
      do
      {
        v3 = (KSPIN_LOCK *)*v2;
        if ( *(PKSPIN_LOCK *)(*v2 + 8) != v2 || (v4 = *v3, *(KSPIN_LOCK **)(*v3 + 8) != v3) )
          __fastfail(3u);
        *v2 = v4;
        *(_QWORD *)(v4 + 8) = v2;
        SpinLock[1] = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ((void (__fastcall *)(KSPIN_LOCK))v3[2])(v3[3]);
        if ( *((_BYTE *)SpinLock + 112) )
        {
          v5 = (void (__fastcall *)(KSPIN_LOCK *))SpinLock[13];
          if ( v5 )
            v5(v3);
          else
            operator delete(v3);
        }
        KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
        SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
      }
      while ( (*((_DWORD *)SpinLock + 8))-- != 1 );
    }
    KeSetEvent((PRKEVENT)(SpinLock + 5), 0, 0);
    SpinLock[1] = 0LL;
    *((_BYTE *)SpinLock + 113) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
