/*
 * XREFs of ?MNIsCachedBmpOnly@@YGHPAUtagITEM@@@Z @ 0x1A90AB
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6 (-MNDrawHilite@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall MNIsCachedBmpOnly(_DWORD *this)
{
  int v1; // edx

  v1 = 0;
  if ( (*(_DWORD *)(*this + 4) & 0x20000000) != 0 )
    return this[3] == 0;
  return v1;
}
