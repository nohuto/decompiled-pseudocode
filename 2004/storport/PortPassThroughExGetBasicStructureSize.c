/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C0058C58
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0058C80 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0058E58 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C007C3C0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0044D7C (RtlULongAdd.c)
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
