/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x18013D6E8
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002D090 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002D350 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180045EB0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180046DE0 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180050200 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800C6CD8 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C7BD4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013D718 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, (unsigned int)"AudioSrv.dll", a2, a3);
}
