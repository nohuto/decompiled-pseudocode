/*
 * XREFs of ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1800E650C
 * Callers:
 *     ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1800E64D0 (--_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 */

void __fastcall CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  CResource *v1; // rcx

  *(_QWORD *)this = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
  v1 = (CResource *)*((_QWORD *)this + 2);
  if ( v1 )
    CResource::InternalRelease(v1);
}
