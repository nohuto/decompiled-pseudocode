/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@std@@XPEAUDeviceInfo@@@std@@EEAAPEAV?$_Func_base@XPEAUDeviceInfo@@@2@PEAX@Z @ 0x18001E4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void,DeviceInfo *>::_Move(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void,DeviceInfo *>::`vftable';
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  return a2;
}
