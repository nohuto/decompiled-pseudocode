/*
 * XREFs of ??0InteractiveControlManager@@AAE@XZ @ 0xD6520
 * Callers:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 * Callees:
 *     ??0InteractiveControlSettings@@QAE@XZ @ 0xD657A (--0InteractiveControlSettings@@QAE@XZ.c)
 *     _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA (_TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12.c)
 */

InteractiveControlManager *__thiscall InteractiveControlManager::InteractiveControlManager(
        InteractiveControlManager *this)
{
  InteractiveControlManager *result; // eax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  InteractiveControlSettings::InteractiveControlSettings((InteractiveControlManager *)((char *)this + 48));
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_2662F8, 0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_2662D0, 0);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 4) = *((_DWORD *)this + 18);
  result = this;
  *((_DWORD *)this + 11) = 0;
  return result;
}
