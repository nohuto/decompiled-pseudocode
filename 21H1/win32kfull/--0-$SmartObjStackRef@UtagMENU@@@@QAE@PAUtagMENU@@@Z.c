/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QAE@PAUtagMENU@@@Z @ 0x183D89
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagMENU>::Init(this, a2);
  this[2] = 0;
  return this;
}
