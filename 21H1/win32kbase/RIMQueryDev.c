/*
 * XREFs of RIMQueryDev @ 0x1C0059780
 * Callers:
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0161190 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     RIMGetKbdExId @ 0x1C005678C (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00568D8 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056F80 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG *v4; // rbx
  NTSTATUS v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 48);
  v14 = 0LL;
  v4 = (ULONG *)(a1 + 32 * (v2 + 4));
  if ( (_BYTE)v2 == 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v5 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         v4[2],
         0LL,
         0,
         (PVOID)(a2 + v4[3]),
         v4[4]);
  *(_DWORD *)(a2 + 292) = v5;
  v7 = v5;
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_qd((_DWORD)gRimLog, v6, 1, 20, (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids, a2, v5);
  }
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224), &v14) < 0 )
    {
      v10 = *(unsigned __int8 *)(a2 + 464);
      v11 = *(unsigned __int8 *)(a2 + 465);
      *(_DWORD *)(a2 + 492) = v10;
      *(_DWORD *)(a2 + 496) = v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v11;
        LODWORD(v12) = v10;
        WPP_RECORDER_SF_qDD(
          (__int64)gRimLog,
          2u,
          1u,
          0x16u,
          (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids,
          a2,
          v12,
          v13);
      }
    }
    else
    {
      v9 = v14;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          (_DWORD)gRimLog,
          *(unsigned __int8 *)(a2 + 464),
          1,
          21,
          (__int64)&WPP_5d2ce3a5248638c158e1566558bddbc6_Traceguids,
          *(_BYTE *)(a2 + 464),
          *(_BYTE *)(a2 + 465),
          v14,
          SBYTE4(v14));
      *(_QWORD *)(a2 + 492) = v9;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v7;
}
