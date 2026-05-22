/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUMsgBlob@@P6AXPEAUMsgBuffer@@@Z$1?MsgRelease@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B471C
 * Callers:
 *     _KeyboardOverriderDispatcher::SendMessageToNarrator_::_1_::dtor$0 @ 0x1800B5A85 (_KeyboardOverriderDispatcher--SendMessageToNarrator_--_1_--dtor$0.c)
 *     _KeyboardOverriderDispatcher::SendMessageToNarrator_::_1_::dtor$1 @ 0x1800B5A91 (_KeyboardOverriderDispatcher--SendMessageToNarrator_--_1_--dtor$1.c)
 *     _KeyboardOverriderDispatcher::SendMessageToNarrator_::_1_::dtor$2 @ 0x1800B5A9D (_KeyboardOverriderDispatcher--SendMessageToNarrator_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgBlob *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgBlob *,MsgBlob *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<MsgBlob *,void (*)(MsgBuffer *),&void MsgRelease(MsgBuffer *),wistd::integral_constant<unsigned __int64,0>,MsgBlob *,MsgBlob *,0,std::nullptr_t>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return MsgRelease();
  return result;
}
