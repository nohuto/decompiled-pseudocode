/*
 * XREFs of ExRegisterCallback @ 0x14037E960
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 *     HaliInitPowerManagement @ 0x1407A53F0 (HaliInitPowerManagement.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C4540 (KeRegisterProcessorChangeCallback.c)
 *     HalpMiscInitializeKsr @ 0x1407C4968 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x1407CF550 (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x1407D0340 (SeRegisterImageVerificationCallback.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 *     PiCslInitialize @ 0x140A51C1C (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140A72EFC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A73B30 (PopUmpoInitializeMonitorChannel.c)
 *     PopSetupKsrCallbacks @ 0x140A77070 (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140A944F0 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  struct _CALLBACK_OBJECT *PoolWithTag; // rax
  struct _CALLBACK_OBJECT *v7; // rbx
  char v8; // r14
  unsigned __int64 v9; // rsi
  PCALLBACK_OBJECT *v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  PoolWithTag = (struct _CALLBACK_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65524243u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = 0;
    *((_QWORD *)PoolWithTag + 2) = CallbackObject;
    v8 = 0;
    *((_QWORD *)PoolWithTag + 3) = CallbackFunction;
    *((_QWORD *)PoolWithTag + 4) = CallbackContext;
    *((_BYTE *)PoolWithTag + 44) = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    if ( *((_BYTE *)CallbackObject + 32)
      || *((PCALLBACK_OBJECT *)CallbackObject + 2) == (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
    {
      v8 = 1;
      v10 = (PCALLBACK_OBJECT *)*((_QWORD *)CallbackObject + 3);
      if ( *v10 != (PCALLBACK_OBJECT)((char *)CallbackObject + 16) )
        __fastfail(3u);
      *(_QWORD *)v7 = (char *)CallbackObject + 16;
      *((_QWORD *)v7 + 1) = v10;
      *v10 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)CallbackObject + 1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( !v8 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
