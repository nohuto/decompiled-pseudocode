/*
 * XREFs of ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SGJPAPAVCHwndTargetProp@@@Z @ 0xB51D0
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CWindowProp::CreateWindowProp<CHwndTargetProp>(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  v2 = 0;
  v3 = (_DWORD *)Win32AllocPoolZInit(48, 1835299669);
  if ( !v3 )
    return -1073741801;
  v3[1] = 0;
  *v3 = &CHwndTargetProp::`vftable';
  memset(v3 + 2, 0, 0x18u);
  v3[8] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[11] = 0;
  *this = v3;
  return v2;
}
