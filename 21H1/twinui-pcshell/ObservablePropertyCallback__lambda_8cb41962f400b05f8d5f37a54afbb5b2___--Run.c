/*
 * XREFs of ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b2___::Run @ 0x18038D680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1498 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18038DD34 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x18038DEB0 (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

_QWORD *__fastcall ObservablePropertyCallback__lambda_8cb41962f400b05f8d5f37a54afbb5b2___::Run(__int64 a1)
{
  CVirtualDesktopBarElement *v1; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CVirtualDesktopBarElement *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(CVirtualDesktopBarElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  v4 = v1;
  if ( v1 )
  {
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 8LL))(v1);
    CVirtualDesktopBarElement::_UpdateScrollElementVisibility(v1);
    CVirtualDesktopBarElement::_LayoutBackground(v1);
    return (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)0x80040201LL);
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v4);
  }
}
