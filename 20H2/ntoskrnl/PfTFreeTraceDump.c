/*
 * XREFs of PfTFreeTraceDump @ 0x140244AA4
 * Callers:
 *     PfGetCompletedTrace @ 0x14064E334 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14064E9FC (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x14064B0D4 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
