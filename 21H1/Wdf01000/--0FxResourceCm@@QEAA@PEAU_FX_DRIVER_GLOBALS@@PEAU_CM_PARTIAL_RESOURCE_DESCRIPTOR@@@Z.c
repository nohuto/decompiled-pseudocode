/*
 * XREFs of ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005C044
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C005C190 (FxCmResourceListInsertDescriptor.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C006117C (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceCm::FxResourceCm(
        FxResourceCm *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, 0x1017u, 0, FxDriverGlobals);
  this->__vftable = (FxResourceCm_vtbl *)FxResourceCm::`vftable';
  this->m_Descriptor = *Resource;
}
