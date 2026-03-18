/*
 * XREFs of ?SendHapticFeedbackOutput@InteractiveControlDevice@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B269C
 * Callers:
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1AE647 (-SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 *     ?OnTimerNotification@InteractiveControlDevice@@QAEJXZ @ 0x1B22CF (-OnTimerNotification@InteractiveControlDevice@@QAEJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SendHapticFeedbackOutput@SimpleHapticsController@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1B4F4C (-SendHapticFeedbackOutput@SimpleHapticsController@@QAEJABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

int __thiscall InteractiveControlDevice::SendHapticFeedbackOutput(
        InteractiveControlDevice *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  int v3; // esi
  SimpleHapticsController *v4; // ecx

  v3 = 0;
  if ( *((_DWORD *)InteractiveControlManager::Instance() + 16) )
  {
    v4 = (SimpleHapticsController *)*((_DWORD *)this + 76);
    if ( v4 )
      return SimpleHapticsController::SendHapticFeedbackOutput(v4, a2);
  }
  return v3;
}
