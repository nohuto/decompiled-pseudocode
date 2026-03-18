/*
 * XREFs of _NtUserPerMonitorDPIPhysicalToLogicalPoint@8 @ 0x167567
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DCEPtInRect@12 @ 0x150BB6 (_DCEPtInRect@12.c)
 */

BOOL __stdcall NtUserPerMonitorDPIPhysicalToLogicalPoint(int a1, ULONG a2)
{
  BOOL v2; // esi
  int v3; // ebx
  int *v4; // edi
  int v5; // ecx
  int v6; // eax
  int CurrentThreadDpiAwarenessContext; // eax
  int v8; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v10; // eax
  int v11; // edx
  int v13; // [esp+10h] [ebp-34h] BYREF
  int v14; // [esp+14h] [ebp-30h]
  int v15; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v2 = 0;
  EnterSharedCrit(0, 1);
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_14;
  }
  else
  {
    v3 = 0;
  }
  v13 = 0;
  v14 = 0;
  ms_exc.registration.TryLevel = 0;
  v4 = (int *)a2;
  if ( a2 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  v5 = *v4;
  v6 = v4[1];
  *v4 = *v4;
  v4[1] = v6;
  v13 = v5;
  v14 = v6;
  ms_exc.registration.TryLevel = -2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext;
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v10 = KeGetCurrentThread();
      W32GetThreadWin32Thread(v10);
    }
    a1 = GuessMonitorOverrideForCoordinateConversions(v13, v14, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), 1);
    PhysicalToLogicalDPIPoint(&v13, &v13, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &a1);
    v2 = DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v13, v14);
  }
  else
  {
    a2 = GuessMonitorOverrideForCoordinateConversions(v13, v14, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIPoint(&v13, &v13, v8, &a2);
    v2 = 1;
    v11 = v14;
  }
  v15 = v2;
  if ( v2 )
  {
    *v4 = v13;
    v4[1] = v11;
    v2 = 1;
    v15 = 1;
    ms_exc.registration.TryLevel = -2;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v2;
}
