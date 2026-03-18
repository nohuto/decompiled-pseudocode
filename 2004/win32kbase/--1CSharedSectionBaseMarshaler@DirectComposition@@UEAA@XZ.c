/*
 * XREFs of ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00501B0
 * Callers:
 *     ??_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0050170 (--_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0CD0 (--_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01E5440 (--_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(
        DirectComposition::CSharedSectionBaseMarshaler *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionBaseMarshaler::`vftable';
  v1 = (void *)*((_QWORD *)this + 7);
  if ( v1 )
    ObfDereferenceObject(v1);
}
