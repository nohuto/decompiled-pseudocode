/*
 * XREFs of ??$?0V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@W4CallbackContext@Platform@@_N@Z @ 0x1802D52B0
 * Callers:
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1802DF788 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802CB468 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z @ 0x1802D85C0 (--0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z.c)
 *     ??0?$__abi_FunctorCapture@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@X$$V@Details@Platform@@QEAA@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@Z @ 0x1802D92D8 (--0-$__abi_FunctorCapture@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@X$$V@Details@Platform@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler(
        _QWORD *a1,
        const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *a2)
{
  _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
           (_lambda_7d544a6ebe9fabad27cf83ed972508d6_ *)v9,
           a2);
    v5 = Platform::Details::__abi_FunctorCapture<_lambda_7d544a6ebe9fabad27cf83ed972508d6_,void,>::__abi_FunctorCapture<_lambda_7d544a6ebe9fabad27cf83ed972508d6_,void,>(
           a1 + 5,
           v4);
  }
  a1[37] = v5;
  v6 = *((_QWORD *)a2 + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
