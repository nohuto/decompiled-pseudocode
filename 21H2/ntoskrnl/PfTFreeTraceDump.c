/*
 * XREFs of PfTFreeTraceDump @ 0x1402D5024
 * Callers:
 *     PfGetCompletedTrace @ 0x1406CD47C (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1406CDB44 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x1406C7914 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
