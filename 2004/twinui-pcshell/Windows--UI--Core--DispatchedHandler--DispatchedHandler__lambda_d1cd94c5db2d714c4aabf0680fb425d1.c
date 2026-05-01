/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1___ @ 0x18031E5AC
 * Callers:
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1803212D8 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802ED008 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0 @ 0x18031F24C (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_ @ 0x18031F2BC (Platform--Details--__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_--__abi_F.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1___(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[64]; // [rsp+20h] [rbp-48h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = Platform::Details::Heap::Allocate(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = lambda_d1cd94c5db2d714c4aabf0680fb425d1_::_lambda_d1cd94c5db2d714c4aabf0680fb425d1__0(v9, a2);
    v4 = (void *)Platform::Details::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_::__abi_FunctorCapture__lambda_d1cd94c5db2d714c4aabf0680fb425d1__void_(
                   v5,
                   v6);
  }
  a1[37] = v4;
  v7 = a2[1];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return a1;
}
