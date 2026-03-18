/*
 * XREFs of ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C004C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C001AD94 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DXGTARGETENTRY>::`vector deleting destructor'(_QWORD *P, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
