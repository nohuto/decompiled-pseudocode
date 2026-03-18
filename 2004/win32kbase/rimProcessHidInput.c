/*
 * XREFs of rimProcessHidInput @ 0x1C0176D50
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0168B3C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimStackAttachAndProcessInput @ 0x1C017770C (rimStackAttachAndProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C01CC850 (ApiSetProcessHidRawInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimProcessHidInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  char result; // al

  if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_QWORD *)(a2 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !*(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864))
    && (v6 = *(_DWORD *)(a2 + 184), (v6 & 0x2000) != 0)
    && (v6 & 0x20000) != 0
    && (v6 & 0x400000) == 0 )
  {
    if ( (v6 & 0x100000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v6 | 0x100000;
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
