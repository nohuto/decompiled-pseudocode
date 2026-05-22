/*
 * XREFs of ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C2244
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18007A2E8 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180122C50 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ceilf_0 @ 0x18004A5DB (ceilf_0.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008CA44 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800C2034 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     ?InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800C26FC (-InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::Initialize(ManipulationInjector *this, HMONITOR a2, const struct tagRECT *a3)
{
  const struct tagRECT *v3; // rdi
  BOOL MonitorInfoW; // eax
  RECT *p_rcMonitor; // rcx
  int v7; // ecx
  float v8; // xmm8_4
  int v9; // ecx
  const char *v10; // r9
  __int64 v11; // rsi
  DWORD v12; // eax
  int v13; // eax
  float v14; // xmm0_4
  LONG x; // ecx
  __int64 v16; // r8
  LONG v17; // ecx
  __int64 v18; // r8
  struct tagPOINT v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  int v23; // r9d
  int v24; // eax
  DWORD v25; // eax
  DWORD LastError; // eax
  _DWORD *v27; // rcx
  struct tagPOINT v28; // [rsp+48h] [rbp-9h] BYREF
  tagMONITORINFO mi; // [rsp+50h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  *((_QWORD *)this + 7) = 0LL;
  v3 = a3;
  memset(&mi, 0, sizeof(mi));
  if ( !a3 )
  {
    mi.cbSize = 40;
    MonitorInfoW = GetMonitorInfoW(0LL, &mi);
    p_rcMonitor = &mi.rcMonitor;
    if ( !MonitorInfoW )
      p_rcMonitor = 0LL;
    v3 = p_rcMonitor;
  }
  ManipulationInjector::InitializeOverlapEvent(this);
  if ( v3 )
  {
    v7 = 2 * *((_DWORD *)this + 4);
    if ( v3->right - v3->left < v7 || v3->bottom - v3->top < v7 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        141LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)0x80070057LL);
      __debugbreak();
    }
    *((struct tagRECT *)this + 4) = *v3;
    if ( GetSystemMetrics(4096)
      || !(unsigned int)GetDpiForMonitorInternal(0LL, 2LL, (char *)this + 772, (char *)this + 776) )
    {
      *((_DWORD *)this + 193) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16))
                                                           * 2540.0)
                                                   / 20320.0)
                                           + 0.5);
      *((_DWORD *)this + 194) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17))
                                                           * 2540.0)
                                                   / 15240.0)
                                           + 0.5);
    }
  }
  v8 = (float)*((int *)this + 194);
  *((_DWORD *)this + 184) = (int)ceilf_0((float)(v8 * 270.0) / 2540.0);
  v9 = (int)ceilf_0((float)(v8 * 400.0) / 2540.0);
  *((_DWORD *)this + 183) = v9;
  if ( (v9 & 1) != 0 )
    *((_DWORD *)this + 183) = v9 + ((v9 >> 31) & 0xFFFFFFFE) + 1;
  v11 = 4LL;
  switch ( *(_DWORD *)this )
  {
    case 1:
      if ( !(unsigned int)InitializePointerDeviceInjectionEx(2LL, 4LL, 0LL) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            183LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)LastError);
          __debugbreak();
        }
      }
      break;
    case 2:
      if ( !v3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          189LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v10);
        __debugbreak();
      }
      v13 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
      v28.y = 0;
      v14 = (float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)) * 100.0) / v8) + 0.5;
      dword_1802074FC = (int)(float)((float)((float)((float)v13 * 100.0) / (float)*((int *)this + 193)) + 0.5);
      dword_18020751C = (int)v14;
      v28.x = *((_DWORD *)this + 5);
      v28 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28, (unsigned int)v28.x);
      x = v28.x;
      v28.x = *((_DWORD *)this + 7);
      v16 = (__int64)v28;
      *((_DWORD *)this + 186) = x;
      v28 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28, v16);
      v17 = v28.x;
      v28.x = *((_DWORD *)this + 9);
      v18 = (__int64)v28;
      *((_DWORD *)this + 187) = v17;
      v19 = ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28, v18);
      v20 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 188) = *(_DWORD *)v19.x;
      v21 = (_QWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v28, v20);
      v22 = *((_QWORD *)this + 9);
      *(_QWORD *)((char *)this + 756) = *v21;
      *(_QWORD *)((char *)this + 764) = **(_QWORD **)&ManipulationInjector::DeskToDigiPt(
                                                        this,
                                                        (struct tagPOINT)&v28,
                                                        v22);
      v24 = (int)(float)((float)(503937.0 / (float)v23) + 0.5);
      *((_DWORD *)this + 182) = v24;
      if ( (v24 & 1) != 0 )
        *((_DWORD *)this + 182) = v24 + 1;
      if ( !(unsigned int)InitializeInputDeviceInjection(13LL, 4LL, &gTouchUsages, 11LL, 0LL, 3, (char *)this + 96) )
      {
        v25 = GetLastError();
        if ( v25 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            236LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v25);
          __debugbreak();
        }
      }
      break;
    case 3:
      if ( !(unsigned int)InitializeTouchInjection(4LL, 3LL) )
      {
        v12 = GetLastError();
        if ( v12 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            245LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v12);
          __debugbreak();
        }
      }
      break;
    case 4:
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        253LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v10);
      __debugbreak();
  }
  v27 = (_DWORD *)((char *)this + 112);
  do
  {
    *(v27 - 2) = 2;
    *v27 = 2;
    v27 += 38;
    *((_QWORD *)v27 - 17) = *((_QWORD *)this + 12);
    --v11;
  }
  while ( v11 );
}
