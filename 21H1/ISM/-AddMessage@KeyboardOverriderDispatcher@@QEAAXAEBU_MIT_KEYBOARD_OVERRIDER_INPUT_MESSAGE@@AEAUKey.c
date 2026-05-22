/*
 * XREFs of ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800B4DC8
 * Callers:
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B20B0 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B5880 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800B5934 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?_Push_back_internal@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800B63AC (-_Push_back_internal@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD.c)
 *     memcpy_s_0 @ 0x1800B64C0 (memcpy_s_0.c)
 */

void __fastcall KeyboardOverriderDispatcher::AddMessage(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  rsize_t v6; // rdx
  rsize_t v7; // r9

  if ( (*(_BYTE *)a3 & 4) != 0 )
  {
    if ( *((char *)a2 + 270) < 0 )
    {
      if ( *((_QWORD *)this + 7) )
        std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Push_back_internal((char *)this + 24);
      else
        KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(this, a2);
    }
    else
    {
      std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Push_back_internal((char *)this + 24);
      if ( !*((_BYTE *)this + 728) )
        memcpy_s_0((char *)this + 472, v6, (char *)a2 + 14, v7);
      KeyboardOverriderDispatcher::SendMessageToNarrator(this, a2, a3);
    }
  }
}
