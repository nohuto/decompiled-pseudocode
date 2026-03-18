/*
 * XREFs of RIMFreeHidDesc @ 0x1C006E19C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00C2D7C (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161108 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C006EF90 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDD(
      (_DWORD)gRimLog,
      a2,
      1,
      33,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      a1,
      *(_WORD *)(a1 + 42),
      *(_WORD *)(a1 + 40));
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    Win32FreePool(v7);
  Win32FreePool(a1);
}
