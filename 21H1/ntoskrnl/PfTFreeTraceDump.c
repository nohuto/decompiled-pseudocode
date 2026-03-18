/*
 * XREFs of PfTFreeTraceDump @ 0x1402D5D80
 * Callers:
 *     PfGetCompletedTrace @ 0x140662E14 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1406634DC (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140653E78 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
