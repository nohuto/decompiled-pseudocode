/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C016B978
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C0136320 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0168D00 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C0169300 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01693BC (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C016BBB0 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016C300 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebp
  char *v10; // rsi
  __int16 *v11; // r14
  __int64 v12; // xmm1_8
  int v13; // edx
  unsigned int v14; // edi
  int v15; // ebx
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // eax
  __int16 v19; // ax
  int v20; // eax
  int v21; // edx
  int v22; // ebx
  __int64 v24; // [rsp+30h] [rbp-1D8h]
  _OWORD v26[24]; // [rsp+40h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v26, 0, sizeof(v26));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1 + 88, v6, v7, v8);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v9 = 0;
  if ( a3 )
  {
    v10 = (char *)v26 + 2;
    v11 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v9 )
      {
        v12 = *((_QWORD *)v26 + 3 * v9 - 1);
        *(_OWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x35C) = *(_OWORD *)((char *)&v26[-1] + 24 * v9 - 8);
        *(_QWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x36C) = v12;
      }
      v24 = v4 + 32LL * v9;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v24) )
        break;
      v14 = *((_DWORD *)v11 + 1);
      v15 = *(_DWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x364);
      *((_WORD *)v10 - 1) = -2;
      v16 = (v14 >> 15) & 1 | 8;
      if ( (v14 & 0x2000) == 0 )
        v16 = (v14 >> 15) & 1;
      v17 = v16 | 2;
      if ( (v14 & 0x4000) == 0 )
        v17 = v16;
      *(_WORD *)v10 = v17;
      v18 = RIMIDEBuildRawButtonsFromMouseInputStruct(v15, v24);
      *(_DWORD *)(v10 + 6) = v18;
      *((_WORD *)v10 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v15, v18, v24);
      v19 = 0;
      if ( (v14 & 0x1800) != 0 )
        v19 = *v11;
      v4 = a2;
      ++v9;
      *((_WORD *)v10 + 2) = v19;
      *(_DWORD *)(v10 + 10) = *((_DWORD *)v11 - 2);
      *(_DWORD *)(v10 + 14) = *((_DWORD *)v11 - 1);
      v20 = *((_DWORD *)v11 + 2);
      v11 += 16;
      *(_DWORD *)(v10 + 18) = v20;
      v10 += 24;
      if ( v9 >= a3 )
        goto LABEL_15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 34, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v22 = RIMIDEInjectMouseInput(a1, v26, a3);
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v21, 1, 35, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v22);
    }
  }
  return (unsigned int)v22;
}
