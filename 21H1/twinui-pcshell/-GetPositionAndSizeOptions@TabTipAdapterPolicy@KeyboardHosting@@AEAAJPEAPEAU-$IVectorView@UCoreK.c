/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18002B54C
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002B288 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008AF60 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180346930 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18002B494 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ?GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z @ 0x18002CC30 (-GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002D8C4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800363A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180070204 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@@details@wil@@QEAA_NXZ @ 0x1800A481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800A4D4C (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18011872C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180328790 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@de.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180346BA4 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  __int64 v4; // r8
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int128 v7; // xmm8
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm9
  __int128 v10; // xmm10
  __int128 v11; // xmm11
  __int64 v12; // rax
  unsigned int v13; // edi
  int v14; // esi
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r9d
  unsigned int FloatingBottomPositionIfNecessary; // eax
  HMONITOR v20; // rax
  int PositionAndSizeOptions; // ebx
  __int64 v22; // rdx
  const char *v24; // r9
  int ForegroundAppRect; // eax
  __int128 v26; // xmm0
  char v27; // al
  __int128 v28; // xmm1
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 *v31; // [rsp+28h] [rbp-E0h]
  POINT pt; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-98h] BYREF
  int v34[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  float v36[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v40[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v45[24]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v46; // [rsp+110h] [rbp+8h] BYREF
  int v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+11Ch] [rbp+14h]
  int v49; // [rsp+124h] [rbp+1Ch]
  __int128 v50; // [rsp+128h] [rbp+20h] BYREF
  __int64 v51; // [rsp+138h] [rbp+30h]
  struct tagMONITORINFO mi; // [rsp+140h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  *a2 = 0LL;
  v4 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v5 = *(_OWORD *)((char *)this + v4 + 232);
  v6 = *(_OWORD *)((char *)this + v4 + 248);
  v7 = *(_OWORD *)((char *)this + v4 + 264);
  v8 = -(__int64)(*((_BYTE *)this + 448) != 0) & 0xFFFFFFFFFFFFFFA0uLL;
  v9 = *(_OWORD *)((char *)this + v8 + 328);
  v10 = *(_OWORD *)((char *)this + v8 + 344);
  v11 = *(_OWORD *)((char *)this + v8 + 360);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
  {
    v37 = *((_QWORD *)this + 35);
    v38 = *((_QWORD *)this + 41);
    v35 = *((_QWORD *)this + 29);
    LODWORD(v31) = (_DWORD)this + 336;
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      &v35,
      (char *)this + 240,
      (char *)this + 272,
      &v38);
  }
  v12 = *((_QWORD *)this + 27);
  *(_OWORD *)(v12 + 40) = v5;
  *(_OWORD *)(v12 + 88) = v9;
  *(_OWORD *)(v12 + 56) = v6;
  *(_OWORD *)(v12 + 104) = v10;
  *(_OWORD *)(v12 + 72) = v7;
  *(_OWORD *)(v12 + 120) = v11;
  *(_OWORD *)(v12 + 136) = *(_OWORD *)((char *)this + 328);
  *(_OWORD *)(v12 + 152) = *(_OWORD *)((char *)this + 344);
  *(_OWORD *)(v12 + 168) = *(_OWORD *)((char *)this + 360);
  v13 = `wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v35 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
                       v40);
    v13 = v35;
  }
  pt.x = 0;
  LOBYTE(pt.y) = 3;
  v34[0] = 3;
  v14 = (v13 >> 9) & 1;
  v15 = (v13 >> 8) & 1;
  v16 = wil_details_FeatureReporting_RecordUsageInCache(v45, &unk_1805A1F58, 2LL, 0LL);
  v50 = *(_OWORD *)v16;
  v51 = *(_QWORD *)(v16 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    v31 = (__int64 *)&v50;
    g_wil_details_recordFeatureUsage(20652073LL, 2LL, 1LL, &unk_1805A1F58);
    if ( v15 )
    {
      v46 = 0LL;
      v48 = 0LL;
      v31 = &v46;
      v47 = 2;
      v49 = v14;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(20652073LL, 2LL, 1LL);
    }
  }
  else if ( v15 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0x13B2029u, 2u, v14);
  }
  if ( !(_DWORD)v51 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x13B2029u,
      (const struct FEATURE_LOGGED_TRAITS *)&pt,
      0LL,
      1,
      (const enum wil_ReportingKind *)v34,
      0LL,
      0,
      1uLL);
  v33 = *((_DWORD *)this + 153);
  FloatingBottomPositionIfNecessary = KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
                                        this,
                                        v33,
                                        v17,
                                        v18);
  if ( (int)(FloatingBottomPositionIfNecessary + 0x80000000) >= 0 && FloatingBottomPositionIfNecessary != -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FD,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)FloatingBottomPositionIfNecessary,
      (int)v31);
  std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
    (char *)this + 464,
    &v41,
    &v33);
  if ( !*(_BYTE *)(v41 + 40) )
    goto LABEL_22;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(this, (struct Windows::Foundation::Point *)v36, v33);
  pt.x = (int)v36[0];
  pt.y = (int)v36[1];
  v20 = MonitorFromPoint(pt, 2u);
  if ( !v20 )
  {
    PositionAndSizeOptions = -2147418113;
    v22 = 773LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions,
      (int)v31);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v20, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x308,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v24);
LABEL_22:
  v39 = 0LL;
  ForegroundAppRect = KeyboardHosting::TabTipAdapterPolicy::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v39);
  if ( ForegroundAppRect < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)ForegroundAppRect,
      (int)v31);
  v26 = v39;
  v27 = *((_BYTE *)this + 509);
  v28 = *((_OWORD *)this + 9);
  v29 = *((_QWORD *)this + 27);
  *((_OWORD *)this + 12) = v39;
  v42 = v26;
  v30 = *((_OWORD *)this + 11);
  v44 = v28;
  v43 = v30;
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                             v29,
                             (unsigned int)&v44,
                             (unsigned int)&v43,
                             (unsigned int)&v42,
                             v27,
                             (__int64)a2);
  if ( PositionAndSizeOptions < 0 )
  {
    v22 = 783LL;
    goto LABEL_19;
  }
  return 0LL;
}
