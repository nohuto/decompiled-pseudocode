/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C011B570
 * Callers:
 *     <none>
 * Callees:
 *     ParkIcon @ 0x1C001893C (ParkIcon.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  _DWORD *Prop; // rax
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebx
  __int64 v19; // rcx
  int v20; // ebx
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v7 = (_QWORD *)v5;
  if ( v5 && (v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v21;
    *((_QWORD *)&v21 + 1) = v5;
    HMLockObject(v5);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v7) )
      {
        v10 = xxxSendMinRectMessages(v7, &v23);
      }
      else
      {
        Prop = (_DWORD *)GetProp((__int64)v7, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
        if ( Prop && (Prop[12] & 0x20) != 0 )
        {
          v16 = Prop[8];
          LODWORD(v23) = v16;
          v17 = Prop[9];
          DWORD1(v23) = v17;
        }
        else
        {
          ParkIcon((__int64)v7, (int *)&v23);
          v17 = DWORD1(v23);
          v16 = v23;
        }
        DWORD2(v23) = v16 + *(_DWORD *)(gpsi + 2124LL);
        HIDWORD(v23) = v17 + *(_DWORD *)(gpsi + 2128LL);
        v10 = 1;
      }
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
        {
          v18 = *(_DWORD *)(v7[5] + 288LL);
          if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v12) >> 8)) & 0x1FF) != 0 )
            goto LABEL_30;
          v19 = *(unsigned int *)(v7[5] + 288LL);
          v20 = (*(_DWORD *)(v7[5] + 288LL) & 0xF) == 2 && (v19 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v19) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v12) & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v20 != v4 )
LABEL_30:
            TransformRectBetweenCoordinateSpaces(&v23, &v23, 0LL, v7);
        }
      }
      if ( v10 )
      {
        v12 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v23;
      }
    }
    else
    {
      v10 = 0;
      UserSetLastError(87LL, v8, v9);
    }
    ThreadUnlock1(v12, v11, v13);
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v10;
}
