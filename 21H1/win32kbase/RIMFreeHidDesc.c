/*
 * XREFs of RIMFreeHidDesc @ 0x1C0056EE0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0059C4C (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x1C01699B8 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C0056F80 (WPP_RECORDER_SF_qDD.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      (_DWORD)gRimLog,
      4,
      1,
      33,
      (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
      a1,
      *(_WORD *)(a1 + 42),
      *(_WORD *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    Win32FreePool(v4);
  return Win32FreePool(a1);
}
