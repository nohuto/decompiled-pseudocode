/*
 * XREFs of TtmpStopCallout @ 0x1408FFC58
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1408FEBF4 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1408FEEC0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1408FEF5C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1408FEFDC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408FF08C (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1408FFCE8 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1408FF230 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1408FF5D4 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x140903C84 (TtmiLogCalloutStop.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v6; // r10
  struct _KTHREAD *CurrentThread; // rax

  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
    TtmpCalloutDestroyWatchdog(a1);
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v6 + 16),
    *(_DWORD *)(v6 + 72),
    *(_QWORD *)(v6 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
