/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@std@@XPEAUDeviceInfo@@@std@@EEAAX_N@Z @ 0x18003ACB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void,DeviceInfo *>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
