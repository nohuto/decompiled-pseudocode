/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QBEPAUtagMENU@@XZ @ 0xAAD18
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     <none>
 */

int __thiscall SmartObjStackRef<tagMENU>::operator tagMENU *(_DWORD *this)
{
  int result; // eax

  result = this[2];
  if ( !result )
    return *(_DWORD *)*this;
  return result;
}
