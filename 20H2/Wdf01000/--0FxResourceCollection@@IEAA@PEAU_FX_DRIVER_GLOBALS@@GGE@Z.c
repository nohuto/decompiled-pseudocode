/*
 * XREFs of ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C005B7B0
 * Callers:
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C005B70C (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00606E4 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008261C (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0014338 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003B2FC (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

void __fastcall FxResourceCollection::FxResourceCollection(
        FxResourceCollection *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 Type,
        unsigned __int16 Size,
        unsigned __int8 AccessFlags)
{
  FxNonPagedObject::FxNonPagedObject(this, Type, Size, FxDriverGlobals);
  this->m_Count = 0;
  this->m_ListHead.Blink = &this->m_ListHead;
  this->m_ListHead.Flink = &this->m_ListHead;
  this->m_Changed = 0;
  this->__vftable = (FxResourceCollection_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = AccessFlags;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
}
