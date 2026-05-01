/*
 * XREFs of ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x180200978
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801F9D60 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1801F9828 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x180200FA8 (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DDAScreenCapture::CreateInstance(struct DDAScreenCapture **a1, HMONITOR a2)
{
  _QWORD *v4; // rsi
  DDAScreenCapture *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x88uLL);
  *v4 = 0LL;
  v4[13] = 0LL;
  v4[14] = 0LL;
  v4[15] = 0LL;
  v4[16] = a2;
  memset_0(v4 + 1, 0, 0x60uLL);
  v5 = (DDAScreenCapture *)v4;
  v6 = DDAScreenCapture::Initialize((DDAScreenCapture *)v4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v5 = 0LL;
    *a1 = (struct DDAScreenCapture *)v4;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v5 )
    DDAScreenCapture::`scalar deleting destructor'(v5);
  return v7;
}
