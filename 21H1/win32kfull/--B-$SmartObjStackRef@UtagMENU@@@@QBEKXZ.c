/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QBEKXZ @ 0xC5932
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __thiscall SmartObjStackRef<tagMENU>::operator unsigned long(_DWORD *this)
{
  int result; // eax

  result = this[2];
  if ( !result )
    return *(_DWORD *)*this;
  return result;
}
