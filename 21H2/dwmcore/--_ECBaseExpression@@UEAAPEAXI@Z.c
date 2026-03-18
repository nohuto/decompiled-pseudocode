/*
 * XREFs of ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1802288F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CBaseExpression *__fastcall CBaseExpression::`vector deleting destructor'(CBaseExpression *this, char a2)
{
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
