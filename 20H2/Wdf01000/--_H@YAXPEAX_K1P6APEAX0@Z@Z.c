/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002CD10
 * Callers:
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C00437DC (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0059060 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0063100 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C006BC18 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C006FE9C (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C0074100 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void *(__fastcall *__f)(void *))
{
  do
  {
    __f(__t);
    __t += __s;
    --__n;
  }
  while ( __n );
}
