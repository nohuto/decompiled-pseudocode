/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C000B1A8
 * Callers:
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
