/*
 * XREFs of ??0MPC3DStateHelper@@AEAA@XZ @ 0x180021BC8
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800216D0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180021740 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@Q.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021D54 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006965C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
MPC3DStateHelper *__fastcall MPC3DStateHelper::MPC3DStateHelper(MPC3DStateHelper *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  void *v6; // rdx
  HANDLE Event; // rbp
  unsigned int v8; // r8d
  const char *v9; // r9
  void *v10; // rdx
  HANDLE v11; // rbp
  unsigned int v12; // r8d
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // r8
  const char *v16; // r9
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v2 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 1LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *v3 = v4;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 6) = v5;
  *((_QWORD *)this + 8) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_10:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v6, v8, v9);
    __debugbreak();
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (char *)this + 64,
    Event);
  *((_QWORD *)this + 9) = 0LL;
  v11 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !v11 )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v12, v13);
    JUMPOUT(0x180021D4BLL);
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (char *)this + 72,
    v11);
  *((_QWORD *)this + 10) = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  v14 = CoreUICreate(v2);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v14,
      v18);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v16);
    goto LABEL_10;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetImpl'::`2'::impl,
    0,
    v15);
  return this;
}
