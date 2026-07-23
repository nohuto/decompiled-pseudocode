/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1406A4800
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x1402DB060 (RtlpHpMetadataHeapStart.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BC87C (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140740CA0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetIndex @ 0x140744C64 (SdbGetIndex.c)
 *     ExQueryBootEntropyInformation @ 0x140786960 (ExQueryBootEntropyInformation.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140918264 (RtlpLogCapabilityCheckLatency.c)
 *     ExpCheckTestsigningEnabled @ 0x14094BFDC (ExpCheckTestsigningEnabled.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094CE70 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x1406A48E0 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x1406A4990 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  int v10; // ebx
  PVOID v12; // r8
  NTSTATUS v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v10 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        goto LABEL_3;
      v10 = v13;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v10);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
