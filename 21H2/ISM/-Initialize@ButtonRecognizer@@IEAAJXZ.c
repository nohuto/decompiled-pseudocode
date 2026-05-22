/*
 * XREFs of ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801738C4
 * Callers:
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1801732C0 (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029D84 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C5DC (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Initialize(ButtonRecognizer *this)
{
  wil::details **v2; // rsi
  int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v7; // rdx
  int Descriptor; // eax
  __int64 v9; // rdx
  wil::details *v10; // rdi
  __int64 (__fastcall *v11)(wil::details *, __int64, char *); // rbx
  unsigned __int64 v12; // r8
  wil::details *v13; // rdi
  __int64 (__fastcall *v14)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *); // rbx
  wil::details *v15; // rdi
  __int64 (__fastcall *v16)(wil::details *, __int64 *); // rbx
  int v17; // eax
  __int64 v18; // rdx
  wil::details *v19; // rsi
  __int64 (__fastcall *v20)(wil::details *, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *); // rdi
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  char v22; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF

  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 5) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  v2 = (wil::details **)((char *)this + 160);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 20);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
  {
    v5 = 124LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 21,
    *v2,
    v4);
  v21 = 0LL;
  v22 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v21, v7, (__int64)c_wszMessagePortNames);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 131LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)Descriptor);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
    return (unsigned int)v3;
  }
  v10 = *v2;
  v11 = *(__int64 (__fastcall **)(wil::details *, __int64, char *))(*(_QWORD *)*v2 + 64LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 23);
  Descriptor = v11(v10, v21, (char *)this + 184);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 135LL;
    goto LABEL_13;
  }
  v13 = *v2;
  v14 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), ButtonRecognizer *, _QWORD, char *))(*(_QWORD *)*v2 + 96LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 21,
    *((wil::details **)this + 21),
    v12);
  Descriptor = v14(v13, ButtonRecognizer::MessageProc, this, *((_QWORD *)this + 23), (char *)this + 176);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 141LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 24);
  Descriptor = CoreUICallCreateEndpointHost(*v2, (char *)this + 192, (char *)this + 200);
  v3 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 146LL;
    goto LABEL_13;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
  v24 = 0LL;
  v15 = *v2;
  v16 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)*v2 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v24);
  v17 = v16(v15, &v24);
  v3 = v17;
  if ( v17 < 0 )
  {
    v18 = 155LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v24);
    return (unsigned int)v3;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v24 + 40LL))(
          v24,
          L"System\\Input\\ComboButton",
          *((_QWORD *)this + 22),
          1LL);
  v3 = v17;
  if ( v17 < 0 )
  {
    v18 = 160LL;
    goto LABEL_18;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v24);
  v19 = *v2;
  v20 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(__int64), ButtonRecognizer *, char *))(*(_QWORD *)v19 + 136LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 19);
  v3 = v20(v19, lambda_f1854fe2ac21130f928d03576a8a1bbe_::_lambda_invoker_cdecl_, this, (char *)this + 152);
  if ( v3 < 0 )
  {
    v5 = 172LL;
    goto LABEL_3;
  }
  return 0LL;
}
