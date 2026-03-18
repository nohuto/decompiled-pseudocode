/*
 * XREFs of _MNGetpItemFromIndex@8 @ 0x1D032
 * Callers:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _MNGetpItem@8 @ 0x1975F9 (_MNGetpItem@8.c)
 *     _MNItemHitTest@16 @ 0x19761B (_MNItemHitTest@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSetTop@8 @ 0x19A800 (_xxxMNSetTop@8.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 *     _xxxMNSetGapState@16 @ 0x1A77B8 (_xxxMNSetGapState@16.c)
 *     _xxxMNUpdateDraggingInfo@12 @ 0x1A798E (_xxxMNUpdateDraggingInfo@12.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MNGetpItemFromIndex(int a1, unsigned int a2)
{
  if ( a2 == -1 || a2 >= *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24) )
    return 0;
  else
    return *(_DWORD *)(a1 + 56) + 80 * a2;
}
