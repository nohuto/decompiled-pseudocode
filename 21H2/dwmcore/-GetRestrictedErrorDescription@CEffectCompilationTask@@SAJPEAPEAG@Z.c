/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801BF6E0
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800DA2A8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800EF78C (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801BF5B8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  OLECHAR *v6; // rsi
  __int64 (__fastcall *v7)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *); // r15
  DWORD LastError; // edi
  OLECHAR *v9; // rsi
  DWORD v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  char v14; // [rsp+70h] [rbp+38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+40h] BYREF
  BSTR bstrString; // [rsp+80h] [rbp+48h] BYREF
  BSTR v17; // [rsp+88h] [rbp+50h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  bstrString = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v15);
  v4 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, RestrictedErrorInfo, 0x98u);
  }
  else
  {
    v5 = v15;
    if ( v15 )
    {
      v6 = bstrString;
      v7 = *(__int64 (__fastcall **)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *))(*(_QWORD *)v15 + 24LL);
      if ( bstrString )
      {
        LastError = GetLastError();
        SysFreeString(v6);
        SetLastError(LastError);
      }
      v9 = v17;
      if ( v17 )
      {
        v10 = GetLastError();
        SysFreeString(v9);
        SetLastError(v10);
      }
      v11 = v7(v5, &v17, &v14, a1, &bstrString);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x9Bu);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&bstrString);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v4;
}
