/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140246034
 * Callers:
 *     PopFxProcessWork @ 0x140246294 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x14039C2E0 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A62A8 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x1402460C4 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x140246704 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x140246F08 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
