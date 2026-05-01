/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJAEBUtagRECT@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180347900
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180335660 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@@details@wil@@QEAA_NXZ @ 0x1800A481C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923@@.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180346B24 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x180349EBC (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180349ECC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(
        HMONITOR *this,
        __m128i *a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // r8
  int v11; // eax
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v13; // rbx
  unsigned __int64 v14; // xmm1_8
  unsigned __int64 v15; // r8
  int v16; // eax
  HMONITOR v17; // rax
  __m128i v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  *(_DWORD *)a3 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ExplorerHang_31007923>::GetImpl'::`2'::impl) )
  {
    updated = UpdateScalingInfoCache();
    v7 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)updated);
      return v7;
    }
    v9 = _mm_srli_si128(*a2, 8).m128i_u64[0];
    v10 = HIDWORD(a2->m128i_i64[0]);
    v11 = v9 - a2->m128i_i64[0] + 1;
    *(float *)v18.m128i_i32 = (float)(int)a2->m128i_i64[0];
    *(float *)&v18.m128i_i32[1] = (float)(int)v10;
    *(float *)&v18.m128i_i32[2] = (float)v11;
    *(float *)&v18.m128i_i32[3] = (float)(HIDWORD(v9) - (int)v10 + 1);
    CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v18);
    v13 = CurrentMonitorWithRect;
    if ( CurrentMonitorWithRect )
    {
      KeyboardHosting::MonitorInformation::SetMonitor(
        (KeyboardHosting::MonitorInformation *)(this + 27),
        CurrentMonitorWithRect);
      if ( v13 == this[39] )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(this + 39));
      if ( v13 == this[33] )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(this + 33));
    }
  }
  else
  {
    v14 = _mm_srli_si128(*a2, 8).m128i_u64[0];
    v15 = HIDWORD(a2->m128i_i64[0]);
    v16 = v14 - a2->m128i_i64[0] + 1;
    *(float *)v18.m128i_i32 = (float)(int)a2->m128i_i64[0];
    *(float *)&v18.m128i_i32[1] = (float)(int)v15;
    *(float *)&v18.m128i_i32[2] = (float)v16;
    *(float *)&v18.m128i_i32[3] = (float)(HIDWORD(v14) - (int)v15 + 1);
    v17 = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v18);
    KeyboardHosting::MonitorInformation::SetMonitor((KeyboardHosting::MonitorInformation *)(this + 27), v17);
  }
  *(_DWORD *)a3 = 3;
  return 0LL;
}
