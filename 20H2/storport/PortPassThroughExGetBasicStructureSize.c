/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C0059B18
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0059B40 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0059D18 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C007D8C0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0045C80 (RtlULongAdd.c)
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
