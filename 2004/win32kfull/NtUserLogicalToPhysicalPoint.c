/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C0108E00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00A3450 (DCEPtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  int v4; // edi
  _QWORD *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  BOOL v16; // ebx
  bool v18; // cf
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (unsigned __int64 *)MmUserProbeAddress;
    v19 = *v9;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) != 0 )
      goto LABEL_12;
    v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
    if ( (*(_BYTE *)(v10 + 224) & 0x20) != 0 )
      goto LABEL_12;
    v11 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v10) >> 8)) & 0x1FF) != 0 )
      goto LABEL_18;
    v12 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v13 = 1, (v12 & 0x20000000) == 0) )
      v13 = 0;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) != 2
      || (v18 = (W32GetCurrentThreadDpiAwarenessContext(v14) & 0x20000000) != 0, v15 = 1, !v18) )
    {
      v15 = 0;
    }
    if ( v13 == v15 )
    {
LABEL_12:
      v16 = DCEPtInRect((_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL), v19);
      TransformPointBetweenCoordinateSpaces(&v19, &v19, 0LL, v7);
    }
    else
    {
LABEL_18:
      v20 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v20, &v19, v7, 0LL);
      v16 = DCEPtInRect((_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL), v20);
    }
    if ( v16 )
    {
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_QWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v19;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return v4;
}
