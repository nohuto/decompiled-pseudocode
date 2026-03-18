/*
 * XREFs of _NtUserSendInteractiveControlHapticsReport@12 @ 0x168680
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1AE647 (-SendDeviceHapticsOutput@InteractiveControlManager@@QAEJKABU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

BOOL __stdcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, _DWORD *Address)
{
  BOOL v3; // ebx
  InteractiveControlManager *v4; // eax
  _DWORD v6[5]; // [esp+18h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  if ( a2 == 16 )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForRead(Address, 0x10u, 1u);
    v6[0] = *Address;
    v6[1] = Address[1];
    v6[2] = Address[2];
    v6[3] = Address[3];
    ms_exc.registration.TryLevel = -2;
    v4 = InteractiveControlManager::Instance();
    v3 = InteractiveControlManager::SendDeviceHapticsOutput(v4, a1, (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v6) >= 0;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
