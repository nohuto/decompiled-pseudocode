/*
 * XREFs of Etw_ControllerRundown @ 0x1C0013888
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Etw_EnableCallback @ 0x1C0017570 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C0013970 (Etw_DeviceListRundown.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn_EtwWriteTransfer @ 0x1C004888C (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r15d
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // [rsp+128h] [rbp-B0h]
  int v12; // [rsp+130h] [rbp-A8h]
  int v13; // [rsp+138h] [rbp-A0h]
  int v14; // [rsp+140h] [rbp-98h]
  int v15; // [rsp+148h] [rbp-90h]
  int v16; // [rsp+150h] [rbp-88h]
  int v17; // [rsp+158h] [rbp-80h]
  int v18; // [rsp+160h] [rbp-78h]
  __int64 v19; // [rsp+170h] [rbp-68h]
  int v20; // [rsp+180h] [rbp-58h]
  int v21; // [rsp+184h] [rbp-54h]
  int v22; // [rsp+188h] [rbp-50h]
  int v23; // [rsp+18Ch] [rbp-4Ch]
  int v24; // [rsp+190h] [rbp-48h]
  int v25; // [rsp+1E8h] [rbp+10h]
  int v26; // [rsp+1F0h] [rbp+18h]
  int v27; // [rsp+1F8h] [rbp+20h]

  v2 = *(_DWORD **)(a2 + 88);
  LOBYTE(v3) = -1;
  if ( v2 )
  {
    v24 = v2[20];
    v23 = v2[21];
    v22 = v2[24];
    v21 = v2[25];
    v20 = v2[26];
    v25 = v2[28];
  }
  else
  {
    LOBYTE(v24) = -1;
    LOBYTE(v23) = -1;
    LOBYTE(v22) = -1;
    LOBYTE(v21) = -1;
    LOBYTE(v20) = -1;
    LOBYTE(v25) = -1;
  }
  v6 = *(_QWORD *)(a2 + 96);
  if ( v6 )
    v27 = *(_DWORD *)(v6 + 20);
  else
    LOBYTE(v27) = -1;
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7 )
  {
    v3 = *(_DWORD *)(v7 + 20);
    v26 = *(_DWORD *)(v7 + 16);
  }
  else
  {
    LOBYTE(v26) = -1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
  {
    v9 = *(unsigned __int8 *)(a2 + 592);
    v19 = a2 + 180;
    v18 = *(_DWORD *)(a2 + 500);
    v17 = *(_DWORD *)(a2 + 496);
    v16 = *(_DWORD *)(a2 + 492);
    v15 = *(_DWORD *)(a2 + 488);
    v14 = *(_DWORD *)(a2 + 484);
    v13 = *(_DWORD *)(a2 + 480);
    v12 = *(_DWORD *)(a2 + 476);
    v11 = *(_DWORD *)(a2 + 608);
    v10 = *(unsigned __int8 *)(a2 + 537);
    McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn_EtwWriteTransfer(
      v9,
      v10,
      a1,
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
      v10,
      *(_DWORD *)(a2 + 540),
      *(_DWORD *)(a2 + 544),
      *(_DWORD *)(a2 + 572),
      v9,
      *(_QWORD *)(a2 + 336),
      *(_QWORD *)(a2 + 344),
      v24,
      v23,
      v22,
      v21,
      v20,
      v27,
      v3,
      v26,
      v25,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      64,
      v19);
  }
  return Etw_DeviceListRundown(a1, a2);
}
