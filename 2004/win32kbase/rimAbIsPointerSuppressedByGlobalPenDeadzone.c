/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C015BC44
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015C704 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C015BA7C (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C015D55C (WPP_RECORDER_SF_dDdd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int IsPointInGlobalPenDeadzone; // edi
  __int64 v8; // r8
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int128 v13; // [rsp+50h] [rbp-18h] BYREF

  IsPointInGlobalPenDeadzone = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    v8 = *(_QWORD *)(a3 + 40);
    v13 = *(_OWORD *)(a2 + 176);
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, &v13, v8, a4);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDdd(*(_DWORD *)(a3 + 12), v9, v10, v11);
    }
  }
  return IsPointInGlobalPenDeadzone;
}
