/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C0045764
 * Callers:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0045DC0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        KSPIN_LOCK *this,
        void *const a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned int v5; // r12d
  char v9; // si
  KSPIN_LOCK i; // rbx
  void (__fastcall *v11)(void *const, _QWORD, _QWORD, __int64, _QWORD); // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v9 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 206, &LockHandle);
  }
  else if ( (struct _KTHREAD *)this[208] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(this + 207));
    v9 = 1;
  }
  for ( i = this[211]; (KSPIN_LOCK *)i != this + 211 && i; i = *(_QWORD *)i )
  {
    if ( *(void *const *)(i + 32) == a2 )
    {
      v11 = *(void (__fastcall **)(void *const, _QWORD, _QWORD, __int64, _QWORD))(i + 56);
      if ( v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(a4) = a5;
        v11(a2, a3, v5, a4, *(_QWORD *)(i + 24));
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13);
          v15[3] = 275LL;
          v15[4] = 16LL;
          v15[5] = this;
          v15[6] = CurrentIrql;
          v16 = KeGetCurrentIrql();
          v15[7] = v16;
          WdLogEvent5_WdCriticalError(v15);
        }
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else if ( v9 )
  {
    ExReleasePushLockSharedEx(this + 207, 0LL);
    KeLeaveCriticalRegion();
  }
}
