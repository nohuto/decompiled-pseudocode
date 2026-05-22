/*
 * XREFs of ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B20B0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800B3200 (std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOA_ea_1800B3200.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x1800AF5C8 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800B4DC8 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 */

void __fastcall Win32kInterop::ProcessLowLevelKeyboardInputMessage(
        KeyboardOverriderDispatcher **this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  _DWORD v4[88]; // [rsp+20h] [rbp-178h] BYREF

  memset_0(v4, 0, sizeof(v4));
  v4[0] = 4;
  v4[6] = 352;
  if ( Win32kInterop::CreateKeyboardInputInfo((Win32kInterop *)this, a2, (struct KeyboardInputInfo *)v4) )
    KeyboardOverriderDispatcher::AddMessage(this[5], a2, (struct KeyboardInputInfo *)v4);
}
