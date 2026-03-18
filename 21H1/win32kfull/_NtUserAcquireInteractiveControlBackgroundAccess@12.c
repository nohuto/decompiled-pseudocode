/*
 * XREFs of _NtUserAcquireInteractiveControlBackgroundAccess@12 @ 0xD63AE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z @ 0xD6454 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 */

BOOL __stdcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, int a3)
{
  BOOL v3; // ebx
  struct tagWND *v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  InteractiveControlManager *v7; // eax
  unsigned int v9; // [esp-Ch] [ebp-24h]
  unsigned int v10; // [esp-8h] [ebp-20h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  struct tagWND *v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v3 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  if ( !a3 )
  {
    v4 = 0;
LABEL_3:
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v4;
    if ( v4 )
      HMLockObject(v4);
    v5 = a2;
    if ( a2 )
    {
      if ( a2 - 744 > 0x11 )
      {
        UserSetLastError((struct _NT_TIB *)0x57);
        goto LABEL_9;
      }
      v6 = a2;
    }
    else
    {
      v5 = 744;
      v6 = 761;
    }
    v10 = v6;
    v9 = v5;
    v7 = InteractiveControlManager::Instance();
    v3 = InteractiveControlManager::AcquireDeviceBackgroundAccess(v7, a1, v9, v10, v4) >= 0;
LABEL_9:
    ThreadUnlock1();
    goto LABEL_10;
  }
  v4 = (struct tagWND *)ValidateHwnd(a3);
  if ( v4 )
    goto LABEL_3;
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v3;
}
