/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QAE@H@Z @ 0xF17DA
 * Callers:
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _NtUserCreateWindowEx@68 @ 0x4221A (_NtUserCreateWindowEx@68.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagMENU>::Init(this, 0);
  this[2] = a2;
  return this;
}
