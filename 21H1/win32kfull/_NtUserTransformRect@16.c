/*
 * XREFs of _NtUserTransformRect@16 @ 0x94646
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsValidKernelDpiAwarenessContext@4 @ 0x94768 (_IsValidKernelDpiAwarenessContext@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserTransformRect(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v6; // [esp+2Ch] [ebp-30h] BYREF
  int v7; // [esp+30h] [ebp-2Ch] BYREF
  int v8; // [esp+34h] [ebp-28h]
  int v9; // [esp+38h] [ebp-24h]
  int v10; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v4 = 1;
  EnterCrit(0, 1);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v6 = 0;
  if ( IsValidKernelDpiAwarenessContext(a2) && IsValidKernelDpiAwarenessContext(a3) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    *a1 = *a1;
    a1[1] = a1[1];
    a1[2] = a1[2];
    a1[3] = a1[3];
    v7 = *a1;
    v8 = a1[1];
    v9 = a1[2];
    v10 = a1[3];
    ms_exc.registration.TryLevel = -2;
    if ( a4 && (a2 & 0xF) == 2 )
      v6 = ValidateHmonitor(a4);
    if ( !v6 )
      v6 = GuessMonitorOverrideForCoordinateConversions((v9 + v7) / 2, (v10 + v8) / 2, a3, 0);
    LogicalToPhysicalDPIRect(&v7, &v7, a3, &v6);
    PhysicalToLogicalDPIRect(&v7, &v7, a2, &v6);
    *a1 = v7;
    a1[1] = v8;
    a1[2] = v9;
    a1[3] = v10;
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
