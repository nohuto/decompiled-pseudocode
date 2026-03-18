/*
 * XREFs of ??4?$SmartObjStackRef@UtagMENU@@@@QAEAAV0@QAUtagMENU@@@Z @ 0x1433E2
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

_DWORD *__thiscall SmartObjStackRef<tagMENU>::operator=(_DWORD *this, int a2)
{
  this[2] = 0;
  SmartObjStackRefBase<tagMENU>::operator=(this, a2);
  return this;
}
