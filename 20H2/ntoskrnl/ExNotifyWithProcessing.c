/*
 * XREFs of ExNotifyWithProcessing @ 0x14030FBC8
 * Callers:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x1403A5F60 (IopSessionChangeWorker.c)
 *     PoNotifySystemTimeSet @ 0x1403A6F44 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405172D8 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x1405B0C14 (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x14076D1D0 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140A5E014 (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140A5E374 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExpCallProcessing @ 0x14030FCF8 (ExpCallProcessing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // si
  KIRQL v12; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          ExpCallProcessing(1, v10[4], a2, a3, a4);
          ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
          ExpCallProcessing(0, v10[4], a2, a3, a4);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KxReleaseSpinLock(v8);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v16 = ~(unsigned __int16)(-1LL << (v11 + 1));
                  v17 = (v16 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v16;
                  if ( v17 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v11);
            ExpCallProcessing(1, v10[4], a2, a3, a4);
            ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
            ExpCallProcessing(0, v10[4], a2, a3, a4);
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            --*((_DWORD *)v10 + 10);
            v11 = v12;
            if ( *((_BYTE *)v10 + 44) && !*((_DWORD *)v10 + 10) )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KxReleaseSpinLock(v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && v11 <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            v20 = v19->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v17 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      __writecr8(v11);
    }
  }
}
