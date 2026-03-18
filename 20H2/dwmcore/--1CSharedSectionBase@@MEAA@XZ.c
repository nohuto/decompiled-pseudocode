/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x1800D3F7C
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800D3F30 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x18016D9A0 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1801BDEE0 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800D3FB0 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
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
