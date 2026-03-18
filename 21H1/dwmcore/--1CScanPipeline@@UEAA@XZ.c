/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x18021AB38
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x18021AA8C (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x18021AC10 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  operator delete(this[80]);
  this[80] = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 74));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 67));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1));
}
