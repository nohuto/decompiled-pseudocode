/*
 * XREFs of ExRegisterCallback @ 0x14025A0B0
 * Callers:
 *     HvlPhase2Initialize @ 0x1403DE4F0 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x1406090C0 (DifExRegisterCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x14081E1F0 (HaliInitPowerManagement.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     HalpMiscInitializeKsr @ 0x140858BAC (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140863630 (IoRegisterBootDriverCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x140864610 (SeRegisterImageVerificationCallback.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     PiCslInitialize @ 0x140B01758 (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B2CD08 (PopUmpoInitializeMonitorChannel.c)
 *     PopSetupKsrCallbacks @ 0x140B3129C (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140B509E0 (PiKsrNotifyInitialize.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
