/*
 * XREFs of CpcConnectNativeInterrupt @ 0x1C00203D0
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcConnectNativeInterrupt(struct _DEVICE_OBJECT **DeferredContext)
{
  struct _DEVICE_OBJECT *v1; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v1 = DeferredContext[30];
  v3 = *DeferredContext;
  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  WorkItem = IoAllocateWorkItem(v3);
  v1[1].NextDevice = (_DEVICE_OBJECT *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc(
      (PRKDPC)&v1->DeviceLock.Header.WaitListHead,
      (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc,
      DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)&v1->DeviceLock.Header.WaitListHead, &ProcNumber);
    KeSetImportanceDpc((PRKDPC)&v1->DeviceLock.Header.WaitListHead, MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(struct _DEVICE_OBJECT **))qword_1C00135A8)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.DeviceRoutine) = 1;
      ((void (*)(void))qword_1C00135B8)();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x11u,
      (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
