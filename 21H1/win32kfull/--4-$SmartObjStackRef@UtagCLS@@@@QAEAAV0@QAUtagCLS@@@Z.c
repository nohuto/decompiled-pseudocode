/*
 * XREFs of ??4?$SmartObjStackRef@UtagCLS@@@@QAEAAV0@QAUtagCLS@@@Z @ 0x152DC4
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagCLS>::operator=(_DWORD *this, int a2)
{
  SmartObjStackRefBase<tagCLS>::operator=(this, a2);
  return this;
}
