/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0061710
 * Callers:
 *     NtMITUpdateInputGlobals @ 0x1C0060BC0 (NtMITUpdateInputGlobals.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017AA6C (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01A7410 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 * Callees:
 *     ApiSetEditionKeepMachineUp @ 0x1C0061964 (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C0061A40 (EtwTraceUserIsActive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0061B1C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C0061B98 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0061C64 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C0061F48 (ApiSetTraceLoggingUserIsActive.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r14d
  unsigned int v8; // r13d
  unsigned __int16 v11; // bx
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // r9d
  int v15; // esi
  unsigned int v16; // edi
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned int v25; // edi
  unsigned int v26; // edi
  __int16 v27; // bx
  __int16 v28; // ax
  __int64 v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+18h]

  v6 = a6;
  v8 = 11;
  if ( a3 != 17 )
    v8 = a3;
  v11 = 0;
  v30 = v8;
  if ( (a6 & 0x20) != 0 )
  {
    v12 = KnownInputTypeFromLinpSource(v8, a2, a6, 4LL);
    v6 |= v14;
    if ( (v12 & *(_DWORD *)(a1 + 104)) == 0 )
      v6 = v13;
    if ( (v12 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 |= 2u;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    *(_DWORD *)(a1 + 80) = v8;
    v15 = v6 & 8;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = v15 != 0;
    if ( v8 != 1 )
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFBF);
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, 0, 0) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    a6 = 0;
    v29 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v29) )
      ApiSetTraceLoggingUserIsActive(a6, v29);
    if ( (v6 & 0x10) != 0 )
      return 1;
    v16 = a3 - 1;
    if ( v16 )
    {
      v18 = v16 - 2;
      if ( v18 )
      {
        v23 = v18 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 6;
            if ( v25 )
            {
              v26 = v25 - 2;
              if ( v26 )
              {
                if ( v26 == 4 )
                  v11 = v15 != 0 ? 0x4000 : 256;
                goto LABEL_22;
              }
              v27 = 8;
              v28 = v15 != 0 ? 0x1FF8 : 0;
            }
            else
            {
              v27 = 4;
              v28 = v15 != 0 ? 0xFFC : 0;
            }
            v11 = v28 + v27;
          }
          else
          {
            v11 = 32;
          }
        }
        else
        {
          v11 = 16;
        }
      }
      else
      {
        v11 = v15 != 0 ? 2048 : 2;
      }
    }
    else if ( (v6 & 0x40) != 0 )
    {
      v11 = 512;
    }
    else if ( (v6 & 8) != 0 )
    {
      v11 = 1024;
    }
    else
    {
      v11 = 1;
    }
LABEL_22:
    CitpLastInputUpdate(v11, a2);
    ApiSetEditionKeepMachineUp((unsigned int)a2, v30, a5, v6);
    return 1;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
