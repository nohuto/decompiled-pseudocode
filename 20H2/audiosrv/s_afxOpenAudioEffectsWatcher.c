/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800C5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800C4F9C (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800C5968 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        AudioEffectsWatcherFactory **a6,
        _QWORD *a7)
{
  _QWORD *v8; // rdi
  char v11; // bp
  struct _TP_TIMER **v12; // rax
  __int64 v13; // r8
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v15; // rcx
  AudioEffectsWatcherFactory *v16; // rcx
  struct AudioEffectsWatcher *v17; // rcx
  struct AudioEffectsWatcher *v18; // rdx
  struct AudioEffectsWatcher *v20; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF

  v8 = 0LL;
  v20 = 0LL;
  v11 = 0;
  v12 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v12[1], v13, (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher");
  Watcher = CoInitializeEx(0LL, 0);
  if ( Watcher >= 0 )
  {
    v11 = 1;
    v8 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      if ( a3 > 0xB )
      {
        Watcher = -2147024809;
      }
      else
      {
        Watcher = AudioEffectsWatcherFactory::GetWatcher(v15, a2, a3, a4, &v20);
        if ( Watcher < 0 )
        {
          v18 = v20;
        }
        else
        {
          v17 = v20;
          v18 = 0LL;
          *v8 = v20;
          *a5 = *(_OWORD *)((char *)v17 + 8);
          v16 = *(AudioEffectsWatcherFactory **)((char *)v17 + 92);
          *a6 = v16;
          *a7 = v8;
          v8 = 0LL;
          Watcher = 0;
        }
        if ( v18 )
          AudioEffectsWatcherFactory::ReleaseWatcher(v16, v18);
      }
    }
    else
    {
      Watcher = -2147024882;
    }
  }
  operator delete(v8, (const struct std::nothrow_t *)8);
  if ( v11 )
    CoUninitialize();
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)Watcher;
}
