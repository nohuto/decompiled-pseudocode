/*
 * XREFs of ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BD9FC
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BB0B0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x180011C60 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x180011D08 (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180011DD0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180018A6C (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x1801B4A90 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x1801B7F08 (--$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition.c)
 *     ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x1801B7F94 (--$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateW.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B87B8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801B87B8.c)
 *     ??1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ @ 0x1801B8CAC (--1ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801BA050 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801BA1D0 (-FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1801BC530 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BC5DC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::UpdateWindowPosition(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // r15d
  int v5; // r12d
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, __int64, LONG *); // rdi
  __int64 v10; // rcx
  int Int32; // eax
  __int64 v12; // rdx
  float v13; // xmm0_4
  float v14; // xmm1_4
  HMONITOR v15; // rax
  const char *v16; // r9
  __int64 v17; // rdx
  int v18; // edx
  struct tagRECT rcWork; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  LONG v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  LONG v27; // [rsp+68h] [rbp-98h]
  RECT rc; // [rsp+70h] [rbp-90h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h]
  _QWORD v32[40]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"ExperienceManager_UpdateWindowPosition");
  v32[0] = &QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::`vftable';
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v32);
  v4 = (int)*((float *)a2 + 11);
  v22 = v4;
  v5 = (int)*((float *)a2 + 12);
  v21 = v5;
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
    (__int64)v32,
    &v22,
    &v21);
  v23 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         (__int64)&v23);
  LastError = v6;
  if ( v6 >= 0 )
  {
    v26 = 0LL;
    v27 = 0;
    v8 = v23;
    v9 = *(void (__fastcall **)(__int64, __int64, LONG *))(*(_QWORD *)v23 + 48LL);
    *(_QWORD *)&rcWork.left = &v26;
    *(_QWORD *)&rcWork.right = 0LL;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MaxHeight", 0xAu, 9u);
    v9(v8, v31, &rcWork.right);
    v31 = 0LL;
    RoVariant::RoVariant((RoVariant *)&v24, *(struct IInspectable **)&rcWork.right);
    v10 = v26;
    v26 = v24;
    v24 = v10;
    LODWORD(v10) = v27;
    v27 = v25;
    v25 = v10;
    RoVariant::~RoVariant((RoVariant *)&v24);
    if ( v26 )
    {
      *(_QWORD *)&rcWork.left = v26;
      rcWork.right = v27;
      Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&rcWork, (int *)this + 96);
      LastError = Int32;
      if ( Int32 < 0 )
      {
        v12 = 821LL;
        goto LABEL_18;
      }
    }
    v13 = *((float *)this + 86);
    rc.left = (int)v13;
    v14 = *((float *)this + 87);
    rc.top = (int)v14;
    rc.right = (int)(float)(v13 + *((float *)this + 88));
    rc.bottom = (int)(float)(v14 + *((float *)this + 89));
    v15 = MonitorFromRect(&rc, 0);
    if ( v15 == (HMONITOR)-1LL )
    {
      v17 = 833LL;
    }
    else
    {
      mi.cbSize = 40;
      memset(&mi.rcMonitor, 0, 36);
      if ( GetMonitorInfoW(v15, &mi) )
      {
        rcWork = mi.rcWork;
        Int32 = CQuickConnectExperienceManager::FinalizeWindowPlacement(this, v4, v5, &rcWork);
        LastError = Int32;
        if ( Int32 >= 0 )
        {
          Int32 = CQuickConnectExperienceManager::FinalizeWindowPosition(this, v4, v5, &rcWork);
          LastError = Int32;
          if ( Int32 >= 0 )
          {
            if ( *((_QWORD *)a2 + 3) )
            {
              Int32 = CSingleViewShellExperience::SetPosition(a2, (const struct tagRECT *)((char *)this + 392));
              LastError = Int32;
              if ( Int32 < 0 )
              {
                v12 = 850LL;
                goto LABEL_18;
              }
              QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
                (__int64)v32,
                (_DWORD *)this + 98,
                (int *)this + 99,
                (int *)this + 100,
                (int *)this + 101);
            }
            wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
              (__int64)v32,
              v18);
            LastError = 0;
            goto LABEL_21;
          }
          v12 = 845LL;
        }
        else
        {
          v12 = 842LL;
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Int32);
        goto LABEL_21;
      }
      v17 = 835LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v17,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
                  v16);
LABEL_21:
    RoVariant::~RoVariant((RoVariant *)&v26);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::~ExperienceManager_UpdateWindowPosition((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)v32);
  return LastError;
}
