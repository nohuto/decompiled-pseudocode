/*
 * XREFs of ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A3E0
 * Callers:
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$1 @ 0x14002C820 (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$1 @ 0x14004ABF6 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
