/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C0174A20
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01665DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A200 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0172F64 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rbx
  __int64 **v13; // rcx

  v4 = *(_DWORD *)(a2 + 184);
  v6 = a1;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  LOBYTE(v7) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v7 && *(_DWORD *)(a2 + 924) || (_BYTE)v7 == 1 && *(_DWORD *)(a2 + 700) )
  {
    if ( !*(_BYTE *)(v6 + 584) )
    {
      if ( (_BYTE)v7 )
      {
        if ( *(_DWORD *)(a2 + 696) )
LABEL_13:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      }
      else if ( *(_DWORD *)(a2 + 920) )
      {
        goto LABEL_13;
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2, a3, a4);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
      *(_DWORD *)(a2 + 184) |= 0x200u;
      v12 = (__int64 *)(a2 + 104);
      if ( (__int64 *)*v12 != v12 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      v7 = v6 + 592;
      v13 = *(__int64 ***)(v6 + 600);
      if ( *v13 != (__int64 *)(v6 + 592) )
        __fastfail(3u);
      *v12 = v7;
      v12[1] = (__int64)v13;
      *v13 = v12;
      *(_QWORD *)(v6 + 600) = v12;
      return v7;
    }
    if ( (_BYTE)v7 )
    {
      if ( !*(_DWORD *)(a2 + 696) )
      {
        LOBYTE(v7) = InputTraceLogging::RIM::DropInput(a2);
        *(_DWORD *)(a2 + 700) = 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 920) )
    {
      LOBYTE(v7) = InputTraceLogging::RIM::DropInput(a2);
      *(_DWORD *)(a2 + 924) = 0;
    }
  }
  return v7;
}
