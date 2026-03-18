/*
 * XREFs of rimProcessHidInput @ 0x1C017CA50
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D27D0 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessHidInput(__int64 a1, __int64 a2)
{
  int v4; // eax
  char result; // al

  if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_QWORD *)(a2 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864))
    && (v4 = *(_DWORD *)(a2 + 184), (v4 & 0x2000) != 0)
    && (v4 & 0x20000) != 0
    && (v4 & 0x400000) == 0 )
  {
    if ( (v4 & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v4 | 0x100000;
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
    }
    *(_BYTE *)(a1 + 584) = 1;
    return InputTraceLogging::RIM::DropInput(a2);
  }
  else
  {
    result = rimStackAttachAndProcessInput(a1, a2, *(_QWORD *)(*(_QWORD *)(a2 + 464) + 24LL), (int)a2 + 256, 0);
    if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
      return ApiSetProcessHidRawInput(a2);
  }
  return result;
}
