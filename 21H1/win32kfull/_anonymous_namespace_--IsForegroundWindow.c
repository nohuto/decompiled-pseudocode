/*
 * XREFs of _anonymous_namespace_::IsForegroundWindow @ 0xAD3E2
 * Callers:
 *     _lambda_fd3250b01a93d986fc52efb651841859_::_lambda_invoker_stdcall_ @ 0xEF826 (_lambda_fd3250b01a93d986fc52efb651841859_--_lambda_invoker_stdcall_.c)
 *     ?xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z @ 0x141930 (-xxxTrackingActivateWindow@@YG_NPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall anonymous_namespace_::IsForegroundWindow(_DWORD *this)
{
  return _gpqForeground == *(_DWORD *)(this[2] + 236) && *(_DWORD **)(_gpqForeground + 64) == this;
}
