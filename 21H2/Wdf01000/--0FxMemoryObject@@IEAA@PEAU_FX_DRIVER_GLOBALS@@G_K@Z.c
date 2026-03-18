/*
 * XREFs of ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001275C
 * Callers:
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C000FBCC (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00125E0 (imp_WdfMemoryCreatePreallocated.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0038B70 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z @ 0x1C0038BD2 (--0FxMemoryBufferFromLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_K@Z.c)
 *     ??0FxRequestMemory@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006ACD8 (--0FxRequestMemory@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C007BD10 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0016188 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C006CEE8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

void __fastcall FxMemoryObject::FxMemoryObject(
        FxMemoryObject *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int64 BufferSize)
{
  FxObject::FxObject(this, 0x1000u, ObjectSize, FxDriverGlobals);
  this->m_BufferSize = BufferSize;
  this->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
  this->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    FxObject::AllocateTagTracker(this, 0x100Au);
}
