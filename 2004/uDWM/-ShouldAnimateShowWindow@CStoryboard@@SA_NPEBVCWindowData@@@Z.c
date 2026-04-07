/*
 * XREFs of ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180008A38
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003894C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000C5B8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180042184 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CStoryboard::ShouldAnimateShowWindow(const struct CWindowData *a1)
{
  unsigned __int64 v1; // rdx
  char v3; // di
  int v4; // eax
  CImmersiveState *v5; // r10
  CImmersiveState *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v7 = 0LL;
  v3 = 1;
  v4 = CImmersiveState::Create(&v7, v1);
  v5 = v7;
  if ( v4 >= 0
    && (*((_DWORD *)a1 + 154) & 0x100000) != 0
    && ((*((_BYTE *)a1 + 612) & 2) != 0 || CImmersiveState::IsLauncherShownAboveWindow(v7, a1)) )
  {
    v3 = 0;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}
