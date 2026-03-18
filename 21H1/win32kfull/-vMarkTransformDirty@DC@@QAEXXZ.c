/*
 * XREFs of ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19
 * Callers:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F (-iSetMapMode@DC@@QAEHH@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall DC::vMarkTransformDirty(DC *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_DWORD *)this + 255);
  v2 = *((_DWORD *)this + 130);
  v3 = *(_DWORD *)(v1 + 340);
  if ( (v2 & 1) != 0 )
    v4 = (unsigned int)&loc_16090 | v3;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v1 + 340) = v4;
}
