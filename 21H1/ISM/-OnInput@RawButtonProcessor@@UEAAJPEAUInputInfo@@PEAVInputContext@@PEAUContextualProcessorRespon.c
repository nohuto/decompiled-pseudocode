/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180182810
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A3C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801822D8 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x180182538 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rax
  char v6; // r8
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+44h] [rbp-14h]

  v18 = 0;
  if ( *(char *)a2 >= 0 )
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 3;
    v5 = *((unsigned int *)a2 + 16);
    v6 = *((_BYTE *)this + v5 + 48);
    if ( *((_BYTE *)a2 + 68) )
    {
      if ( v6 )
      {
        v7 = 2;
      }
      else
      {
        v7 = 1;
        *((_BYTE *)this + v5 + 48) = 1;
      }
    }
    else
    {
      v7 = 0;
      if ( v6 )
      {
        *((_BYTE *)this + v5 + 48) = 0;
        v7 = 4;
      }
    }
    v14 = *((_DWORD *)a2 + 16);
    v16 = *((_QWORD *)a2 + 4);
    v8 = *((_DWORD *)a2 + 2);
    v9 = *((_QWORD *)this + 5);
    v15 = v7;
    v10 = *((_QWORD *)this + 3);
    v17 = v8;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, unsigned int *, int))(*(_QWORD *)v10 + 168LL))(
           v10,
           v9,
           4LL,
           &v14,
           24) < 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (wil::details **)this + 4,
        *((wil::details **)this + 4),
        v11);
      RawButtonProcessor::FindRemoteEndpoint(this);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *, int))(**((_QWORD **)this + 3) + 168LL))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 5),
             4LL,
             &v14,
             24) < 0 )
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          (wil::details **)this + 4,
          *((wil::details **)this + 4),
          v12);
    }
    InputETW::RawButtonProcessor::ButtonEvent(v14, v15, *((_DWORD *)this + 72));
  }
  return 0LL;
}
