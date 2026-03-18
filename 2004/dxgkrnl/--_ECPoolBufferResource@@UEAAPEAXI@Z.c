/*
 * XREFs of ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C006CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPoolBufferResource@@UEAA@XZ @ 0x1C006CCA4 (--1CPoolBufferResource@@UEAA@XZ.c)
 */

PVOID *__fastcall CPoolBufferResource::`vector deleting destructor'(PVOID *P, char a2)
{
  CPoolBufferResource::~CPoolBufferResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
