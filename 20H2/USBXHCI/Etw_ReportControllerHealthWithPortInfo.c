/*
 * XREFs of Etw_ReportControllerHealthWithPortInfo @ 0x1C0048EBC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_DetectPortInComplianceMode @ 0x1C001B0A0 (RootHub_DetectPortInComplianceMode.c)
 *     RootHub_DetectPortInInactiveState @ 0x1C001B1D0 (RootHub_DetectPortInInactiveState.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0076F10 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnnqqttt_EtwWriteTransfer @ 0x1C001B6E8 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnnqqttt_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ReportControllerHealthWithPortInfo(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        unsigned __int8 a5)
{
  _DWORD *v5; // rcx
  __int64 result; // rax
  char v7; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r8
  int v14; // [rsp+180h] [rbp-68h]
  char v15; // [rsp+184h] [rbp-64h]
  int v16; // [rsp+188h] [rbp-60h]
  int v17; // [rsp+18Ch] [rbp-5Ch]
  int v18; // [rsp+190h] [rbp-58h]
  int v19; // [rsp+194h] [rbp-54h]
  int v20; // [rsp+198h] [rbp-50h]
  int v21; // [rsp+19Ch] [rbp-4Ch]
  int v22; // [rsp+1A0h] [rbp-48h]
  int v23; // [rsp+1F0h] [rbp+8h]
  char v25; // [rsp+200h] [rbp+18h]

  v25 = a3;
  v5 = *(_DWORD **)(a2 + 88);
  result = 0xFFFFFFFFLL;
  v7 = 0;
  LOBYTE(v16) = -1;
  if ( v5 )
  {
    v22 = v5[20];
    v21 = v5[21];
    v20 = v5[24];
    v19 = v5[25];
    v18 = v5[26];
    v14 = v5[28];
  }
  else
  {
    LOBYTE(v22) = -1;
    LOBYTE(v21) = -1;
    LOBYTE(v20) = -1;
    LOBYTE(v19) = -1;
    LOBYTE(v18) = -1;
    LOBYTE(v14) = -1;
  }
  v9 = *(_QWORD *)(a2 + 96);
  if ( v9 )
    v17 = *(_DWORD *)(v9 + 20);
  else
    LOBYTE(v17) = -1;
  v10 = *(_QWORD *)(a2 + 128);
  if ( v10 )
  {
    v16 = *(_DWORD *)(v10 + 20);
    result = *(unsigned int *)(v10 + 16);
  }
  v15 = result;
  if ( a3 && a4 )
  {
    result = *a4;
    v23 = *a4;
  }
  else
  {
    LOBYTE(v23) = 0;
  }
  if ( a5 )
  {
    result = *(_QWORD *)(a2 + 152);
    v11 = 112LL * (unsigned int)(a3 - 1);
    v12 = *(_QWORD *)(result + 48);
    v7 = *(_BYTE *)(v11 + v12 + 96);
    v13 = *(_BYTE *)(v11 + v12 + 104);
  }
  else
  {
    v13 = 0;
  }
  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x2000) != 0 )
    return McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnnqqttt_EtwWriteTransfer(
             a2,
             a5,
             a2 + 180,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 244),
             *(_BYTE *)(a2 + 320),
             *(_BYTE *)(a2 + 321),
             *(_DWORD *)(a2 + 260),
             *(_WORD *)(a2 + 264),
             *(_WORD *)(a2 + 268),
             *(_WORD *)(a2 + 248),
             *(_WORD *)(a2 + 252),
             *(_BYTE *)(a2 + 256),
             (const char *)(a2 + 304),
             (const char *)(a2 + 309),
             (const char *)(a2 + 314),
             *(_QWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 464),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 552),
             *(_BYTE *)(a2 + 553),
             *(_DWORD *)(a2 + 556),
             *(_DWORD *)(a2 + 560),
             *(_DWORD *)(a2 + 588),
             *(_BYTE *)(a2 + 608),
             *(_QWORD *)(a2 + 336),
             *(_QWORD *)(a2 + 344),
             v22,
             v21,
             v20,
             v19,
             v18,
             v17,
             v16,
             v15,
             v14,
             *(_DWORD *)(a2 + 624),
             44,
             a2 + 472,
             64,
             a2 + 180,
             v25,
             v23,
             a5,
             v7,
             v13);
  return result;
}
