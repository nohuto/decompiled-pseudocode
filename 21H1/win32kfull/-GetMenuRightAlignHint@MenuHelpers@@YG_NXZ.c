/*
 * XREFs of ?GetMenuRightAlignHint@MenuHelpers@@YG_NXZ @ 0x1A159A
 * Callers:
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _GetUserHandedness@0 @ 0x159192 (_GetUserHandedness@0.c)
 */

bool MenuHelpers::GetMenuRightAlignHint()
{
  if ( CInputGlobals::GetLastInputType(_gpInputGlobals) == 13 || CInputGlobals::GetLastInputType(_gpInputGlobals) == 11 )
    return GetUserHandedness() == 1;
  else
    return RIMIsDefaultUILanguageRTL() != 0;
}
