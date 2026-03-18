/*
 * XREFs of ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SGJPAPAVCVisRgnTrackerProp@@@Z @ 0xF4540
 * Callers:
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 * Callees:
 *     <none>
 */

int __thiscall CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(_DWORD *this)
{
  int v2; // esi
  _BYTE *v3; // edx

  v2 = 0;
  v3 = (_BYTE *)Win32AllocPoolZInit(36, 1953723989);
  if ( !v3 )
    return -1073741801;
  *this = v3;
  memset(v3, 0, 0x24u);
  *(_DWORD *)v3 = &CVisRgnTrackerProp::`vftable';
  v3[32] = 1;
  return v2;
}
