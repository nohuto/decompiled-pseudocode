/*
 * XREFs of RtlpCtContextFree @ 0x14091BCBC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x14091BD18 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14091BEF0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x1406D4F50 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  PVOID v3; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)P[1];
  if ( v2 )
    ExUnsubscribeWnfStateChange(v2);
  v3 = P[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x67744364u);
    P[2] = 0LL;
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x67744364u);
  ExFreePoolWithTag(P, 0x67744364u);
}
