/*
 * XREFs of _MNGetpItemIndex@8 @ 0x99EF2
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _MNIspItemValid@8 @ 0x19760F (_MNIspItemValid@8.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall MNGetpItemIndex(int a1, int a2)
{
  unsigned int v2; // edx
  unsigned int result; // eax

  v2 = a2 - *(_DWORD *)(a1 + 56);
  if ( (v2 & 0x80000000) != 0 )
    return -1;
  if ( v2 >= 80 * *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24) )
    return -1;
  result = v2 / 0x50;
  if ( v2 % 0x50 )
    return -1;
  return result;
}
