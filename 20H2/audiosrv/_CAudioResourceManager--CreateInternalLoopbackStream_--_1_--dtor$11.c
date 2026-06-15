/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800EBF42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)(a2 + 320), a2);
}
