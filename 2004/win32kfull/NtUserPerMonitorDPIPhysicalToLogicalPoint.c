/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0200B70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00A3450 (DCEPtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v9; // esi
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v11 = 0LL;
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v11 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    v9 = CurrentThreadDpiAwarenessContext;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v12 = GuessMonitorOverrideForCoordinateConversions(v11, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 1LL);
      PhysicalToLogicalDPIPoint(&v11, &v11, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), &v12);
      LODWORD(a1) = DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v11);
    }
    else
    {
      v13 = GuessMonitorOverrideForCoordinateConversions(v11, CurrentThreadDpiAwarenessContext, 1LL);
      PhysicalToLogicalDPIPoint(&v11, &v11, v9, &v13);
      LODWORD(a1) = 1;
      v6 = v11;
    }
    if ( (_DWORD)a1 )
    {
      *a2 = v6;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return (int)a1;
}
