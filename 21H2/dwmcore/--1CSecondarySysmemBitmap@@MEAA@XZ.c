/*
 * XREFs of ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1800EB22C
 * Callers:
 *     ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x1800EB1F0 (--_ECSecondarySysmemBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CSecondarySysmemBitmap::~CSecondarySysmemBitmap(CSecondarySysmemBitmap *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
    DefaultHeap::Free(v2);
  FastRegion::CRegion::FreeMemory((void **)this + 6);
}
