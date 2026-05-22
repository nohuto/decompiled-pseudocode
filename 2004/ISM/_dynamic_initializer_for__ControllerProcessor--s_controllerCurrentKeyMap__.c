/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001910
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@QEAA@XZ @ 0x1800253A0 (--0-$unordered_map@W4GameInputGamepadButtons@@GU-$hash@W4GameInputGamepadButtons@@@std@@U-$equal.c)
 */

int dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__()
{
  std::unordered_map<enum GameInputGamepadButtons,unsigned short>::unordered_map<enum GameInputGamepadButtons,unsigned short>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__);
}
