/*
 * XREFs of RtlpReportHeapFailure @ 0x18010AFE8
 * Callers:
 *     RtlpHeapHandleError @ 0x180108280 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlIsAnyDebuggerPresent @ 0x1800FF3B0 (RtlIsAnyDebuggerPresent.c)
 *     RtlpGetModifiedProcessCookie @ 0x180108208 (RtlpGetModifiedProcessCookie.c)
 *     RtlpPrintErrorInformation @ 0x18010AA94 (RtlpPrintErrorInformation.c)
 */

char __fastcall RtlpReportHeapFailure(int a1)
{
  int ModifiedProcessCookie; // eax
  unsigned int v3; // r8d

  ModifiedProcessCookie = RtlpGetModifiedProcessCookie();
  if ( RtlpDisableBreakOnFailureCookie == ModifiedProcessCookie )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      LOBYTE(ModifiedProcessCookie) = RtlIsAnyDebuggerPresent();
      if ( (_BYTE)ModifiedProcessCookie )
      {
        if ( (RtlpHpHeapFeatures & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v3) = ~RtlpHpHeapFeatures;
    LOBYTE(ModifiedProcessCookie) = RtlReportCriticalFailure(-1073740940, (__int64)&RtlpHeapFailureInfo, (v3 >> 2) & 1);
  }
  return ModifiedProcessCookie;
}
