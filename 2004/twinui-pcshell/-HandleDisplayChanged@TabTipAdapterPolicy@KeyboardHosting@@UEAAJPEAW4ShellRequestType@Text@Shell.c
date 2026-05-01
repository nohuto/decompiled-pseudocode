/*
 * XREFs of ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B2F00
 * Callers:
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800B2310 (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N00AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B2A70 (--$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Touch.c)
 *     ?IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ @ 0x1800B3394 (-IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ.c)
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x180369628 (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18036B3EC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDisplayChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  char v7; // r13
  char v8; // si
  bool v9; // al
  bool v10; // bp
  HMONITOR v11; // rax
  HMONITOR v12; // rbx
  HMONITOR PinnedMonitor; // rax
  KeyboardHosting::MonitorInformation *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v16; // [rsp+68h] [rbp+10h] BYREF
  bool v17; // [rsp+70h] [rbp+18h] BYREF
  bool IsValid; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  updated = UpdateScalingInfoCache();
  v5 = updated;
  if ( updated >= 0 )
  {
    IsValid = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
    v7 = IsValid;
    v17 = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
    v8 = v17;
    v9 = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264));
    v16 = v9;
    v10 = v9;
    if ( !v7 || !v8 || !v9 )
    {
      v11 = MonitorFromWindow(0LL, 1u);
      v12 = v11;
      if ( !v7 )
      {
        *((_QWORD *)this + 27) = v11;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 216));
      }
      if ( !v8 )
      {
        *((_QWORD *)this + 39) = v12;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312));
      }
      if ( !v10 )
      {
        PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor((KeyboardHosting::TabTipAdapterPolicy *)((char *)this - 16));
        v14 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 264);
        if ( PinnedMonitor )
          v12 = PinnedMonitor;
        *(_QWORD *)v14 = v12;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v14);
      }
    }
    *(_DWORD *)a2 = 3;
    TouchKeyboardExperienceTelemetryLogger::HandleDisplayChanged<bool const &,bool const &,bool const &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      (char *)&IsValid,
      (char *)&v17,
      (char *)&v16,
      (char *)a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v5;
  }
}
