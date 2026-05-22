/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@std@@XPEAUDeviceInfo@@@std@@EEAAX$$QEAPEAUDeviceInfo@@@Z @ 0x1800385A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void,DeviceInfo *>::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(a1 + 8), 8)),
           *a2);
}
