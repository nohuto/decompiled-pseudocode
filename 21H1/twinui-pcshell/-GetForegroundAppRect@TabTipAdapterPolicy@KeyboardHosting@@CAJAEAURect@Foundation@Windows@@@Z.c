/*
 * XREFs of ?GetForegroundAppRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAURect@Foundation@Windows@@@Z @ 0x18002CC30
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18002B54C (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetForegroundAppRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  HMONITOR v4; // rax
  int ScaleFactorForMonitor; // eax
  float left; // xmm2_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  HMONITOR v12; // [rsp+20h] [rbp-29h]
  _DWORD v13[3]; // [rsp+48h] [rbp-1h] BYREF
  float top; // [rsp+54h] [rbp+Bh]
  float v15; // [rsp+58h] [rbp+Fh]
  float v16; // [rsp+5Ch] [rbp+13h]
  struct tagRECT Rect; // [rsp+60h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_OWORD *)a1 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    return 0LL;
  if ( !GetWindowRect(ForegroundWindow, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x330,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
             v3);
  v4 = MonitorFromRect(&Rect, 2u);
  if ( v4 )
  {
    v13[0] = 100;
    v12 = v4;
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v4, &mi) )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v12, v13);
      if ( ScaleFactorForMonitor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor,
          (int)v12);
    }
    *(float *)&v13[2] = (float)Rect.left;
    top = (float)Rect.top;
    v15 = (float)(Rect.right - Rect.left + 1);
    v16 = (float)(Rect.bottom - Rect.top + 1);
    left = (float)Rect.left;
    if ( v13[0] )
    {
      v7 = (float)v13[0];
      left = (float)(left * 100.0) / (float)v13[0];
    }
    else
    {
      v7 = 0.0;
    }
    v8 = top;
    if ( v13[0] )
      v8 = (float)(top * 100.0) / v7;
    v9 = v15;
    if ( v13[0] )
      v9 = (float)(v15 * 100.0) / v7;
    v10 = v16;
    if ( v13[0] )
      v10 = (float)(v16 * 100.0) / v7;
    *(float *)a1 = left;
    *((float *)a1 + 1) = v8;
    *((float *)a1 + 2) = v9;
    *((float *)a1 + 3) = v10;
    return 0LL;
  }
  return 2147549183LL;
}
