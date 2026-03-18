/*
 * XREFs of ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C005C530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C005C408 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::`vector deleting destructor'(_QWORD *P, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
