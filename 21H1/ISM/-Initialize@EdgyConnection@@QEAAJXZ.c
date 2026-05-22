/*
 * XREFs of ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801777E0
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x180177F34 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A3C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3E3C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall EdgyConnection::Initialize(EdgyConnection *this)
{
  wil::details **v1; // r14
  int v3; // eax
  unsigned __int64 v4; // r8
  wil::details *v5; // rsi
  __int64 (__fastcall *v6)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *); // rdi
  unsigned __int64 v7; // r8
  int v8; // eax
  wil::details *v9; // rdi
  _QWORD *v10; // r15
  __int64 (__fastcall *v11)(wil::details *, char *); // rbx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  const char *v16; // r9
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, const wchar_t *, _QWORD, char *); // rbx
  int v19; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v1 = (wil::details **)((char *)this + 16);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 2);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      72LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *v1,
    v4);
  v5 = *v1;
  v6 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *))(*(_QWORD *)*v1 + 104LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *((wil::details **)this + 4),
    v7);
  v8 = v6(v5, EdgyConnection::OnEdgyCompositionUpdateStatic, this, (char *)this + 40);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      79LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = *v1;
  v10 = (_QWORD *)((char *)this + 24);
  v11 = *(__int64 (__fastcall **)(wil::details *, char *))(*(_QWORD *)*v1 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 3);
  v12 = v11(v9, (char *)this + 24);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      81LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(*(_QWORD *)*v10 + 40LL))(
          *v10,
          L"EdgyConfigurationEndpoint",
          *((_QWORD *)this + 5),
          0LL);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      86LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    *v1,
    v14);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v16);
    __debugbreak();
  }
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v17 = *v10;
    v18 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v10 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 6,
      *((wil::details **)this + 6),
      v15);
    v19 = v18(v17, L"EdgyNotificationEndpoint", 0LL, (char *)this + 56);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        99LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      107LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      v21);
    __debugbreak();
  }
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 72LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  v23 = *((_QWORD *)this + 8);
  if ( v23 != v22 )
  {
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 24));
      v23 = *((_QWORD *)this + 8);
    }
    v26 = v23;
    *((_QWORD *)this + 8) = v22;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v26);
  }
  return 0LL;
}
