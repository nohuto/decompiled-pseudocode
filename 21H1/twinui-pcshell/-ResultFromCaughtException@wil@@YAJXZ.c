/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18017B8EC
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::catch$141 @ 0x1800B0CBD (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800B0CBD.c)
 *     _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$1 @ 0x1800DCBFF (_wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::catch$42 @ 0x1800DCC3D (_wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____--_1_--catch$42.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180179A30 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x180286A3C (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$8 @ 0x180286F06 (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$8.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x1802871C7 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$91 @ 0x180293079 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--catch$91.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18029DA0C (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$7 @ 0x18029E604 (_ViewManagerBridge--OnConnected_--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____::_1_::catch$7 @ 0x180323845 (_wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284____--_1_--catch$7.c)
 *     _wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____::_1_::catch$1 @ 0x1803AFA53 (_wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____::_1_::catch$1 @ 0x1803B22E7 (_wil--ResultFromException__lambda_cdb60d23c2a90c24b7bbcc9711020c83____--_1_--catch$1.c)
 *     _wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____::_1_::catch$1 @ 0x1803C8487 (_wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____--_1_--catch$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v3), (int)result >= 0) )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, 2442LL, (__int64)"wil", (const char *)0x8007023ELL);
    __debugbreak();
  }
  return result;
}
