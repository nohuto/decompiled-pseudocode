/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18002CE00
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002B288 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180329418 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@11@Z @ 0x1803368E0 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18033CA40 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rbx
  unsigned int v9; // r14d
  RTL_SRWLOCK *v10; // rsi
  __int64 v11; // r10
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  char v15; // bl
  __int64 v16; // rbx
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  int v21; // esi
  HMONITOR v22; // rax
  int ScaleFactorForMonitor; // eax
  __int64 v24; // rcx
  __int64 v26; // rbx
  RTL_SRWLOCK *v27; // rsi
  int v28; // ebx
  int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  LPVOID pv_8[2]; // [rsp+28h] [rbp-89h] BYREF
  HMONITOR v35; // [rsp+38h] [rbp-79h]
  __int128 v36; // [rsp+40h] [rbp-71h]
  __int128 v37; // [rsp+50h] [rbp-61h]
  int v38; // [rsp+60h] [rbp-51h] BYREF
  RECT rc; // [rsp+68h] [rbp-49h] BYREF
  __int128 v40; // [rsp+78h] [rbp-39h] BYREF
  struct tagMONITORINFO mi; // [rsp+88h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v40 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v40);
  v7 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x193,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      (int)pv_8[0]);
    return v7;
  }
  else
  {
    *(_OWORD *)((char *)this + 456) = v40;
    v8 = *((_QWORD *)this + 13);
    LOBYTE(v6) = 3;
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      v5,
      v6);
    v9 = *(_DWORD *)(v8 + 612);
    v10 = (RTL_SRWLOCK *)(v8 + 440);
    AcquireSRWLockShared((PSRWLOCK)(v8 + 440));
    v11 = *(_QWORD *)(v8 + 400);
    v12 = *(__int64 **)(v11
                      + 16
                      * ((0x100000001B3LL
                        * (((unsigned __int64)v9 >> 24) ^ (0x100000001B3LL
                                                         * (BYTE2(v9) ^ (0x100000001B3LL
                                                                       * ((0x100000001B3LL
                                                                         * ((unsigned __int8)v9 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v9))))))) & *(_QWORD *)(v8 + 424)));
    v13 = *(__int64 **)(v8 + 384);
    while ( 1 )
    {
      v14 = *(__int64 **)(v11
                        + 16
                        * ((0x100000001B3LL
                          * (((unsigned __int64)v9 >> 24) ^ (0x100000001B3LL
                                                           * (BYTE2(v9) ^ (0x100000001B3LL
                                                                         * ((0x100000001B3LL
                                                                           * ((unsigned __int8)v9 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v9))))))) & *(_QWORD *)(v8 + 424))) == v13
          ? *(__int64 **)(v8 + 384)
          : **(__int64 ***)(v11
                          + 16
                          * ((0x100000001B3LL
                            * (((unsigned __int64)v9 >> 24) ^ (0x100000001B3LL
                                                             * (BYTE2(v9) ^ (0x100000001B3LL
                                                                           * ((0x100000001B3LL
                                                                             * ((unsigned __int8)v9 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v9))))))) & *(_QWORD *)(v8 + 424))
                          + 8);
      if ( v12 == v14 )
        break;
      if ( *((_DWORD *)v12 + 4) == v9 )
        goto LABEL_7;
      v12 = (__int64 *)*v12;
    }
    v12 = *(__int64 **)(v8 + 384);
LABEL_7:
    if ( v12 == v13 )
    {
      if ( v8 != -440 )
        ReleaseSRWLockShared((PSRWLOCK)(v8 + 440));
      v15 = 0;
    }
    else
    {
      v15 = *((_BYTE *)v12 + 20);
      if ( v10 )
        ReleaseSRWLockShared(v10);
    }
    if ( v15 )
    {
      if ( (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
      {
        TouchKeyboardExperienceManager::GetForegroundAppId(v31, pv_8);
        *(LPVOID *)&rc.left = pv_8[0];
        TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
          &rc,
          *((_QWORD *)this + 13) + 596LL,
          &v40,
          (char *)this + 472);
        if ( pv_8[0] )
          CoTaskMemFree(pv_8[0]);
      }
    }
    v16 = *((_QWORD *)this + 13);
    v17 = *(float *)&v40;
    v18 = *((float *)&v40 + 1);
    v19 = *((float *)&v40 + 2);
    v20 = *((float *)&v40 + 3);
    v21 = 0;
    rc.left = (int)*(float *)&v40;
    rc.top = (int)*((float *)&v40 + 1);
    rc.right = (int)(float)(*((float *)&v40 + 2) + *(float *)&v40);
    rc.bottom = (int)(float)(*((float *)&v40 + 3) + *((float *)&v40 + 1));
    v22 = MonitorFromRect(&rc, 2u);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 100;
    v35 = v22;
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v22, &mi) )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v35, &v38);
      if ( ScaleFactorForMonitor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor,
          (int)pv_8[0]);
    }
    if ( v38 )
    {
      v17 = (float)(v17 * 100.0) / (float)v38;
      v18 = (float)(v18 * 100.0) / (float)v38;
      v19 = (float)(v19 * 100.0) / (float)v38;
      v20 = (float)(v20 * 100.0) / (float)v38;
    }
    *(float *)&rc.left = v17;
    *(float *)&rc.top = v18;
    *(float *)&rc.right = v19;
    *(float *)&rc.bottom = v20;
    *(_OWORD *)pv_8 = *(_OWORD *)(v16 + 176);
    if ( v17 != *(float *)pv_8
      || v18 != *((float *)pv_8 + 1)
      || v19 != *(float *)&pv_8[1]
      || v20 != *((float *)&pv_8[1] + 1) )
    {
      *(RECT *)(v16 + 176) = rc;
      v21 = 3;
      *(_BYTE *)(v16 + 460) = 0;
    }
    v24 = *((_QWORD *)this + 6);
    if ( v24
      && (rc.left = (int)*(float *)&v40,
          rc.top = (int)*((float *)&v40 + 1),
          rc.right = (int)(float)(*((float *)&v40 + 2) + *(float *)&v40),
          rc.bottom = (int)(float)(*((float *)&v40 + 1) + *((float *)&v40 + 3)),
          v32 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v24 + 48LL))(v24, &rc),
          v33 = v32,
          v32 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A7,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v32,
        (int)pv_8[0]);
      return v33;
    }
    else
    {
      if ( v21 != 3 )
        return 0LL;
      v26 = *((_QWORD *)this + 8);
      v27 = (RTL_SRWLOCK *)(v26 + 680);
      AcquireSRWLockExclusive((PSRWLOCK)(v26 + 680));
      v28 = *(_DWORD *)(v26 + 672);
      if ( v27 )
        ReleaseSRWLockExclusive(v27);
      if ( v28 == 1 && (v29 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this), v30 = v29, v29 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AF,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v29,
          (int)pv_8[0]);
        return v30;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
