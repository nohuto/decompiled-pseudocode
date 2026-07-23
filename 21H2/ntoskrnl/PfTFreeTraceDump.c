/*
 * XREFs of PfTFreeTraceDump @ 0x140273D04
 * Callers:
 *     PfGetCompletedTrace @ 0x14067C10C (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14067C7D4 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140676204 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
