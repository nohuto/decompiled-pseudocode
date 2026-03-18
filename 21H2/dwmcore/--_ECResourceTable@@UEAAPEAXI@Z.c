/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18005E910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceTable@@UEAA@XZ @ 0x18005E954 (--1CResourceTable@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  CResourceTable::~CResourceTable(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
