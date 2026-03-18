/*
 * XREFs of ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SGJPAPAVCInputQueueProp@@@Z @ 0xB5118
 * Callers:
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CWindowProp::CreateWindowProp<CInputQueueProp>(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  v2 = 0;
  v3 = (_DWORD *)Win32AllocPoolZInit(32, 1902736213);
  if ( !v3 )
    return -1073741801;
  v3[1] = 0;
  v3[5] = 0;
  v3[6] = 0;
  *v3 = &CInputQueueProp::`vftable';
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[7] = 0;
  *this = v3;
  return v2;
}
