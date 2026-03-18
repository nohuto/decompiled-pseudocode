/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4
 * Callers:
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C005F8B4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     MNGetPopupFromMenu @ 0x1C00A287C (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     MNFlushDestroyedPopups @ 0x1C0222500 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02229B0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C022347C (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235D50 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0237114 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02377D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0238AB4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024AC44 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024F7A4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(_QWORD *a1, __int64 a2)
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
      *a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
