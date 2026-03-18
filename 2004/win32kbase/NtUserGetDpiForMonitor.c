/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0078AB0
 * Callers:
 *     <none>
 * Callees:
 *     EngMulDiv @ 0x1C0011F10 (EngMulDiv.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003E070 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C0078CE8 (HMValidateSharedHandle.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     UserSetLastStatus @ 0x1C01CE33C (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int CurrentThreadDpiAwarenessContext; // ecx
  unsigned __int16 v17; // cx
  _DWORD *v18; // rdx
  ULONG64 v19; // rcx
  _DWORD *v20; // rdx
  INT v22; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  INT v30; // edx
  INT v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  INT v35; // edx
  INT v36; // ebx
  INT v37; // eax
  INT v38[28]; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0;
  v7 = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = HMValidateSharedHandle(a1);
  v11 = v8;
  if ( !v8 || (v12 = *(_QWORD *)(v8 + 232)) == 0 )
  {
    v13 = 0;
    UserSetLastError(6LL);
    goto LABEL_15;
  }
  if ( a2 )
  {
    v22 = 96;
    memset(v38, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v12, (__int64)v38);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v13 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_15;
    }
    v13 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24) & 0xF) == 2 )
      {
        v6 = v38[10];
        v7 = v38[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v27, v26) & 0xF) == 1 )
        {
          v30 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v29) + 284);
          v22 = v30;
        }
        else
        {
          v30 = 96;
        }
        v31 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 64LL);
        v6 = EngMulDiv(v38[10], v30, v31);
        v7 = EngMulDiv(v38[11], v22, v31);
      }
      if ( (v38[23] & 1) != 0 || (v38[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL);
        v13 = 0;
      }
      goto LABEL_24;
    }
    if ( a2 == 1 )
    {
      v32 = (unsigned int)v38[14];
      if ( !v38[14] || (v38[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v38[14], 96, 100);
        v7 = EngMulDiv(v38[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v24) & 0xF) == 1 )
      {
        v35 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v34) + 284);
        v22 = v35;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v33) & 0xF) == 2 )
          goto LABEL_24;
        v35 = 96;
      }
      v36 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 64LL);
      v6 = EngMulDiv(v6, v35, v36);
      v7 = EngMulDiv(v7, v22, v36);
    }
LABEL_24:
    if ( SLOBYTE(v38[23]) < 0 )
    {
      v37 = v7;
      v7 = v6;
      v6 = v37;
    }
    goto LABEL_10;
  }
  v13 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9) & 0xF) == 2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v17 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 68LL);
    else
      v17 = *(_WORD *)(*(_QWORD *)(v11 + 40) + 64LL);
    v6 = v17;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14) & 0xF) == 1 )
  {
    v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v28) + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_10:
  v18 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = *v18;
  v19 = MmUserProbeAddress;
  v20 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  *v20 = *v20;
  *a3 = v6;
  *a4 = v7;
LABEL_15:
  UserSessionSwitchLeaveCrit(v19);
  return v13;
}
