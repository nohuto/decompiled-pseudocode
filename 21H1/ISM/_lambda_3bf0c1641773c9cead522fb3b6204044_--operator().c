/*
 * XREFs of _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x1800332EC
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180033690 (--$_Callback_once@V-$tuple@$$QEAV_lambda_3bf0c1641773c9cead522fb3b6204044_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180032358 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180032450 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334B8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x1800334E8 (-Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x180072C58 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 lambda_3bf0c1641773c9cead522fb3b6204044_::operator()()
{
  Microsoft::Bamo::BaseBamoConnection *v0; // rbx
  __int64 v1; // rcx
  int v2; // edi
  __int64 *v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 *v6; // rbx
  __int64 (__fastcall *v7)(__int64 *, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r9
  int v11; // eax
  volatile signed __int32 *v12; // rax
  MPCManager *v13; // rdx
  MPCManager *v14; // rcx
  MPCManager *v15; // rax
  __int64 v16; // rax
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  int v20; // [rsp+20h] [rbp-30h]
  int v21; // [rsp+20h] [rbp-30h]
  __int128 v22; // [rsp+30h] [rbp-20h]
  MPCManager *v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v26; // [rsp+70h] [rbp+20h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v27; // [rsp+78h] [rbp+28h] BYREF
  __int64 v28; // [rsp+80h] [rbp+30h] BYREF
  __int64 v29; // [rsp+88h] [rbp+38h] BYREF

  v26 = 0LL;
  v0 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v2 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v29);
  if ( v2 < 0 )
  {
    if ( ISMTracing::IsEnabled(v1) )
    {
      wil::details::static_lazy<ISMTracing>::get(v18, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCManager_InitializationFailed_(v19, v2);
    }
  }
  else
  {
    v3 = v26;
    v26 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64 *))(*v3 + 16))(v3);
    v4 = CoreUICreate(&v26);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v4,
        v20);
      __debugbreak();
    }
    v6 = v26;
    if ( !v26 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v5);
      __debugbreak();
    }
    v7 = *(__int64 (__fastcall **)(__int64 *, __int64, const wchar_t *, __int64 *))(*v26 + 56);
    v8 = v28;
    v28 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v7(v6, v29, L"System\\MPCManagerPort", &v28);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v9,
        v20);
      __debugbreak();
    }
    v27 = 0LL;
    DWORD2(v22) = 1;
    *(_QWORD *)&v22 = 0LL;
    v24 = v22;
    v11 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(v26, v28, &v24, v10, &v27);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v11,
        v21);
      __debugbreak();
    }
    v0 = v27;
  }
  MPCConstantManager::Create(v0);
  v23 = (MPCManager *)operator new(0x58uLL);
  v12 = (volatile signed __int32 *)MPCManager::MPCManager(v23, v0);
  v13 = (MPCManager *)v12;
  v14 = MPCManager::s_instance;
  if ( MPCManager::s_instance != (MPCManager *)v12 )
  {
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 6);
      v0 = v27;
      v14 = MPCManager::s_instance;
    }
    v15 = v14;
    v14 = v13;
    MPCManager::s_instance = v13;
    if ( v15 )
    {
      (**((void (__fastcall ***)(__int64))v15 + 2))((__int64)v15 + 16);
      v14 = MPCManager::s_instance;
    }
  }
  if ( v0 )
  {
    v16 = *((_QWORD *)v0 + 23);
    *((_QWORD *)v0 + 23) = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 6);
      v0 = v27;
    }
    if ( v16 )
      (**(void (__fastcall ***)(__int64, MPCManager *))(v16 + 16))(v16 + 16, v13);
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v28);
  if ( v0 )
    Microsoft::Bamo::BaseBamoConnection::Release(v0);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v26);
}
