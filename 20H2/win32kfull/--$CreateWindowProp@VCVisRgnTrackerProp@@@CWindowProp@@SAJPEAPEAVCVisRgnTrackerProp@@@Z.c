/*
 * XREFs of ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C6DDC
 * Callers:
 *     CreateVisRgnTracker @ 0x1C00C6F1C (CreateVisRgnTracker.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _BYTE *v3; // rax
  _BYTE *v4; // rdi

  v2 = 0;
  v3 = (_BYTE *)Win32AllocPoolZInit(72LL, 1953723989LL);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x48uLL);
    v4[64] = 1;
    *(_QWORD *)v4 = &CVisRgnTrackerProp::`vftable';
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
