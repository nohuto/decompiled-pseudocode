/*
 * XREFs of ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x180175684
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x180174DDC (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029DD4 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C61C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A3C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Initialize(DragNDropProcessorLegacy *this)
{
  wil::details **v2; // rsi
  int v3; // eax
  unsigned __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // rdx
  int Descriptor; // eax
  wil::details *v8; // rdi
  __int64 (__fastcall *v9)(wil::details *, __int64, char *); // rbx
  int v10; // eax
  unsigned __int64 v11; // r8
  wil::details *v12; // rdi
  __int64 (__fastcall *v13)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *); // rbx
  int v14; // eax
  int EndpointHost; // eax
  wil::details *v16; // rdi
  __int64 (__fastcall *v17)(wil::details *, __int64 *); // rbx
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = (wil::details **)((char *)this + 32);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 4);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      62LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      63LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      v5);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 5,
    *v2,
    v4);
  v21 = 0LL;
  v22 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v21, v6, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      74LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  v8 = *v2;
  v9 = *(__int64 (__fastcall **)(wil::details *, __int64, char *))(*(_QWORD *)*v2 + 64LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
  v10 = v9(v8, v21, (char *)this + 56);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      78LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v12 = *v2;
  v13 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *))(*(_QWORD *)*v2 + 96LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 5,
    *((wil::details **)this + 5),
    v11);
  v14 = v13(v12, DragNDropProcessorLegacy::MessageProc, this, *((_QWORD *)this + 7), (char *)this + 48);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      84LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 8);
  EndpointHost = CoreUICallCreateEndpointHost(*v2, (char *)this + 64, (char *)this + 72);
  if ( EndpointHost < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      89LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)EndpointHost);
    __debugbreak();
  }
  v24 = 0LL;
  v16 = *v2;
  v17 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v24);
  v18 = v17(v16, &v24);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      97LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v24 + 40LL))(
          v24,
          L"System\\Input\\DragNDrop",
          *((_QWORD *)this + 6),
          1LL);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      102LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v19);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v24);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
  return 0LL;
}
