/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSetMenuItemInfo @ 0x1C0033E40 (xxxSetMenuItemInfo.c)
 *     xxxSetSysMenu @ 0x1C0034410 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     NtUserDeleteMenu @ 0x1C00348E0 (NtUserDeleteMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0035870 (NtUserThunkedMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0035B38 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxMNCanClose @ 0x1C005BDA0 (xxxMNCanClose.c)
 *     xxxGetSysMenuPtr @ 0x1C005C1EC (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C005C3E0 (MNLookUpItem.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     _GetSubMenu @ 0x1C007922C (_GetSubMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C007BB68 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x1C007C328 (LockDesktopMenu.c)
 *     xxxGetSysMenu @ 0x1C007C474 (xxxGetSysMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C007C530 (xxxSetDialogSystemMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     xxxGetMenuBarInfo @ 0x1C00B2E88 (xxxGetMenuBarInfo.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     NtUserCreateWindowEx @ 0x1C00B92A0 (NtUserCreateWindowEx.c)
 *     xxxPaintMenuBar @ 0x1C00FAF50 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C00FB304 (xxxCalcMenuBar.c)
 *     _ServerFixupMenuDC @ 0x1C00FDB60 (_ServerFixupMenuDC.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0109180 (NtUserSetMenuDefaultItem.c)
 *     _SetMenuDefaultItem @ 0x1C010929C (_SetMenuDefaultItem.c)
 *     NtUserDestroyMenu @ 0x1C01149B0 (NtUserDestroyMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C01170B0 (NtUserThunkedMenuInfo.c)
 *     NtUserRemoveMenu @ 0x1C0117BA0 (NtUserRemoveMenu.c)
 *     NtUserEnableMenuItem @ 0x1C0120ED0 (NtUserEnableMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     NtUserSetSystemMenu @ 0x1C014ABC0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenu @ 0x1C014BD50 (NtUserSetMenu.c)
 *     NtUserCheckMenuItem @ 0x1C0150570 (NtUserCheckMenuItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015111C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01511B4 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     NtUserGetMenuItemRect @ 0x1C01FA570 (NtUserGetMenuItemRect.c)
 *     NtUserHiliteMenuItem @ 0x1C01FCC90 (NtUserHiliteMenuItem.c)
 *     NtUserMenuItemFromPoint @ 0x1C01FF550 (NtUserMenuItemFromPoint.c)
 *     NtUserSetMenuContextHelpId @ 0x1C0202040 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C0202110 (NtUserSetMenuFlagRtoL.c)
 *     NtUserTrackPopupMenuEx @ 0x1C02039A0 (NtUserTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSetTop @ 0x1C023B0B8 (xxxMNSetTop.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023F06C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MenuRecalc @ 0x1C0242E3C (MenuRecalc.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0244858 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025DBBC (_GetMenuDefaultItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagMENU>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 != *(_QWORD *)*a1 )
  {
    if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
    {
      if ( *(_BYTE *)(*a1 + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 152);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
