/*
 * XREFs of _NtUserGetDisplayAutoRotationPreferences@4 @ 0x162897
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *v2; // ecx
  int v4; // [esp+18h] [ebp-1Ch]

  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 232) + 520);
  v2 = a1;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    v2 = (_DWORD *)_MmUserProbeAddress;
  *v2 = *v2;
  *a1 = v4;
  UserSessionSwitchLeaveCrit();
  return 1;
}
