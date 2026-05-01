/*
 * XREFs of ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x1801EF640
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180045E64 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180066D30 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18011CFD4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x18017FEE0 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801EF250 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RealtimeEnticement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EF338 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RealtimeEnticement@@@details@wil@@QEAAX_N.c)
 *     ?UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z @ 0x1801EF9D4 (-UpdateFromCurrentWNFState@CCortanaWNFService@Cortana@TwinUI@@AEAAJ_N@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::SubscribeToWNF(
        struct DiagnosticsInfo *this,
        struct TwinUI::Cortana::ICortanaWNFNotification *a2,
        bool a3)
{
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // dl
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+4Ch] [rbp-24h]
  unsigned int v17[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int16 v20; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct DiagnosticsInfo *v22; // [rsp+A0h] [rbp+30h] BYREF

  (*(void (__fastcall **)(struct DiagnosticsInfo *))(*(_QWORD *)this + 8LL))(this);
  v22 = this + 7;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v22);
  v7 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v6);
  if ( v7 < 0 )
  {
    v8 = 18LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = RtlSubscribeWnfStateChangeNotification(
          &this[1],
          WNF_TMCN_ISTABLETMODE,
          0LL,
          TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback);
  if ( v10 < 0 )
  {
    v11 = 29LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v10);
  }
  if ( !a3 )
  {
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[2],
            WNF_SHEL_LOGON_COMPLETE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellReadyWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 43LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[3],
            WNF_SHEL_LOCKSCREEN_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 54LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[4],
            WNF_SHEL_ABOVE_LOCK_APP_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::AboveLockAppActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 65LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    v10 = RtlSubscribeWnfStateChangeNotification(
            &this[5],
            WNF_SHEL_ABOVE_LOCK_BIO_ACTIVE,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback);
    if ( v10 < 0 )
    {
      v11 = 76LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
               (const char *)(unsigned int)v10);
    }
    *(_QWORD *)v17 = retaddr;
    v18 = "pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp";
    v20 = 92;
    v19 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RealtimeEnticement>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_RealtimeEnticement>::GetImpl'::`2'::impl,
      1u,
      v12);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v15, v13);
    v14 = RtlSubscribeWnfStateChangeNotification(
            &this[6],
            WNF_SHEL_APPLICATION_STARTED,
            0LL,
            TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback);
    if ( v14 >= 0 )
      v7 = 0;
    else
      v7 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x5C,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanawnfservice.cpp",
             (const char *)(unsigned int)v14);
    if ( v7 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v7,
        (wil::ThreadErrorContext *)&v15,
        (struct wil::ThreadErrorContext *)0x9853BD,
        (__int64)v17);
    if ( v15 )
      *(_DWORD *)(v15 + 16) = v16;
    if ( v7 < 0 )
    {
      v8 = 92LL;
      goto LABEL_3;
    }
  }
  TwinUI::Cortana::CCortanaWNFService::UpdateFromCurrentWNFState((TwinUI::Cortana::CCortanaWNFService *)this, a3);
  return 0LL;
}
