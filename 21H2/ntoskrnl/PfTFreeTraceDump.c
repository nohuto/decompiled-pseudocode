/*
 * XREFs of PfTFreeTraceDump @ 0x140360674
 * Callers:
 *     PfGetCompletedTrace @ 0x1407DB830 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1407DBEE0 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x1407D933C (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
