/*
 * XREFs of ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x180181FE8
 * Callers:
 *     ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801821D4 (-Initialize@RawButtonProcessor@@AEAAJXZ.c)
 *     ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180182260 (-OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801822C0 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036B0C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RawButtonProcessor::FindRemoteEndpoint(RawButtonProcessor *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, const wchar_t *, _QWORD, char *); // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, const wchar_t *, __int64, char *); // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v12);
  if ( v3(v2, &v12) >= 0 )
  {
    v5 = v12;
    v6 = *(int (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v12 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 4,
      *((wil::details **)this + 4),
      v4);
    if ( v6(v5, L"System\\RawShellButtonRouterInput", 0LL, (char *)this + 40) >= 0
      || (v8 = v12,
          v9 = *(int (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v12 + 24LL),
          wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
            (wil::details **)this + 4,
            *((wil::details **)this + 4),
            v7),
          v9(v8, L"System\\RawShellButtonRouterInput", 1LL, (char *)this + 40) >= 0) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 3) + 128LL))(
              *((_QWORD *)this + 3),
              *((_QWORD *)this + 5),
              (char *)this + 288);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          229LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\l"
                   "ib\\rawbuttonprocessor.cpp",
          (const char *)(unsigned int)v10);
    }
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v12);
}
