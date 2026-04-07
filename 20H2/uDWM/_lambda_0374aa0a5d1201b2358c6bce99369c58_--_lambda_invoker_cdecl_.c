/*
 * XREFs of _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x180054BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  wil::details::EnabledStateManager::OnTimer(Context);
}
