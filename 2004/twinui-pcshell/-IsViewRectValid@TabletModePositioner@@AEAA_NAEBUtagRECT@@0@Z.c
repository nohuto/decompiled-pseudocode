/*
 * XREFs of ?IsViewRectValid@TabletModePositioner@@AEAA_NAEBUtagRECT@@0@Z @ 0x1803F9804
 * Callers:
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180401060 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TabletModePositioner::IsViewRectValid(
        TabletModePositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  int v5; // ecx
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 31) + 24LL))(*((_QWORD *)this + 31), v7);
  v5 = 8 * v8 / 100;
  return (int)abs32(a2->left - a3->left) <= v5
      && (int)abs32(a2->top - a3->top) <= v5
      && (int)abs32(a2->right - a3->right) <= v5
      && (int)abs32(a2->bottom - a3->bottom) <= v5;
}
