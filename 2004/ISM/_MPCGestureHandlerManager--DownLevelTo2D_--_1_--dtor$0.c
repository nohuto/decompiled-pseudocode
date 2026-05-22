/*
 * XREFs of _MPCGestureHandlerManager::DownLevelTo2D_::_1_::dtor$0 @ 0x18006B337
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGestureHandlerManager::DownLevelTo2D_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 144));
}
