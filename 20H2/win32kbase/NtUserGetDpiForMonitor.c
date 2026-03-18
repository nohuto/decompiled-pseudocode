/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0032440
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C00318B0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     EngMulDiv @ 0x1C0032350 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     UserSetLastStatus @ 0x1C01CBFBC (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbx
  int v11; // r15d
  int CurrentThreadDpiAwarenessContext; // ecx
  unsigned __int16 v13; // cx
  _DWORD *v14; // rdx
  ULONG64 v15; // rcx
  _DWORD *v16; // rdx
  INT v18; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  INT v28; // edx
  INT v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  INT v34; // edx
  INT v35; // ebx
  INT v36; // eax
  INT v37[28]; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0;
  v7 = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = HMValidateSharedHandle(a1);
  v9 = v8;
  if ( !v8 || (v10 = *(_QWORD *)(v8 + 232)) == 0 )
  {
    v11 = 0;
    UserSetLastError(6LL);
    goto LABEL_15;
  }
  if ( a2 )
  {
    v18 = 96;
    memset(v37, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v10, (__int64)v37);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v11 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_15;
    }
    v11 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = v37[10];
        v7 = v37[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v28 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v25, v24, v26, v27) + 284);
          v18 = v28;
        }
        else
        {
          v28 = 96;
        }
        v29 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL);
        v6 = EngMulDiv(v37[10], v28, v29);
        v7 = EngMulDiv(v37[11], v18, v29);
      }
      if ( (v37[23] & 1) != 0 || (v37[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v11 = 0;
      }
      goto LABEL_24;
    }
    if ( a2 == 1 )
    {
      if ( !v37[14] || (v37[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v37[14], 96, 100);
        v7 = EngMulDiv(v37[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v34 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v31, v30, v32, v33) + 284);
        v18 = v34;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_24;
        v34 = 96;
      }
      v35 = *(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 64LL);
      v6 = EngMulDiv(v6, v34, v35);
      v7 = EngMulDiv(v7, v18, v35);
    }
LABEL_24:
    if ( SLOBYTE(v37[23]) < 0 )
    {
      v36 = v7;
      v7 = v6;
      v6 = v36;
    }
    goto LABEL_10;
  }
  v11 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v13 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 68LL);
    else
      v13 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
    v6 = v13;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v21, v20, v22, v23) + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_10:
  v14 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *v14;
  v15 = MmUserProbeAddress;
  v16 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = *v16;
  *a3 = v6;
  *a4 = v7;
LABEL_15:
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}
