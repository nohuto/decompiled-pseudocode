/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C007920C
 * Callers:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C00B2E88 (xxxGetMenuBarInfo.c)
 *     _ServerFixupMenuDC @ 0x1C00FDB60 (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
