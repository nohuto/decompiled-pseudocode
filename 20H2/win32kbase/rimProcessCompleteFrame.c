/*
 * XREFs of rimProcessCompleteFrame @ 0x1C0174278
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0170D50 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C0172DA8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x1C0174FA4 (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessCompleteFrame(HANDLE *a1, struct RIMDEV *a2, LARGE_INTEGER *a3, __int64 a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // r9

  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (a1[80] || *((_DWORD *)a1 + 216))
    && (v7 = *((_DWORD *)a2 + 46), (v7 & 0x2000) != 0)
    && (v7 & 0x20000) != 0
    && (v7 & 0x400000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    v8 = *((_DWORD *)a2 + 46);
    if ( (v8 & 0x100000) == 0 )
    {
      *((_DWORD *)a2 + 46) = v8 | 0x100000;
      ZwSetEvent(a1[48], 0LL);
    }
  }
  else if ( *((_BYTE *)a1 + 584) )
  {
    *((_BYTE *)a1 + 584) = 0;
    InputTraceLogging::RIM::DispatchFrame((__int64)a2, (__int64)a3, 0);
    rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, a2, a3, v9);
  }
  else
  {
    rimQueueCompleteFrame(a1, a2, a3);
  }
}
