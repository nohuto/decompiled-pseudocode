/*
 * XREFs of Etw_ReportControllerHealthWithPortInfo @ 0x1C00479BC
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0075A40 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer @ 0x1C0048D28 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer.c)
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
  char v14; // al
  __int64 v15; // r8
  int v16; // [rsp+1A0h] [rbp-68h]
  char v17; // [rsp+1A4h] [rbp-64h]
  int v18; // [rsp+1A8h] [rbp-60h]
  int v19; // [rsp+1ACh] [rbp-5Ch]
  int v20; // [rsp+1B0h] [rbp-58h]
  int v21; // [rsp+1B4h] [rbp-54h]
  int v22; // [rsp+1B8h] [rbp-50h]
  int v23; // [rsp+1BCh] [rbp-4Ch]
  int v24; // [rsp+1C0h] [rbp-48h]
  int v25; // [rsp+210h] [rbp+8h]
  char v27; // [rsp+220h] [rbp+18h]

  v27 = a3;
  v5 = *(_DWORD **)(a2 + 88);
  result = 0xFFFFFFFFLL;
  v7 = 0;
  LOBYTE(v18) = -1;
  if ( v5 )
  {
    v24 = v5[20];
    v23 = v5[21];
    v22 = v5[24];
    v21 = v5[25];
    v20 = v5[26];
    v16 = v5[28];
  }
  else
  {
    LOBYTE(v24) = -1;
    LOBYTE(v23) = -1;
    LOBYTE(v22) = -1;
    LOBYTE(v21) = -1;
    LOBYTE(v20) = -1;
    LOBYTE(v16) = -1;
  }
  v9 = *(_QWORD *)(a2 + 96);
  if ( v9 )
    v19 = *(_DWORD *)(v9 + 20);
  else
    LOBYTE(v19) = -1;
  v10 = *(_QWORD *)(a2 + 128);
  if ( v10 )
  {
    v18 = *(_DWORD *)(v10 + 20);
    result = *(unsigned int *)(v10 + 16);
  }
  v17 = result;
  if ( a3 && a4 )
  {
    result = *a4;
    v25 = *a4;
  }
  else
  {
    LOBYTE(v25) = 0;
  }
  if ( a5 )
  {
    result = *(_QWORD *)(a2 + 152);
    v11 = 104LL * (unsigned int)(a3 - 1);
    v12 = *(_QWORD *)(result + 48);
    v7 = *(_BYTE *)(v11 + v12 + 92);
    v13 = *(_BYTE *)(v11 + v12 + 100);
  }
  else
  {
    v13 = 0;
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x20) != 0 )
  {
    v14 = v13;
    v15 = a2 + 180;
    return McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer(
             a2,
             a5,
             v15,
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
             a2 + 304,
             a2 + 309,
             a2 + 314,
             *(_QWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 464),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 536),
             *(_BYTE *)(a2 + 537),
             *(_DWORD *)(a2 + 540),
             *(_DWORD *)(a2 + 544),
             *(_DWORD *)(a2 + 572),
             *(_BYTE *)(a2 + 592),
             *(_QWORD *)(a2 + 336),
             *(_QWORD *)(a2 + 344),
             v24,
             v23,
             v22,
             v21,
             v20,
             v19,
             v18,
             v17,
             v16,
             *(_DWORD *)(a2 + 608),
             *(_DWORD *)(a2 + 476),
             *(_DWORD *)(a2 + 480),
             *(_DWORD *)(a2 + 484),
             *(_DWORD *)(a2 + 488),
             *(_DWORD *)(a2 + 492),
             *(_DWORD *)(a2 + 496),
             *(_DWORD *)(a2 + 500),
             64,
             v15,
             v27,
             v25,
             a5,
             v7,
             v14);
  }
  return result;
}
