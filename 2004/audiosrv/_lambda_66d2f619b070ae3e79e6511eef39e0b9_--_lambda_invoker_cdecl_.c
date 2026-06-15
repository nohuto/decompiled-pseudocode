/*
 * XREFs of _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x180047FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800461A4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v4; // eax
  int v5; // eax

  v4 = _Mtx_lock((_Mtx_t)(Context + 8));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    goto LABEL_7;
  }
  if ( !*(_DWORD *)Context )
    CSebNotifier::PublishSebEvent((CSebNotifier *)Context, 0);
  v5 = _Mtx_unlock((_Mtx_t)(Context + 8));
  if ( v5 )
  {
LABEL_7:
    std::_Throw_C_error(v5);
    __debugbreak();
    JUMPOUT(0x18009BE94LL);
  }
}
