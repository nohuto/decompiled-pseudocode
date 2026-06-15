/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800EDC34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 304), a2);
}
