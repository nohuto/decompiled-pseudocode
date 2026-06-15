/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x1800EBF96
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>((__int64 *)(a2 + 288));
}
