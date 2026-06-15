/*
 * XREFs of ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800EAF50
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$5 @ 0x1800EEB1A (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$5.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800EB23C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(
        AuxiliaryInputDescriptor **a1,
        unsigned int a2)
{
  AuxiliaryInputDescriptor *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = AuxiliaryInputDescriptor::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
