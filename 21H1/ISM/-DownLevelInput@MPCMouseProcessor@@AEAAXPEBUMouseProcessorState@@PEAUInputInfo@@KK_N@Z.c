/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180195184
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195668 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180075F44 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075FAC (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180076A3C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x180194AF0 (--$MPCMouseProcessor_InjectPress@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ??$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z @ 0x180194B64 (--$MPCMouseProcessor_InjectRelease@JJAEAKAEBKAEAK@ISMTracing@@SAX$$QEAJ0AEAKAEBK1@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801972E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::DownLevelInput(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  MPCHolographicInputManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  char v20; // al
  bool v21; // di
  MPCHolographicInputManager *Instance; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  const char *v25; // r9
  struct IMPCFocusTarget *FocusedTarget; // rbx
  int (__fastcall *v27)(struct IMPCFocusTarget *, GUID *, __int64 *); // rdi
  int v28; // eax
  __int64 v29; // rax
  bool v30; // bl
  MPCHolographicInputManager *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  const char *v34; // r9
  struct IMPCInputPostProcessor *PostProcessor; // r8
  void (__fastcall *v36)(struct IMPCInputPostProcessor *, unsigned __int64); // rax
  int v37; // eax
  __int64 v38; // [rsp+30h] [rbp-20h] BYREF
  __int64 v39; // [rsp+38h] [rbp-18h] BYREF
  __int64 v40[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 v42; // [rsp+90h] [rbp+40h] BYREF
  int v43; // [rsp+A0h] [rbp+50h] BYREF

  *((_BYTE *)a3 + 48) = 0;
  if ( !*((_QWORD *)this + 576)
    || *((_BYTE *)this + 4632)
    || (v10 = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v10, v11, v12, v13)) )
  {
    if ( !*((_BYTE *)this + 6321) || *((_DWORD *)a3 + 10) == *((_DWORD *)this + 1581) )
    {
      v39 = 0LL;
      v14 = *((_QWORD *)this + 582);
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v39);
      v16 = v15(v14, &v39);
      v18 = a5;
      if ( v16 >= 0 && v39 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v39 + 80LL))(v39) )
      {
        *((_WORD *)a3 + 45) = 0;
        *((_DWORD *)a3 + 25) = *((_DWORD *)a2 + 2);
        v19 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a3 + 122) = 0;
        v20 = 0;
      }
      else
      {
        *((_DWORD *)a3 + 25) = a4;
        v20 = 1;
        v19 = v18;
      }
      *((_DWORD *)a3 + 26) = v19;
      *((_BYTE *)a3 + 120) = v20;
      LOBYTE(v17) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
        v17);
      v21 = a6;
      *((_BYTE *)a3 + 121) = a6;
      v38 = 0LL;
      Instance = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v23, v24, v25);
      v40[0] = (__int64)FocusedTarget;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v40);
      if ( FocusedTarget )
      {
        v27 = **(int (__fastcall ***)(struct IMPCFocusTarget *, GUID *, __int64 *))FocusedTarget;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
        if ( v27(FocusedTarget, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v38) < 0 )
        {
          v21 = a6;
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v38 + 56LL))(v38, &v42);
          if ( v28 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              491LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v28);
            __debugbreak();
          }
          v21 = a6;
          if ( (_DWORD)v42 )
            *((_BYTE *)a3 + 123) = 1;
        }
      }
      v29 = *((_QWORD *)this + 576);
      v30 = v29 != 0;
      if ( *((_BYTE *)this + 6321) )
      {
        if ( !v29 )
        {
          LODWORD(v42) = v18;
          v43 = a4;
          ISMTracing::MPCMouseProcessor_InjectRelease<long,long,unsigned long &,unsigned long const &,unsigned long &>(
            &v43,
            (int *)&v42,
            (unsigned int *)a3 + 1,
            (unsigned int *)a2 + 4,
            (unsigned int *)a3 + 10);
        }
      }
      else if ( v29 )
      {
        v31 = MPCHolographicInputManager::GetInstance();
        PostProcessor = MPCHolographicInputManager::GetPostProcessor(v31, v32, v33, v34);
        v36 = *(void (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 64LL);
        v42 = __PAIR64__(v18, a4);
        v36(PostProcessor, __PAIR64__(v18, a4));
        LODWORD(v42) = v18;
        v43 = a4;
        ISMTracing::MPCMouseProcessor_InjectPress<long,long,unsigned long &,unsigned long const &,unsigned long &>(
          &v43,
          (int *)&v42,
          (unsigned int *)a3 + 1,
          (unsigned int *)a2 + 4,
          (unsigned int *)a3 + 10);
      }
      *((_BYTE *)this + 6321) = v30;
      *((_DWORD *)this + 1581) = *((_DWORD *)a3 + 10);
      *((_DWORD *)this + 1584) = v21;
      *((_DWORD *)this + 1582) = a4;
      *((_DWORD *)this + 1583) = v18;
      v37 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 585) + 24LL))(
              *((_QWORD *)this + 585),
              a2,
              a3);
      if ( v37 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          519LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v37);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v40);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v39);
    }
  }
}
