/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800ECB4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((LPVOID **)(a2 + 304));
}
