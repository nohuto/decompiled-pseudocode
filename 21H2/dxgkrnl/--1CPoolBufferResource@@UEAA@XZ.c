/*
 * XREFs of ??1CPoolBufferResource@@UEAA@XZ @ 0x1C007EDFC
 * Callers:
 *     ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C007EF10 (--_ECPoolBufferResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C007ED60 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[7]);
  ObfDereferenceObject(this[8]);
  CFlipResource::~CFlipResource((CFlipResource *)this);
}
