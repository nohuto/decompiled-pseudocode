/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800DB620
 * Callers:
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x18002C458 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x180220AB8 (--1CInputManager@@MEAA@XZ.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ @ 0x180220C1C (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x180220CB4 (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 */

void __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        wil::details **a1,
        wil::details *a2,
        unsigned __int64 a3)
{
  struct IMessageSession *v5; // rdx
  wil::details *v6; // rbx

  v5 = a1[1];
  if ( v5 )
    wil::details::IMessageSessionCloseEndpointFunction(*a1, v5, a3);
  a1[1] = 0LL;
  v6 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v6 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
