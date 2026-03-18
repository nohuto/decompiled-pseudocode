/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1802119F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CSharedSectionBase@@MEAA@XZ @ 0x1800EAA5C (--1CSharedSectionBase@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCrossContainerGuestReadWriteSharedSection *__fastcall CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(
        CCrossContainerGuestReadWriteSharedSection *this,
        char a2)
{
  *(_QWORD *)this = &CCrossContainerGuestReadWriteSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
