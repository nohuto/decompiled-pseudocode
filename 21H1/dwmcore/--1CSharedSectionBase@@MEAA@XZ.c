/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x1800CC71C
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800CC6D0 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x180172310 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1801C2730 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800CC750 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
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
