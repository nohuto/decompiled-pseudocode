/*
 * XREFs of _NtUserSetInteractiveCtrlRotationAngle@20 @ 0x1695F9
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE72E (-SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@.c)
 */

int __stdcall NtUserSetInteractiveCtrlRotationAngle(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  struct InteractiveControlManager *v6; // eax
  int v8; // [esp-Ch] [ebp-Ch]
  int v9; // [esp-8h] [ebp-8h]

  EnterSharedCrit(0, 1);
  v5 = a2;
  if ( a2 < 1 || a2 > 8 )
    v5 = 3;
  v9 = a4;
  v8 = v5;
  v6 = InteractiveControlManager::Instance();
  InteractiveControlManager::SetDeviceComponentResolution(v6, a1, v8, v9, &a3);
  UserSessionSwitchLeaveCrit();
  return 1;
}
