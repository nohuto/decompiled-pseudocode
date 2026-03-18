/*
 * XREFs of RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A200
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0174A20 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMTransferInjectionDeviceDataFifoToDataBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rbx
  char v6; // al
  __int64 result; // rax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx

  v4 = *(_DWORD *)(a2 + 184);
  v5 = a2;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = *(_BYTE *)(v5 + 48);
  if ( !v6 )
  {
    result = *(unsigned int *)(v5 + 924);
    if ( (unsigned int)result <= 0x10 )
    {
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      LODWORD(result) = 16;
    }
    v8 = 16 - *(_DWORD *)(v5 + 920);
    if ( v8 >= (unsigned int)result )
      v8 = result;
    if ( v8 )
    {
      v9 = 0;
      do
      {
        ++v9;
        v10 = 3LL * ((*(_BYTE *)(v5 + 928) - *(_BYTE *)(v5 + 924) + 1) & 0xF);
        v11 = 3LL * *(unsigned int *)(v5 + 920);
        *(_OWORD *)(v5 + 8 * v11 + 476) = *(_OWORD *)(v5
                                                    + 24LL * ((*(_BYTE *)(v5 + 928) - *(_BYTE *)(v5 + 924) + 1) & 0xF)
                                                    + 932);
        *(_QWORD *)(v5 + 8 * v11 + 492) = *(_QWORD *)(v5 + 8 * v10 + 948);
        LODWORD(v11) = *(_DWORD *)(v5 + 920);
        --*(_DWORD *)(v5 + 924);
        v12 = v11 + 1;
        *(_DWORD *)(v5 + 920) = v12;
      }
      while ( v9 < v8 );
      *(_DWORD *)(v5 + 256) = 0;
      result = v12;
      v13 = 24LL * v12;
LABEL_27:
      *(_QWORD *)(v5 + 264) = v13;
      return result;
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v14 = 62;
    goto LABEL_30;
  }
  if ( v6 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  result = *(unsigned int *)(v5 + 700);
  if ( (unsigned int)result <= 0x10 )
  {
    if ( !(_DWORD)result )
      return result;
  }
  else
  {
    LODWORD(result) = 16;
  }
  v15 = 16 - *(_DWORD *)(v5 + 696);
  if ( v15 >= (unsigned int)result )
    v15 = result;
  if ( v15 )
  {
    v16 = 0;
    do
    {
      ++v16;
      v17 = 3 * (((*(_BYTE *)(v5 + 704) - *(_BYTE *)(v5 + 700) + 1) & 0xF) + 59LL);
      v18 = 3 * (*(unsigned int *)(v5 + 696) + 42LL);
      *(_QWORD *)(v5 + 4 * v18) = *(_QWORD *)(v5
                                            + 12 * (((*(_BYTE *)(v5 + 704) - *(_BYTE *)(v5 + 700) + 1) & 0xF) + 59LL));
      *(_DWORD *)(v5 + 4 * v18 + 8) = *(_DWORD *)(v5 + 4 * v17 + 8);
      LODWORD(v18) = *(_DWORD *)(v5 + 696);
      --*(_DWORD *)(v5 + 700);
      v19 = v18 + 1;
      *(_DWORD *)(v5 + 696) = v19;
    }
    while ( v16 < v15 );
    *(_DWORD *)(v5 + 256) = 0;
    result = v19;
    v13 = 12LL * v19;
    goto LABEL_27;
  }
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 63;
LABEL_30:
    LOBYTE(a2) = 4;
    return WPP_RECORDER_SF_q((_DWORD)gRimLog, a2, 1, v14, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v5);
  }
  return result;
}
