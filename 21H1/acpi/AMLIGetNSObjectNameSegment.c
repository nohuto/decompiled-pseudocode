/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C000236C
 * Callers:
 *     ACPIGetPnpLocationString @ 0x1C00A0430 (ACPIGetPnpLocationString.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACA10 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3EBC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
