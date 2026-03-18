/*
 * XREFs of ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00242E8
 * Callers:
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00234F4 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0024140 (--0FxPkgGeneral@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00241BC (--0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0024230 (--0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007A14 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPackage::FxPackage(
        FxPackage *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)Type, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxPackage_vtbl *)FxPackage::`vftable';
}
