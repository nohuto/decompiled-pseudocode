/*
 * XREFs of ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FA460
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061704 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FA8B8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FAAE8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BB1A8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x1800F9958 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FC790 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FFBC4 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::CreateMonitor(__int64 a1, _WORD *a2, _WORD *a3, int a4, char a5, _QWORD *a6)
{
  _QWORD *v10; // rsi
  int v11; // edi
  LPVOID v12; // rax
  unsigned int v13; // r8d
  const char *v14; // r9
  void *v15; // rbx
  int v16; // eax
  const char *v17; // r9
  unsigned int v18; // edi
  ATL::CAtlException *v20; // rbx
  void *v21; // [rsp+38h] [rbp-30h]
  ATL::CAtlException *v22; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = a6;
  *a6 = 0LL;
  v11 = 0;
  v12 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    try
    {
      if ( v12 )
        v15 = (void *)CMonitorManager::CaptureMonitor::CaptureMonitor((__int64)v12, a1, a2, a3, a4, a5);
      else
        v15 = 0LL;
      v21 = v15;
    }
    catch ( ATL::CAtlException *v22 )
    {
      v20 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v10 = a6;
      v11 = *(_DWORD *)v20;
      v15 = v21;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2745LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v11);
    if ( !v15 )
      wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0xABB, v13, v14);
    v16 = CMonitorManager::CaptureMonitor::Initialize(v15);
    v18 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2751LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v16);
    *v10 = v15;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x55u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v15);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAC7,
                           (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                           v17);
  }
  return v18;
}
