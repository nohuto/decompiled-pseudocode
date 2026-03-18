/*
 * XREFs of ??$InitLookAsideRef@UtagCLS@@@@YGEPAUtagCLS@@@Z @ 0x47532
 * Callers:
 *     ?CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z @ 0x4750A (-CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

char __thiscall InitLookAsideRef<tagCLS>(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v2 = (_DWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
  this[18] = v2;
  if ( !v2 )
    return 0;
  *v2 = this;
  *(_DWORD *)(this[18] + 4) = 0;
  *(_BYTE *)(this[18] + 8) = 0;
  return 1;
}
