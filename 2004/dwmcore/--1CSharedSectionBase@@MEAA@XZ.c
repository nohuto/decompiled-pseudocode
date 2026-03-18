/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x1800D44DC
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800D4490 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x18016F780 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1801BFE10 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800D4510 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

void __fastcall CSharedSectionBase::~CSharedSectionBase(CSharedSectionBase *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &CSharedSectionBase::`vftable';
  if ( !v1 )
    CSharedSectionBase::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
