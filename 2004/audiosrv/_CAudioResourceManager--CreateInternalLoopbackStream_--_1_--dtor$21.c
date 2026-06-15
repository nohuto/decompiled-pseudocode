/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$21 @ 0x1800ECC4A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((LPVOID **)(a2 + 432));
}
