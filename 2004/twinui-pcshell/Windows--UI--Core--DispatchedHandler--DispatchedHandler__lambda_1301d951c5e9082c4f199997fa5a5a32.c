/*
 * XREFs of Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___ @ 0x1802F4AB8
 * Callers:
 *     ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x1802F4F30 (--1XamlExplorerHostWindow@@UEAA@XZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802ED008 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Core::DispatchedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Core::DispatchedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v2 = a1 + 5;
  a1[37] = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
    *v2 = off_1805C43D0;
  a1[37] = v2;
  return a1;
}
