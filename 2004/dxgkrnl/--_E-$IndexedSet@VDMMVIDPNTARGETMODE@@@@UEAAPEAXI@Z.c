/*
 * XREFs of ??_E?$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C005AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ @ 0x1C005A10C (--1-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDPNTARGETMODE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  *P = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  Set<DMMVIDEOPRESENTSOURCE>::~Set<DMMVIDEOPRESENTSOURCE>(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
