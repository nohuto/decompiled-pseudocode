/*
 * XREFs of ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800C6CD8
 * Callers:
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002D090 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C7BD4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013D6E8 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioStreamStateChanged::CAudioStreamStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax

  *(_QWORD *)a1 = &CAudioStreamStateChanged::`vftable';
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v8 = *(unsigned int *)(a5 + 296);
  if ( a4 == (_DWORD)v8 )
    MicrosoftTelemetryAssertTriggeredArgs(a1, a4, v8);
  if ( !a4 )
  {
    v9 = *(unsigned int *)(a5 + 296);
    if ( (_DWORD)v9 != 1 )
      MicrosoftTelemetryAssertTriggeredArgs(a1, 0LL, v9);
  }
  *(_QWORD *)(a5 + 304) = a6;
  result = a1;
  *(_DWORD *)(a5 + 296) = a4;
  return result;
}
