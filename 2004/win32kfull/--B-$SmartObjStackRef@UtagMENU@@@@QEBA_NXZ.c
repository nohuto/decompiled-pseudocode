/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C005C53C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00AECD0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _ServerFixupMenuDC @ 0x1C01015A0 (_ServerFixupMenuDC.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
