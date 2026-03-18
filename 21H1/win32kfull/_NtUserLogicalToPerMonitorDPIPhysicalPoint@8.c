/*
 * XREFs of _NtUserLogicalToPerMonitorDPIPhysicalPoint@8 @ 0x165DA7
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DCEPtInRect@12 @ 0x150BB6 (_DCEPtInRect@12.c)
 */

int __stdcall NtUserLogicalToPerMonitorDPIPhysicalPoint(int a1, int *a2)
{
  int v2; // esi
  int v3; // edi
  int v5; // ecx
  int v6; // eax
  int CurrentThreadDpiAwarenessContext; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v9; // eax
  int v10; // ecx
  int v11; // eax
  BOOL v12; // eax
  int v13; // edx
  int v15; // [esp+10h] [ebp-44h] BYREF
  int v16; // [esp+14h] [ebp-40h]
  int v17; // [esp+18h] [ebp-3Ch] BYREF
  int v18; // [esp+1Ch] [ebp-38h]
  int v19; // [esp+30h] [ebp-24h] BYREF
  int v20; // [esp+34h] [ebp-20h] BYREF
  int v21; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  unsigned int v23; // [esp+5Ch] [ebp+8h]
  unsigned int v24; // [esp+60h] [ebp+Ch]

  v2 = 0;
  EnterSharedCrit(0, 1);
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_28;
  }
  else
  {
    v3 = 0;
  }
  v21 = 0;
  v17 = 0;
  v18 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  v5 = *a2;
  v6 = a2[1];
  *a2 = *a2;
  a2[1] = v6;
  v17 = v5;
  v18 = v6;
  ms_exc.registration.TryLevel = -2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v23 = CurrentThreadDpiAwarenessContext;
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) != 0
      || (v9 = KeGetCurrentThread(), (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v9) + 260) + 148) & 0x20) != 0)
      || (v24 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), (((v23 >> 8) ^ (v24 >> 8)) & 0x1FF) == 0)
      && ((v24 & 0xF) != 2 || (v24 & 0x20000000) == 0 ? (v10 = 0) : (v10 = 1),
          (v23 & 0xF) != 2 || (v23 & 0x20000000) == 0 ? (v11 = 0) : (v11 = 1),
          v10 == v11) )
    {
      v12 = DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v17, v18);
    }
    else
    {
      v15 = 0;
      v16 = 0;
      TransformPointBetweenCoordinateSpaces(&v15, &v17, v3, 0);
      v12 = DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v15, v16);
    }
    if ( !v12 )
      goto LABEL_26;
    v20 = GuessMonitorOverrideForCoordinateConversions(v17, v18, *(_DWORD *)(v13 + 184), 0);
    LogicalToPhysicalDPIPoint(&v17, &v17, *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184), &v20);
  }
  else
  {
    v19 = GuessMonitorOverrideForCoordinateConversions(v17, v18, CurrentThreadDpiAwarenessContext, 0);
    LogicalToPhysicalDPIPoint(&v17, &v17, v23, &v19);
  }
  v2 = 1;
  v21 = 1;
LABEL_26:
  if ( v2 == 1 )
  {
    *a2 = v17;
    a2[1] = v18;
    v21 = 1;
    ms_exc.registration.TryLevel = -2;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit();
  return v2;
}
