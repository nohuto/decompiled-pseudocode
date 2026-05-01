/*
 * XREFs of ??0_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@QEAA@AEBV0@@Z @ 0x1802FA160
 * Callers:
 *     ??$?0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@W4CallbackContext@Platform@@_N@Z @ 0x1802F69C4 (--$-0V_lambda_0b0ea29adb38baec39914485464e8775_@@@DispatchedHandler@Core@UI@Windows@@QE$AAA@V_la.c)
 *     ??$?0V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@W4CallbackContext@Platform@@_N@Z @ 0x1802F6E50 (--$-0V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@AnimationCompletedEventHandler@Switcher@Experi.c)
 *     ??0?$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@QEAA@V_lambda_0b0ea29adb38baec39914485464e8775_@@@Z @ 0x1802FAE0C (--0-$__abi_FunctorCapture@V_lambda_0b0ea29adb38baec39914485464e8775_@@X$$V@Details@Platform@@QEA.c)
 *     ??0?$__abi_FunctorCapture@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@X$$V@Details@Platform@@QEAA@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@@Z @ 0x1802FAE78 (--0-$__abi_FunctorCapture@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@X$$V@Details@Platform@@QEA.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180301328 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

_lambda_7d544a6ebe9fabad27cf83ed972508d6_ *__fastcall _lambda_7d544a6ebe9fabad27cf83ed972508d6_::_lambda_7d544a6ebe9fabad27cf83ed972508d6_(
        _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *this,
        const struct _lambda_7d544a6ebe9fabad27cf83ed972508d6_ *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = __abi_winrt_ptr_ctor(*((_QWORD *)a2 + 1));
  return this;
}
