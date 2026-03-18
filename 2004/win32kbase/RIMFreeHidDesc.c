/*
 * XREFs of RIMFreeHidDesc @ 0x1C003E960
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0063E6C (RIMFreeSpecificDevWorker.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  return Win32FreePool(a1);
}
