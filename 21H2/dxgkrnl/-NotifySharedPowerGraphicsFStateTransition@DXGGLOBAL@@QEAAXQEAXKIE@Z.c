/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C00539A4
 * Callers:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00540C8 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        KSPIN_LOCK *this,
        void *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  char v9; // si
  KSPIN_LOCK i; // rbx
  KIRQL CurrentIrql; // al
  __int64 v12; // r9
  __int64 v13; // r15
  KIRQL v14; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 227, &LockHandle);
  }
  else if ( (struct _KTHREAD *)this[229] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(this + 228));
    v9 = 1;
  }
  for ( i = this[232]; (KSPIN_LOCK *)i != this + 232 && i; i = *(_QWORD *)i )
  {
    if ( *(void *const *)(i + 32) == a2 && *(_QWORD *)(i + 56) )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v12) = a5;
      v13 = CurrentIrql;
      (*(void (__fastcall **)(void *const, _QWORD, _QWORD, __int64, _QWORD))(i + 56))(
        a2,
        a3,
        a4,
        v12,
        *(_QWORD *)(i + 24));
      if ( (_BYTE)v13 != KeGetCurrentIrql() )
      {
        v14 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v14);
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else if ( v9 )
  {
    ExReleasePushLockSharedEx(this + 228, 0LL);
    KeLeaveCriticalRegion();
  }
}
