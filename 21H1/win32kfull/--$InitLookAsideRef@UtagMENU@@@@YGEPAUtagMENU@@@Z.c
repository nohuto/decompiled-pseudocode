/*
 * XREFs of ??$InitLookAsideRef@UtagMENU@@@@YGEPAUtagMENU@@@Z @ 0xA71B4
 * Callers:
 *     ?InternalCreateMenu@@YGPAUtagMENU@@H@Z @ 0xA713E (-InternalCreateMenu@@YGPAUtagMENU@@H@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall InitLookAsideRef<tagMENU>(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v2 = (_DWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
  this[26] = v2;
  if ( !v2 )
    return 0;
  *v2 = this;
  *(_DWORD *)(this[26] + 4) = 0;
  *(_BYTE *)(this[26] + 8) = 0;
  return 1;
}
