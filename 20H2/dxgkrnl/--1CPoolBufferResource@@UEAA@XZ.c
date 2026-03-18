/*
 * XREFs of ??1CPoolBufferResource@@UEAA@XZ @ 0x1C006CB74
 * Callers:
 *     ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1C006CC10 (--_ECPoolBufferResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C006CB20 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[6]);
  ObfDereferenceObject(this[7]);
  CFlipResource::~CFlipResource((CFlipResource *)this);
}
