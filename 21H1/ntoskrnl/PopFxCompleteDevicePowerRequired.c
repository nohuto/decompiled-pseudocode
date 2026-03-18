/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x14023742C
 * Callers:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x14039C760 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A371C (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140236C6C (PopFxAddLogEntry.c)
 *     PopDiagTraceFxDevicePowered @ 0x1402373C0 (PopDiagTraceFxDevicePowered.c)
 *     PopPluginDevicePower @ 0x14023BBD0 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
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
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 0LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 1LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
