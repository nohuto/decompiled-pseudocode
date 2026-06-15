/*
 * XREFs of _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$1 @ 0x14002C8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(a2 + 136);
}
