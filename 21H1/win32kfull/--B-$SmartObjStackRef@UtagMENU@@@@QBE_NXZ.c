/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 * Callees:
 *     <none>
 */

bool __thiscall SmartObjStackRef<tagMENU>::operator bool(_DWORD *this)
{
  return this[2] || *(_DWORD *)*this != 0;
}
