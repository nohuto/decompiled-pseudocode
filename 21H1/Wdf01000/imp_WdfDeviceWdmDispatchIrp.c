/*
 * XREFs of imp_WdfDeviceWdmDispatchIrp @ 0x1C0049510
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C001362C (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1C00C5E70 (Vf_VerifyWdfDeviceWdmDispatchIrp.c)
 */

NTSTATUS __fastcall imp_WdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        unsigned __int64 DispatchContext)
{
  FxDevice *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxDevice *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&v10);
  v7 = v10;
  if ( !Irp )
    FxVerifierNullBugCheck(v10->m_Globals, retaddr);
  if ( !DispatchContext )
    FxVerifierNullBugCheck(v10->m_Globals, retaddr);
  if ( (DispatchContext & 1) != 0 )
    return FxPkgIo::DispatchStep1(v10->m_PkgIo, Irp, (_LIST_ENTRY *)(DispatchContext & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v10->m_Globals->FxVerifierOn )
  {
    Vf_VerifyWdfDeviceWdmDispatchIrp((_FX_DRIVER_GLOBALS *)v10, DriverGlobals, v10, (void *)DispatchContext);
    v7 = v10;
  }
  return FxDevice::DispatchPreprocessedIrp(v7, Irp, (void *)DispatchContext);
}
