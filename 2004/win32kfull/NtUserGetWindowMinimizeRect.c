/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C011A7A0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ParkIcon @ 0x1C005B578 (ParkIcon.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  _DWORD *Prop; // rax
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // ebx
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF

  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v9 = (_QWORD *)v5;
  if ( v5 && (v7 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v23;
    *((_QWORD *)&v23 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v9) )
      {
        v12 = xxxSendMinRectMessages(v9, &v25);
      }
      else
      {
        Prop = (_DWORD *)GetProp((__int64)v9, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v18 = Prop[8];
          LODWORD(v25) = v18;
          v19 = Prop[9];
          DWORD1(v25) = v19;
        }
        else
        {
          ParkIcon((__int64)v9, (int *)&v25);
          v19 = DWORD1(v25);
          v18 = v25;
        }
        DWORD2(v25) = v18 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v25) = v19 + *(_DWORD *)(gpsi + 2128LL);
        v12 = 1;
      }
      v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
      if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
      {
        v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(v9[5] + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14) >> 8)) & 0x1FF) != 0 )
            goto LABEL_30;
          v21 = *(unsigned int *)(v9[5] + 288LL);
          v22 = (*(_DWORD *)(v9[5] + 288LL) & 0xF) == 2 && (v21 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v21) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v14) & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v22 != v4 )
LABEL_30:
            TransformRectBetweenCoordinateSpaces(&v25, &v25, 0LL, v9);
        }
      }
      if ( v12 )
      {
        v14 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v25;
      }
    }
    else
    {
      v12 = 0;
      UserSetLastError(87LL, v10, v11);
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v12 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v12;
}
