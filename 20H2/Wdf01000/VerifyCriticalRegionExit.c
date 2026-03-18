/*
 * XREFs of VerifyCriticalRegionExit @ 0x1C0043748
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00C05E0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00C0700 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C07A0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00C08C0 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C0960 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00C0A80 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00C0B10 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00C0BA0 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C0C30 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00C0D50 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00C0DE0 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00C0E70 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00C0F00 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00C0F90 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00C1020 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00C10B0 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00C1150 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00C11F0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00C1280 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C1430 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C15F0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C17B0 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00C1960 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00C19F0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00C1AD0 (VfEvtIoWrite.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall VerifyCriticalRegionExit(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int8 OldCritRegion,
        unsigned __int64 Pfn)
{
  if ( KeGetCurrentIrql() <= 1u && OldCritRegion != KeAreApcsDisabled() )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      WDF_VERIFIER_CRITICAL_REGION_MISMATCH,
      Pfn,
      0LL);
}
