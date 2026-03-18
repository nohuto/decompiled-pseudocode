/*
 * XREFs of ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C004EBEC
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C004F150 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0005548 (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 */

void __fastcall FxRequestFromLookaside::FxRequestFromLookaside(
        FxRequestFromLookaside *this,
        FxDevice *Device,
        _IRP *Irp)
{
  FxRequest::FxRequest(this, Device->m_Globals, Irp, FxRequestDoesNotOwnIrp, FxRequestConstructorCallerIsFx);
  this->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestFromLookaside::`vftable';
  this->m_DeviceBase = Device->m_DeviceBase;
}
