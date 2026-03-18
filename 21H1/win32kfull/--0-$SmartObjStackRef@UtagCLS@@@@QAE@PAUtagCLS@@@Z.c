/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QAE@PAUtagCLS@@@Z @ 0xF1838
 * Callers:
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagCLS>::Init(this, a2);
  return this;
}
