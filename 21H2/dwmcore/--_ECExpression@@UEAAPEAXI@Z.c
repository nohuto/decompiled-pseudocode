/*
 * XREFs of ??_ECExpression@@UEAAPEAXI@Z @ 0x18006F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExpression@@UEAA@XZ @ 0x18006FB8C (--1CExpression@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CExpression *__fastcall CExpression::`vector deleting destructor'(CExpression *this, char a2)
{
  CExpression::~CExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1D0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
