/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1C017CB50
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C0172AB0 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C017B6C4 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 **v8; // rcx

  v2 = *(_DWORD *)(a2 + 184);
  v4 = a1;
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  LOBYTE(v5) = *(_BYTE *)(a2 + 48);
  LOBYTE(a1) = 1;
  if ( !(_BYTE)v5 && *(_DWORD *)(a2 + 920) || (_BYTE)v5 == 1 && *(_DWORD *)(a2 + 700) )
  {
    if ( !*(_BYTE *)(v4 + 584) )
    {
      if ( (_BYTE)v5 )
      {
        if ( *(_DWORD *)(a2 + 696) )
LABEL_13:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      }
      else if ( *(_DWORD *)(a2 + 916) )
      {
        goto LABEL_13;
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
      *(_DWORD *)(a2 + 184) |= 0x200u;
      v7 = (__int64 *)(a2 + 104);
      if ( (__int64 *)*v7 != v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      v5 = v4 + 592;
      v8 = *(__int64 ***)(v4 + 600);
      if ( *v8 != (__int64 *)(v4 + 592) )
        __fastfail(3u);
      *v7 = v5;
      v7[1] = (__int64)v8;
      *v8 = v7;
      *(_QWORD *)(v4 + 600) = v7;
      return v5;
    }
    if ( (_BYTE)v5 )
    {
      if ( !*(_DWORD *)(a2 + 696) )
      {
        LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
        *(_DWORD *)(a2 + 700) = 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 916) )
    {
      LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2);
      *(_DWORD *)(a2 + 920) = 0;
    }
  }
  return v5;
}
