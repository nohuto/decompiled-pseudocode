/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18002BD60
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002BAC8 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008B620 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180367FD0 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18002BCA8 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ?GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z @ 0x18002D420 (-GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18002E0B4 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800368C0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180070924 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x1800B2D40 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18013CD4C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18034A2E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@de.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180368244 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  char v4; // al
  __int64 v5; // r8
  int v6; // r10d
  char *v7; // rdx
  __int128 v8; // xmm9
  __int128 v9; // xmm10
  __int128 v10; // xmm11
  char *v11; // r8
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  __int128 v15; // xmm8
  __int64 v16; // rax
  unsigned int v17; // ebx
  int v18; // esi
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // r9d
  unsigned int FloatingBottomPositionIfNecessary; // eax
  HMONITOR v24; // rax
  int PositionAndSizeOptions; // ebx
  __int64 v26; // rdx
  const char *v28; // r9
  int ForegroundAppRect; // eax
  __int128 v30; // xmm0
  char v31; // al
  __int128 v32; // xmm1
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 *v35; // [rsp+28h] [rbp-E0h]
  POINT pt; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-98h] BYREF
  int v38[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  float v40[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h]
  __int64 v42; // [rsp+98h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v44[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v49[24]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v50[2]; // [rsp+110h] [rbp+8h] BYREF
  int v51; // [rsp+120h] [rbp+18h]
  int v52; // [rsp+124h] [rbp+1Ch]
  __int128 v53; // [rsp+128h] [rbp+20h] BYREF
  __int64 v54; // [rsp+138h] [rbp+30h]
  struct tagMONITORINFO mi; // [rsp+140h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  *a2 = 0LL;
  v4 = *((_BYTE *)this + 448);
  v5 = *((_BYTE *)this + 500) != 0 ? 0x30 : 0;
  v6 = (_DWORD)this + 336;
  v7 = (char *)this + 240;
  v41 = *((_QWORD *)this + 35);
  v8 = *(_OWORD *)((char *)this + v5 + 232);
  v9 = *(_OWORD *)((char *)this + v5 + 248);
  v42 = *((_QWORD *)this + 41);
  v10 = *(_OWORD *)((char *)this + v5 + 264);
  v11 = (char *)this + 272;
  v39 = *((_QWORD *)this + 29);
  v12 = -(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFA0uLL;
  v13 = *(_OWORD *)((char *)this + v12 + 328);
  v14 = *(_OWORD *)((char *)this + v12 + 344);
  v15 = *(_OWORD *)((char *)this + v12 + 360);
  LODWORD(v35) = v6;
  TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
    &v39,
    v7,
    v11,
    &v42);
  v16 = *((_QWORD *)this + 27);
  *(_OWORD *)(v16 + 40) = v8;
  *(_OWORD *)(v16 + 88) = v13;
  *(_OWORD *)(v16 + 56) = v9;
  *(_OWORD *)(v16 + 104) = v14;
  *(_OWORD *)(v16 + 72) = v10;
  *(_OWORD *)(v16 + 120) = v15;
  *(_OWORD *)(v16 + 136) = *(_OWORD *)((char *)this + 328);
  *(_OWORD *)(v16 + 152) = *(_OWORD *)((char *)this + 344);
  *(_OWORD *)(v16 + 168) = *(_OWORD *)((char *)this + 360);
  v17 = `wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v39 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
                       v44);
    v17 = v39;
  }
  pt.x = 0;
  LOBYTE(pt.y) = 3;
  v38[0] = 3;
  v18 = (v17 >> 9) & 1;
  v19 = (v17 >> 8) & 1;
  v20 = wil_details_FeatureReporting_RecordUsageInCache(v49, &unk_1805CF388, 2LL, 0LL);
  v53 = *(_OWORD *)v20;
  v54 = *(_QWORD *)(v20 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    v35 = &v53;
    g_wil_details_recordFeatureUsage(20652073LL, 2LL, 1LL, &unk_1805CF388);
    if ( v19 )
    {
      v50[0] = 0LL;
      v51 = 0;
      v35 = (__int128 *)v50;
      v50[1] = 2LL;
      v52 = v18;
      ((void (__fastcall *)(__int64, __int64, __int64))g_wil_details_recordFeatureUsage)(20652073LL, 2LL, 1LL);
    }
  }
  else if ( v19 )
  {
    wil_RtlStagingConfig_RecordFeatureUsage(0x13B2029u, 2u, v18);
  }
  if ( !(_DWORD)v54 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x13B2029u,
      (const struct FEATURE_LOGGED_TRAITS *)&pt,
      0LL,
      1,
      (const enum wil_ReportingKind *)v38,
      0LL,
      0,
      1uLL);
  v37 = *((_DWORD *)this + 153);
  FloatingBottomPositionIfNecessary = KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionIfNecessary(
                                        this,
                                        v37,
                                        v21,
                                        v22);
  if ( (int)(FloatingBottomPositionIfNecessary + 0x80000000) >= 0 && FloatingBottomPositionIfNecessary != -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2DB,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)FloatingBottomPositionIfNecessary,
      (int)v35);
  std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
    (char *)this + 464,
    &v45,
    &v37);
  if ( !*(_BYTE *)(v45 + 40) )
    goto LABEL_20;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(this, (struct Windows::Foundation::Point *)v40, v37);
  pt.x = (int)v40[0];
  pt.y = (int)v40[1];
  v24 = MonitorFromPoint(pt, 2u);
  if ( !v24 )
  {
    PositionAndSizeOptions = -2147418113;
    v26 = 739LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions,
      (int)v35);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v24, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2E6,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v28);
LABEL_20:
  v43 = 0LL;
  ForegroundAppRect = KeyboardHosting::TabTipAdapterPolicy::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v43);
  if ( ForegroundAppRect < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)ForegroundAppRect,
      (int)v35);
  v30 = v43;
  v31 = *((_BYTE *)this + 509);
  v32 = *((_OWORD *)this + 9);
  v33 = *((_QWORD *)this + 27);
  *((_OWORD *)this + 12) = v43;
  v46 = v30;
  v34 = *((_OWORD *)this + 11);
  v48 = v32;
  v47 = v34;
  PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                             v33,
                             (unsigned int)&v48,
                             (unsigned int)&v47,
                             (unsigned int)&v46,
                             v31,
                             (__int64)a2);
  if ( PositionAndSizeOptions < 0 )
  {
    v26 = 749LL;
    goto LABEL_17;
  }
  return 0LL;
}
