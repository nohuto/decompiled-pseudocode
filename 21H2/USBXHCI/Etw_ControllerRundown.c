/*
 * XREFs of Etw_ControllerRundown @ 0x1C0014964
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Etw_EnableCallback @ 0x1C0018870 (Etw_EnableCallback.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x1C0014A50 (Etw_DeviceListRundown.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x1C001A5E8 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  int v9; // [rsp+150h] [rbp-68h]
  int v10; // [rsp+154h] [rbp-64h]
  int v11; // [rsp+158h] [rbp-60h]
  int v12; // [rsp+15Ch] [rbp-5Ch]
  int v13; // [rsp+160h] [rbp-58h]
  int v14; // [rsp+1C8h] [rbp+10h]
  int v15; // [rsp+1D0h] [rbp+18h]
  int v16; // [rsp+1D8h] [rbp+20h]

  v2 = *(_DWORD **)(a2 + 88);
  LOBYTE(v3) = -1;
  if ( v2 )
  {
    v13 = v2[21];
    v12 = v2[22];
    v11 = v2[25];
    v10 = v2[26];
    v9 = v2[27];
    v14 = v2[29];
  }
  else
  {
    LOBYTE(v13) = -1;
    LOBYTE(v12) = -1;
    LOBYTE(v11) = -1;
    LOBYTE(v10) = -1;
    LOBYTE(v9) = -1;
    LOBYTE(v14) = -1;
  }
  v5 = *(_QWORD *)(a2 + 96);
  if ( v5 )
    v16 = *(_DWORD *)(v5 + 20);
  else
    LOBYTE(v16) = -1;
  v6 = *(_QWORD *)(a2 + 128);
  if ( v6 )
  {
    v3 = *(_DWORD *)(v6 + 20);
    v15 = *(_DWORD *)(v6 + 16);
  }
  else
  {
    LOBYTE(v15) = -1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
      a2 + 472,
      *(unsigned __int8 *)(a2 + 608),
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
      *(_BYTE *)(a2 + 552),
      *(_BYTE *)(a2 + 553),
      *(_DWORD *)(a2 + 556),
      *(_DWORD *)(a2 + 560),
      *(_DWORD *)(a2 + 588),
      *(_BYTE *)(a2 + 608),
      *(_QWORD *)(a2 + 336),
      *(_QWORD *)(a2 + 344),
      v13,
      v12,
      v11,
      v10,
      v9,
      v16,
      v3,
      v15,
      v14,
      *(_DWORD *)(a2 + 624),
      44,
      a2 + 472,
      64,
      a2 + 180);
  return Etw_DeviceListRundown(a1, a2);
}
