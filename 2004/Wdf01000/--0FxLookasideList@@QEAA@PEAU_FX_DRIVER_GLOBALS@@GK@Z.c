/*
 * XREFs of ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0056148
 * Callers:
 *     imp_WdfLookasideListCreate @ 0x1C004C860 (imp_WdfLookasideListCreate.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C005497C (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C006BD4C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxLookasideList::FxLookasideList(
        FxLookasideList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned int PoolTag)
{
  FxObject::FxObject(this, 0x1009u, ObjectSize, FxDriverGlobals);
  this->m_BufferSize = 0LL;
  this->m_MemoryObjectSize = 0LL;
  this->__vftable = (FxLookasideList_vtbl *)FxLookasideList::`vftable';
  this->m_PoolTag = PoolTag;
}
