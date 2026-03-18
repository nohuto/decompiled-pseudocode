/*
 * XREFs of RIMQueryDev @ 0x1C0075350
 * Callers:
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01588E0 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C006EF90 (WPP_RECORDER_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C0075488 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0077B88 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01396B4 (WPP_RECORDER_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  ULONG *v6; // rbx
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx

  v4 = *(unsigned __int8 *)(a2 + 48);
  v6 = (ULONG *)(a1 + 32 * (v4 + 4));
  if ( (_BYTE)v4 == 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         v6[2],
         0LL,
         0,
         (PVOID)(a2 + v6[3]),
         v6[4]);
  *(_DWORD *)(a2 + 292) = v7;
  v9 = v7;
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_qd((_DWORD)gRimLog, v8, 1, 20, (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids, a2, v7);
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v12 = *(unsigned __int8 *)(a2 + 464);
      v13 = *(unsigned __int8 *)(a2 + 465);
      *(_DWORD *)(a2 + 492) = v12;
      *(_DWORD *)(a2 + 496) = v13;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_qDD(
          (_DWORD)gRimLog,
          v11,
          1,
          22,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          a2,
          v12,
          v13);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          (_DWORD)gRimLog,
          *(unsigned __int8 *)(a2 + 464),
          1,
          21,
          (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
          *(_BYTE *)(a2 + 464),
          *(_BYTE *)(a2 + 465),
          0,
          0);
      *(_QWORD *)(a2 + 492) = 0LL;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v9;
}
