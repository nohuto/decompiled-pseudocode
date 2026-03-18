/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0171CC8
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C013BFC0 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C016F050 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C016F650 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C016F70C (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C0171F00 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0172650 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  char *v7; // rsi
  __int16 *v8; // r14
  __int64 v9; // xmm1_8
  int v10; // edx
  unsigned int v11; // edi
  int v12; // ebx
  __int16 v13; // dx
  __int16 v14; // cx
  int v15; // eax
  __int16 v16; // ax
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  __int64 v21; // [rsp+30h] [rbp-1D8h]
  _OWORD v23[24]; // [rsp+40h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v23, 0, sizeof(v23));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1 + 88);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0));
  v6 = 0;
  if ( a3 )
  {
    v7 = (char *)v23 + 2;
    v8 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v6 )
      {
        v9 = *((_QWORD *)v23 + 3 * v6 - 1);
        *(_OWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x35C) = *(_OWORD *)((char *)&v23[-1] + 24 * v6 - 8);
        *(_QWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x36C) = v9;
      }
      v21 = v4 + 32LL * v6;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v21) )
        break;
      v11 = *((_DWORD *)v8 + 1);
      v12 = *(_DWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x364);
      *((_WORD *)v7 - 1) = -2;
      v13 = (v11 >> 15) & 1 | 8;
      if ( (v11 & 0x2000) == 0 )
        v13 = (v11 >> 15) & 1;
      v14 = v13 | 2;
      if ( (v11 & 0x4000) == 0 )
        v14 = v13;
      *(_WORD *)v7 = v14;
      v15 = RIMIDEBuildRawButtonsFromMouseInputStruct(v12, v21);
      *(_DWORD *)(v7 + 6) = v15;
      *((_WORD *)v7 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v12, v15, v21);
      v16 = 0;
      if ( (v11 & 0x1800) != 0 )
        v16 = *v8;
      v4 = a2;
      ++v6;
      *((_WORD *)v7 + 2) = v16;
      *(_DWORD *)(v7 + 10) = *((_DWORD *)v8 - 2);
      *(_DWORD *)(v7 + 14) = *((_DWORD *)v8 - 1);
      v17 = *((_DWORD *)v8 + 2);
      v8 += 16;
      *(_DWORD *)(v7 + 18) = v17;
      v7 += 24;
      if ( v6 >= a3 )
        goto LABEL_15;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 34, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_15:
    v19 = RIMIDEInjectMouseInput(a1, v23, a3);
    if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v18, 1, 35, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v19);
    }
  }
  return (unsigned int)v19;
}
