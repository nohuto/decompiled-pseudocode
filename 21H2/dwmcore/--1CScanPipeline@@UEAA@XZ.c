/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1802AEFB0
 * Callers:
 *     ??1CFormatConverter@@MEAA@XZ @ 0x1802AEF10 (--1CFormatConverter@@MEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1802AF090 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  DefaultHeap::Free(this[80]);
  this[80] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 74);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 67);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
