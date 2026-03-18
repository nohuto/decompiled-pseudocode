/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0145C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxGetComboBoxInfo @ 0x1C0145ED4 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  int ComboBoxInfo; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int128 v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h]
  _OWORD v22[4]; // [rsp+70h] [rbp-68h] BYREF

  memset(v22, 0, sizeof(v22));
  v20 = 0LL;
  v21 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    *((_QWORD *)&v20 + 1) = v8;
    HMLockObject(v8);
    if ( PsGetCurrentProcessWow64Process(v9) )
      v10 = 0LL;
    else
      v10 = 3LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[63] = v11[63];
    LODWORD(v22[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v8);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
      if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14) >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v17 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
        v18 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v17 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v14) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v18 != v4 )
        {
LABEL_26:
          TransformRectBetweenCoordinateSpaces((char *)&v22[1] + 4, (char *)&v22[1] + 4, 0LL, v8);
          TransformRectBetweenCoordinateSpaces((char *)v22 + 4, (char *)v22 + 4, 0LL, v8);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v22[0];
      *(_OWORD *)(a2 + 16) = v22[1];
      *(_OWORD *)(a2 + 32) = v22[2];
      *(_OWORD *)(a2 + 48) = v22[3];
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return ComboBoxInfo;
}
