/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C0014E84
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C001507C (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0016DC0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0018660 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C001CD00 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A3CC (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A530 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002A5E8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002A7DC (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002ABC4 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C002D410 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoCyclePdoPort @ 0x1C002FF30 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C0030090 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00300F4 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C00301E8 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C00302D0 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C00304E0 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C00308D0 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030934 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00309F4 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0030C08 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0030CB0 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0030D50 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0030E40 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0030F00 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhPdoPower_Sequence @ 0x1C003C5D0 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0054958 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0054AFC (UsbhDeletePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C00556F0 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x1C00578D0 (UsbhPdoSuccess.c)
 *     UsbhPdoSystemControl @ 0x1C0057950 (UsbhPdoSystemControl.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058F24 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     USBHUB_TriggerCallBacks @ 0x1C00417F0 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  _DWORD *v4; // rdi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // r9
  _QWORD *v8; // rbx
  KIRQL v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax

  v4 = PdoExt(BugCheckParameter3);
  v5 = (KSPIN_LOCK *)(v4 + 304);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 152);
  v7 = 0LL;
  v8 = v4 + 306;
  v9 = v6;
  if ( *((_DWORD **)v4 + 153) != v4 + 306 )
    v7 = (_QWORD *)*((_QWORD *)v4 + 153);
  if ( !v7 || v7 == v8 )
  {
LABEL_14:
    v12 = v4[316];
    if ( !v12 )
    {
      if ( BugCheckParameter3 )
        USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v4[316] = v12 - 1;
  }
  else
  {
    while ( 1 )
    {
      v10 = (_QWORD *)*v7;
      if ( v7[2] == BugCheckParameter4 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v10 == v8 )
        goto LABEL_14;
    }
    if ( (_QWORD *)v10[1] != v7 || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v7 - 1, 0);
  }
  if ( (_QWORD *)*v8 != v8 || v4[316] )
  {
    KeReleaseSpinLock(v5, v9);
  }
  else
  {
    KeReleaseSpinLock(v5, v9);
    KeSetEvent((PRKEVENT)(v4 + 310), 0, 0);
  }
}
