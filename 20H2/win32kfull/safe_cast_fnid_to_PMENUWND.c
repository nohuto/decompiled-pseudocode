/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00363BC (MNGetPopupFromMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C00B2E88 (xxxGetMenuBarInfo.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     MNFreePopup @ 0x1C02218F8 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0233AC8 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0234EC0 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236944 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C024963C (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02498AC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0249B98 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int16 v6; // ax

  if ( !a1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v5 + 42) & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v5, a3, a4);
    v5 = *(_QWORD *)(a1 + 40);
  }
  v6 = *(_WORD *)(v5 + 42);
  if ( (v6 & 0x1000) != 0 || (v6 & 0x2FFF) != 0x29C )
    return 0LL;
  if ( *(_DWORD *)(v5 + 252) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v5 + 296);
}
