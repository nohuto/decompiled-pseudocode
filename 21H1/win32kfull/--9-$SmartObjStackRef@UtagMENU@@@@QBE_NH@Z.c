/*
 * XREFs of ??9?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0xAEC26
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 */

bool __thiscall SmartObjStackRef<tagMENU>::operator!=(_DWORD *this, int a2)
{
  return !SmartObjStackRef<tagMENU>::operator==(this, (int)this);
}
