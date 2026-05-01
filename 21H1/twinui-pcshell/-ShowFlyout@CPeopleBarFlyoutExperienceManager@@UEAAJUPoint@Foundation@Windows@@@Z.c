/*
 * XREFs of ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1801A9540
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800136E0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180097818 (-CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A6CF4 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRefl_ea_1801A6CF4.c)
 *     ??0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801A6F4C (--0ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801A71C8 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ??4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A73A4 (--4ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1801A9454 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801A977C (-Split@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1801A98A4 (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A9988 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::ShowFlyout(__int64 a1, __int64 a2)
{
  CPeopleBarFlyoutExperienceManager *v4; // rcx
  char v5; // r14
  char v6; // di
  __int64 v7; // rax
  struct _TP_TIMER **v8; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v19[40]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v20[40]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow((CBaseTrayFlyoutExperienceManager::DebounceDetection *)(a1 + 664)) )
  {
    CommonPeopleTelemetry::ShowPeopleBarFlyout::ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v20);
    v5 = 0;
    v6 = 1;
    if ( **(_DWORD **)(a1 + 384) != 1 )
    {
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v19,
        (__int64)"ShowPeopleBarFlyout");
      v19[0] = &CommonPeopleTelemetry::ShowPeopleBarFlyout::`vftable';
      CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity(v19, a2);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=(v20, (__int64)v19);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v19);
      v7 = CommonPeopleTelemetry::ShowPeopleBarFlyout::Split(v20, v19);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::operator=((_QWORD *)(a1 + 336), v7);
      CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v19);
      v5 = 1;
    }
    v8 = (struct _TP_TIMER **)(a1 + 688);
    if ( !*(_QWORD *)(a1 + 688) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          (PTP_TIMER_CALLBACK)lambda_61803147bf409ca120dc11436b4d5efa_::_lambda_invoker_cdecl_,
                          (PVOID)a1,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 688),
        ThreadpoolTimer);
      v10 = *v8;
      if ( !*v8 )
      {
        v11 = -2147024882;
        v12 = 2147942414LL;
        v13 = 171LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
          (const char *)v12);
        CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v20);
        return v11;
      }
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v10, &pftDueTime, 0, 0x3E8u);
    }
    v14 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v4);
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147467259 )
      v6 = 0;
    if ( v6 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)v14);
    *(_QWORD *)(a1 + 320) = a2;
    v15 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
    v11 = v15;
    if ( v15 < 0 )
    {
      v12 = (unsigned int)v15;
      v13 = 191LL;
      goto LABEL_15;
    }
    if ( v5 )
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v20,
        0LL);
    CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v20);
  }
  return 0LL;
}
