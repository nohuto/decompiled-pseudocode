/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01534F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00A3450 (DCEPtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r9
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v17 = 0;
      goto LABEL_20;
    }
  }
  v17 = 0;
  v19 = 0LL;
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_QWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v19 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
  v9 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 0x20) != 0
      || (v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
          (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)(v10 >> 8)) & 0x1FF) == 0)
      && ((v10 & 0xF) != 2 || (v10 & 0x20000000) == 0 ? (v11 = 0) : (v11 = 1),
          (v9 & 0xF) != 2 || (v9 & 0x20000000) == 0 ? (v12 = 0) : (v12 = 1),
          v11 == v12) )
    {
      v13 = v19;
    }
    else
    {
      v20 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v20, &v19, a1, 0LL);
      v13 = v20;
    }
    if ( !DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v13) )
      goto LABEL_18;
    v21 = GuessMonitorOverrideForCoordinateConversions(v19, *(unsigned int *)(v6 + 288), 0LL);
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v15 = &v21;
  }
  else
  {
    v18 = GuessMonitorOverrideForCoordinateConversions(v19, CurrentThreadDpiAwarenessContext, 0LL);
    v15 = &v18;
    v14 = v9;
  }
  LogicalToPhysicalDPIPoint(&v19, &v19, v14, v15);
  v17 = 1;
LABEL_18:
  if ( v17 == 1 )
  {
    *a2 = v19;
    v17 = 1;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v17;
}
