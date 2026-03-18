/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C016A774
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C016B090 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // r10d
  __int64 v10; // kr00_8
  int v11; // edx

  v3 = *a3;
  if ( *a3 == 2 && (unsigned int)a2 < 0xA || v3 == 3 && (unsigned int)a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        2u,
        1u,
        0x14u,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        *a3,
        a2);
    return 0;
  }
  LOBYTE(a2) = 4;
  a1[1] = a3[10];
  a1[4] = a3[11];
  v6 = a3[5];
  if ( (v6 & 4) != 0 )
    a1[7] = 1;
  if ( (v6 & 2) != 0 )
    a1[10] = 1;
  if ( v3 == 3 )
  {
    v7 = a3[27];
    if ( (v7 & 1) != 0 )
      a1[13] = a3[28];
    if ( (v7 & 4) != 0 )
      a1[25] = a3[30];
    if ( (v7 & 8) != 0 )
      a1[28] = a3[31];
    if ( (v7 & 2) != 0 )
      a1[31] = a3[29];
    v8 = a3[26];
    if ( (v8 & 1) != 0 )
      a1[16] = 1;
    if ( (v8 & 2) != 0 )
      a1[19] = 1;
    if ( (v8 & 4) != 0 )
      a1[22] = 1;
    return 1;
  }
  if ( v3 == 2 )
  {
    v9 = a3[27];
    if ( (v9 & 4) != 0 )
      a1[13] = a3[37];
    if ( (v9 & 1) != 0 )
    {
      v10 = a3[30] - a3[28];
      a1[19] = (HIDWORD(v10) ^ v10) - HIDWORD(v10);
      a1[22] = abs32(a3[31] - a3[29]);
    }
    a1[25] = a3[3];
    if ( (v9 & 2) != 0 )
      a1[28] = a3[36];
    a1[16] = 1;
    return 1;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a1);
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v11, 1, 21, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v3);
  }
  return v5;
}
