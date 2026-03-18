/*
 * XREFs of _NtUserGetWindowPlacement@8 @ 0xB44BE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetWindowPlacement@12 @ 0xB456C (__GetWindowPlacement@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetWindowPlacement(int a1, _DWORD *a2)
{
  int WindowPlacement; // ebx
  _DWORD v4[11]; // [esp+28h] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  WindowPlacement = 0;
  memset(v4, 0, sizeof(v4));
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  if ( ValidateHwnd(a1) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    qmemcpy(a2, a2, 0x2Cu);
    v4[0] = *a2;
    ms_exc.registration.TryLevel = -2;
    WindowPlacement = _GetWindowPlacement(1);
    if ( WindowPlacement )
    {
      qmemcpy(a2, v4, 0x2Cu);
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return WindowPlacement;
}
