/*
 * XREFs of ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0020940
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001FD38 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x1C00228BC (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 */

void __fastcall FxIoResReqList::FxIoResReqList(FxIoResReqList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxResourceCollection::FxResourceCollection(this, FxDriverGlobals, 0x1037u, 0xA0u, 3u);
  this->m_SlotNumber = 0;
  this->m_InterfaceType = Internal;
  this->__vftable = (FxIoResReqList_vtbl *)FxIoResList::`vftable';
  this->m_AccessFlags = 3;
}
