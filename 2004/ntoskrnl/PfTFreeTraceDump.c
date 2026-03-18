/*
 * XREFs of PfTFreeTraceDump @ 0x14026C3E0
 * Callers:
 *     PfGetCompletedTrace @ 0x14061D6F4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14061DDBC (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x1406CE4D8 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
