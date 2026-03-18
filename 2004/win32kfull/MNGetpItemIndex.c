/*
 * XREFs of MNGetpItemIndex @ 0x1C00636B8
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C005F8B4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0061074 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0063704 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNDoubleClick @ 0x1C0238D48 (xxxMNDoubleClick.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024D04C (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemIndex(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a2 - *(_QWORD *)(a1 + 88);
  if ( (v2 & 0x8000000000000000uLL) == 0LL
    && v2 < 96 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL)
    && v2 == 96 * (v2 / 0x60) )
  {
    return (unsigned int)(v2 / 0x60);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
