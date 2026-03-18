/*
 * XREFs of ExUnregisterCallback @ 0x140381270
 * Callers:
 *     IopCleanupNotifications @ 0x14037C2F0 (IopCleanupNotifications.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C4540 (KeRegisterProcessorChangeCallback.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1408976B0 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1408BE2C0 (KeDeregisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14091E7A0 (SeUnregisterImageVerificationCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A73B30 (PopUmpoInitializeMonitorChannel.c)
 *     IoUnregisterBootDriverCallback @ 0x140A77470 (IoUnregisterBootDriverCallback.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // r14
  KIRQL i; // al
  KIRQL v4; // di
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  for ( i = KeAcquireSpinLockRaiseToDpc(v1 + 1); ; i = KeAcquireSpinLockRaiseToDpc(v1 + 1) )
  {
    v4 = i;
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    KxReleaseSpinLock(v1 + 1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v5 = *(_QWORD **)CallbackRegistration;
  v6 = (PVOID *)*((_QWORD *)CallbackRegistration + 1);
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration || *v6 != CallbackRegistration )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  KxReleaseSpinLock(v1 + 1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && v4 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v11 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v4);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
