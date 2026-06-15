/*
 * XREFs of _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$5 @ 0x1800EEBDA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(
           (AuxiliaryInputDescriptor **)(a2 + 72),
           a2);
}
