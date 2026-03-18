/*
 * XREFs of _NtUserSetInteractiveControlFocus@12 @ 0x169551
 * Callers:
 *     <none>
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@@Z @ 0x1AE851 (-SetDeviceFocus@InteractiveControlManager@@QAEJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PAUtagWND@@.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOL __stdcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, int a2, int a3)
{
  BOOL v3; // ebx
  int v4; // esi
  struct InteractiveControlManager *v5; // eax
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v3 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  if ( IsShellProcess(*(_DWORD **)(_gptiCurrent + 232)) )
    _gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v4 = ValidateHwnd(a3);
    if ( !v4 )
      goto LABEL_10;
  }
  else
  {
    v4 = 0;
  }
  v7 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v7;
  v8 = v4;
  if ( v4 )
    HMLockObject(v4);
  v5 = InteractiveControlManager::Instance();
  v3 = InteractiveControlManager::SetDeviceFocus(v5, a1, a2, v4) >= 0;
  ThreadUnlock1();
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v3;
}
