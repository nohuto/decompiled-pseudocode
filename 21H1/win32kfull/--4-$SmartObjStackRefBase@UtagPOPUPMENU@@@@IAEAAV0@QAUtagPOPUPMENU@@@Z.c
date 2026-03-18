/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE
 * Callers:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     ??4?$SmartObjStackRef@UtagPOPUPMENU@@@@QAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x183DCF (--4-$SmartObjStackRef@UtagPOPUPMENU@@@@QAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _MNFlushDestroyedPopups@4 @ 0x184561 (_MNFlushDestroyedPopups@4.c)
 *     _MNUnlinkDelayedFreePopups@4 @ 0x18473A (_MNUnlinkDelayedFreePopups@4.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     ?GetMenuInheritedContextHelpId@@YGKABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1965EF (-GetMenuInheritedContextHelpId@@YGKABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _MNSetTimerToCloseHierarchy@4 @ 0x1977B8 (_MNSetTimerToCloseHierarchy@4.c)
 *     _xxxMNDismissIfOffMenu@8 @ 0x1984BA (_xxxMNDismissIfOffMenu@8.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNDragOver@8 @ 0x1A7669 (_xxxMNDragOver@8.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _xxxEndMenu@4 @ 0x1A7B2A (_xxxEndMenu@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     ?GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1AB3D1 (-GetMenuPwnd@@YGPAUtagWND@@PAU1@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEXXZ @ 0x411D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEXXZ.c)
 */

_DWORD *__thiscall SmartObjStackRefBase<tagPOPUPMENU>::operator=(_DWORD *this, int a2)
{
  if ( a2 != *(_DWORD *)*this )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(this);
    if ( a2 )
    {
      *this = *(_DWORD *)(a2 + 48);
      ++*(_DWORD *)(*this + 4);
    }
    else
    {
      *this = gSmartObjNullRef;
    }
  }
  return this;
}
