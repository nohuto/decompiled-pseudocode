/*
 * XREFs of ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x18019F890
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800EAA5C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSharedSectionBase *__fastcall CSharedSectionBase::`vector deleting destructor'(CSharedSectionBase *this, char a2)
{
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
