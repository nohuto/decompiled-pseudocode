/*
 * XREFs of _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8
 * Callers:
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _MNFreePopup@8 @ 0x184632 (_MNFreePopup@8.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     ?GetMenuInheritedContextHelpId@@YGKABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1965EF (-GetMenuInheritedContextHelpId@@YGKABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 *     _MNSetTimerToCloseHierarchy@4 @ 0x1977B8 (_MNSetTimerToCloseHierarchy@4.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     <none>
 */

int __thiscall safe_cast_fnid_to_PMENUWND(_DWORD *this)
{
  int v1; // edx

  if ( !this )
    return 0;
  v1 = this[5];
  if ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x29C )
    return 0;
  if ( *(_DWORD *)(v1 + 160) )
    return this[41];
  return *(_DWORD *)(v1 + 192);
}
