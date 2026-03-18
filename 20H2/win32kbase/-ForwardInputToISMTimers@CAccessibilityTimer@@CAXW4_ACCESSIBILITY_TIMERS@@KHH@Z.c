/*
 * XREFs of ?ForwardInputToISMTimers@CAccessibilityTimer@@CAXW4_ACCESSIBILITY_TIMERS@@KHH@Z @ 0x1C01A31B4
 * Callers:
 *     ?KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z @ 0x1C01A32B0 (-KillTimer@CAccessibilityTimer@@SA_NW4_ACCESSIBILITY_TIMERS@@@Z.c)
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01A3300 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 CAccessibilityTimer::ForwardInputToISMTimers()
{
  return InputExtensibilityCallout::CoreMsgSendMessage(1LL, 18);
}
