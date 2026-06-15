/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003FCB0
 * Callers:
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$3 @ 0x140021D60 (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$3.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$3 @ 0x14004053E (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>::~out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall ***v2)(_QWORD, __int64); // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 8);
    v2 = **(__int64 (__fastcall *****)(_QWORD, __int64))a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return (**v2)(v2, 1LL);
  }
  return result;
}
