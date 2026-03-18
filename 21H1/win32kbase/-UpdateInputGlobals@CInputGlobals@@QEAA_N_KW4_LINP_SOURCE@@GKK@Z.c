/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C005AF90
 * Callers:
 *     NtMITUpdateInputGlobals @ 0x1C00434E0 (NtMITUpdateInputGlobals.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0065004 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AD170 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ApiSetEditionKeepMachineUp @ 0x1C005B1E4 (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C005B2C0 (EtwTraceUserIsActive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005B39C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C005B418 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C005B4E4 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C005B848 (ApiSetTraceLoggingUserIsActive.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // edi
  __int16 v24; // bx
  __int16 v25; // ax
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v6 = a6;
  v8 = 11;
  if ( a3 != 17 )
    v8 = a3;
  v11 = 0;
  v27 = v8;
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
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    a6 = 0;
    v26 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v26) )
      ApiSetTraceLoggingUserIsActive(a6, v26);
    if ( (v6 & 0x10) != 0 )
      return 1;
    v16 = a3 - 1;
    if ( v16 )
    {
      v18 = v16 - 2;
      if ( v18 )
      {
        v20 = v18 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 6;
            if ( v22 )
            {
              v23 = v22 - 2;
              if ( v23 )
              {
                if ( v23 == 4 )
                  v11 = v15 != 0 ? 0x4000 : 256;
                goto LABEL_22;
              }
              v24 = 8;
              v25 = v15 != 0 ? 0x1FF8 : 0;
            }
            else
            {
              v24 = 4;
              v25 = v15 != 0 ? 0xFFC : 0;
            }
            v11 = v25 + v24;
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
    ApiSetEditionKeepMachineUp((unsigned int)a2, v27, a5, v6);
    return 1;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
