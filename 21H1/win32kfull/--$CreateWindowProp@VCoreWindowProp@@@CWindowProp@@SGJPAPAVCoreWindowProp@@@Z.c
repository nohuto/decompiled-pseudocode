/*
 * XREFs of ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SGJPAPAVCoreWindowProp@@@Z @ 0xCC736
 * Callers:
 *     ?GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z @ 0xCC6FC (-GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CWindowProp::CreateWindowProp<CoreWindowProp>(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // eax

  v2 = 0;
  v3 = (_DWORD *)Win32AllocPoolZInit(28, 1920430933);
  if ( !v3 )
    return -1073741801;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  *v3 = &CoreWindowProp::`vftable';
  *this = v3;
  return v2;
}
