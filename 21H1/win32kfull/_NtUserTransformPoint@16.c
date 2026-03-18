/*
 * XREFs of _NtUserTransformPoint@16 @ 0xC1434
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsValidKernelDpiAwarenessContext@4 @ 0x94768 (_IsValidKernelDpiAwarenessContext@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserTransformPoint(int *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v8; // [esp+10h] [ebp-34h] BYREF
  int v9; // [esp+14h] [ebp-30h]
  int v10; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v4 = 1;
  EnterCrit(0, 1);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( IsValidKernelDpiAwarenessContext(a2) && IsValidKernelDpiAwarenessContext(a3) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    v5 = *a1;
    v6 = a1[1];
    *a1 = *a1;
    a1[1] = v6;
    v8 = v5;
    v9 = v6;
    ms_exc.registration.TryLevel = -2;
    if ( a4 && (a2 & 0xF) == 2 )
    {
      v10 = ValidateHmonitor(a4);
      v6 = v9;
      v5 = v8;
    }
    if ( !v10 )
      v10 = GuessMonitorOverrideForCoordinateConversions(v5, v6, a3, 0);
    LogicalToPhysicalDPIPoint(&v8, &v8, a3, &v10);
    PhysicalToLogicalDPIPoint(&v8, &v8, a2, &v10);
    *a1 = v8;
    a1[1] = v9;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v4 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
