/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01F9810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _GetAltTabInfo @ 0x1C01F4638 (_GetAltTabInfo.c)
 *     GetLogicalDpiFromMonitor @ 0x1C01F76F8 (GetLogicalDpiFromMonitor.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  SIZE_T v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v22; // rax
  __int64 v23; // r10
  INT LogicalDpiFromMonitor; // ebx
  INT v25; // r9d
  INT v26; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  __int128 v29; // [rsp+68h] [rbp-70h] BYREF
  INT a[4]; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+88h] [rbp-50h] BYREF

  v29 = 0LL;
  *(_OWORD *)a = 0LL;
  v31 = 0LL;
  v10 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      AltTabInfo = 0;
      goto LABEL_36;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 || (struct tagWND *)v14 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v12) )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v16 = (_BYTE *)MmUserProbeAddress;
    *v16 = *v16;
    v16[39] = v16[39];
    v17 = a5;
    if ( !a6 )
      v17 = 2LL * a5;
    ProbeForWrite(a4, v17, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      LODWORD(v29) = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)&v29, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v20);
      if ( v14 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
        {
          v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
          if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
          {
            v13 = *(_QWORD *)(v14 + 40);
            v11 = *(unsigned int *)(v13 + 288);
            if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*(_DWORD *)(v13 + 288) >> 8)) & 0x1FF) != 0 )
              goto LABEL_31;
            v12 = (v11 & 0xF) == 2 && (v11 & 0x20000000) != 0;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
              v10 = 0;
            if ( (_DWORD)v12 != v10 )
            {
LABEL_31:
              v22 = ValidateHmonitorNoRip(*(_QWORD *)(v13 + 256));
              if ( v22 )
              {
                GetLogicalDpiFromMonitor(v22, CurrentThreadDpiAwarenessContext);
                LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                            v23,
                                                            *(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL));
                v26 = v25;
                a[2] = EngMulDiv(a[2], v25, LogicalDpiFromMonitor);
                a[3] = EngMulDiv(a[3], v26, LogicalDpiFromMonitor);
              }
              TransformPointBetweenCoordinateSpaces(&v31, &v31, 0LL, v14);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = v29;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)a;
        *(_QWORD *)(a3 + 32) = v31;
      }
    }
    else
    {
      UserSetLastError(87LL, v18, v19);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v11, v13);
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return AltTabInfo;
}
