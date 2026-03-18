/*
 * XREFs of ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00051A4
 * Callers:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C000514C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014338 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001733C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00195E8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0055878 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005B764 (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C005B81C (--0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00610B4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C0061990 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0090BB4 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C00056D0 (-Construct@FxObject@@AEAAXE@Z.c)
 */

void __fastcall FxObject::FxObject(
        FxObject *this,
        unsigned __int16 Type,
        unsigned __int16 Size,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  this->m_SpinLock.m_Lock = 0LL;
  this->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  this->m_Type = Type;
  this->m_Globals = FxDriverGlobals;
  this->m_ObjectSize = (Size + 15) & 0xFFF0;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(this, 0);
}
