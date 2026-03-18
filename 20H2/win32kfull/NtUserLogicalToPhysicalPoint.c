/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C00F0690
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00F0BF8 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  ULONG64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  _QWORD *v15; // rdx
  bool v17; // cf
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v18 = *v7;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0 )
      goto LABEL_12;
    v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    if ( (*(_BYTE *)(v8 + 224) & 0x20) != 0 )
      goto LABEL_12;
    v9 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
    if ( (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v8) >> 8)) & 0x1FF) != 0 )
      goto LABEL_18;
    v10 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) != 2 || (v11 = 1, (v10 & 0x20000000) == 0) )
      v11 = 0;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v10) & 0xF) != 2
      || (v17 = (W32GetCurrentThreadDpiAwarenessContext(v12) & 0x20000000) != 0, v13 = 1, !v17) )
    {
      v13 = 0;
    }
    if ( v11 == v13 )
    {
LABEL_12:
      v14 = DCEPtInRect(*(_QWORD *)(v6 + 40) + 88LL, v18);
      TransformPointBetweenCoordinateSpaces(&v18, &v18, 0LL, v6);
    }
    else
    {
LABEL_18:
      v19 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v19, &v18, v6, 0LL);
      v14 = DCEPtInRect(*(_QWORD *)(v6 + 40) + 88LL, v19);
    }
    if ( v14 )
    {
      v5 = MmUserProbeAddress;
      v15 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
      *a2 = v18;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
