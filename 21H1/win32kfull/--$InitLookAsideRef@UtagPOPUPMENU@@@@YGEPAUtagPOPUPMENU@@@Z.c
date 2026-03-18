/*
 * XREFs of ??$InitLookAsideRef@UtagPOPUPMENU@@@@YGEPAUtagPOPUPMENU@@@Z @ 0x183D4D
 * Callers:
 *     _MNAllocPopup@4 @ 0x184482 (_MNAllocPopup@4.c)
 * Callees:
 *     <none>
 */

char __thiscall InitLookAsideRef<tagPOPUPMENU>(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v2 = (_DWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
  this[12] = v2;
  if ( !v2 )
    return 0;
  *v2 = this;
  *(_DWORD *)(this[12] + 4) = 0;
  *(_BYTE *)(this[12] + 8) = 0;
  return 1;
}
