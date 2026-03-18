/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C01482C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxGetComboBoxInfo @ 0x1C0148504 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ComboBoxInfo; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // ebx
  __int128 v18; // [rsp+40h] [rbp-98h] BYREF
  __int64 v19; // [rsp+50h] [rbp-88h]
  int v20[16]; // [rsp+70h] [rbp-68h] BYREF

  memset(v20, 0, sizeof(v20));
  v18 = 0LL;
  v19 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[63] = v9[63];
    v20[0] = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6, (int)v20);
    v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
    {
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        if ( (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v12) >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v15 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
        v16 = (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) == 2 && (v15 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v12) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v16 != v4 )
        {
LABEL_26:
          TransformRectBetweenCoordinateSpaces(&v20[5], &v20[5], 0LL, v6);
          TransformRectBetweenCoordinateSpaces(&v20[1], &v20[1], 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = *(_OWORD *)v20;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v20[4];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v20[8];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v20[12];
    }
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ComboBoxInfo;
}
