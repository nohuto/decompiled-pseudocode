/*
 * XREFs of PoRegisterSystemState @ 0x140201CD0
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceRegisterSystemState @ 0x140201D94 (PopDiagTraceRegisterSystemState.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140369870 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1403698C4 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14036B98C (PoCaptureReasonContext.c)
 *     PoSetSystemState @ 0x1405CFE90 (PoSetSystemState.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  PVOID v2; // rbx
  int v5; // r9d
  int v6; // eax
  PVOID v7; // rsi
  int v8; // eax
  PVOID v10; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags > 0 )
    {
      PoSetSystemState(Flags);
    }
    else
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v2 = StateHandle;
      v10 = StateHandle;
      if ( StateHandle
        || (LOBYTE(v5) = 1, v6 = PoCaptureReasonContext(0, 0, 0, v5, 0LL, (__int64)&P), v7 = P, v6 >= 0)
        && (v8 = PopPowerRequestCreateCommon(P, 0LL, &v10), v2 = v10, v8 >= 0) )
      {
        PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2);
      }
      else if ( v7 )
      {
        PoDestroyReasonContext(v7);
      }
    }
  }
  return v2;
}
