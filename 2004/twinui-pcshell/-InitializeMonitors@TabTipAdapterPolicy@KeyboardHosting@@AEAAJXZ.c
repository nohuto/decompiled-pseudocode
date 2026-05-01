/*
 * XREFs of ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x180369120
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180369C1C (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x180369628 (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18036B3EC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetSizeOverride@@YA_NPEAN@Z @ 0x18046C198 (-GetSizeOverride@@YA_NPEAN@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(KeyboardHosting::TabTipAdapterPolicy *this)
{
  HMONITOR v2; // rbx
  HMONITOR PinnedMonitor; // rax
  KeyboardHosting::MonitorInformation *v4; // rcx
  double v5; // xmm1_8
  __int64 v6; // rax
  double v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = MonitorFromWindow(0LL, 1u);
  *((_QWORD *)this + 29) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232));
  *((_QWORD *)this + 41) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 328));
  PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(this);
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 280);
  if ( PinnedMonitor )
    v2 = PinnedMonitor;
  *(_QWORD *)v4 = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v4);
  *((_BYTE *)this + 592) = 0;
  v8 = 0.0;
  if ( GetSizeOverride(&v8) )
  {
    v5 = v8;
    if ( v8 >= 5.0 && v8 <= 100.0 )
    {
      v6 = *((_QWORD *)this + 27);
      *((_BYTE *)this + 592) = 1;
      *(double *)(v6 + 216) = v5;
      *(_BYTE *)(v6 + 208) = 1;
    }
  }
  return 0LL;
}
