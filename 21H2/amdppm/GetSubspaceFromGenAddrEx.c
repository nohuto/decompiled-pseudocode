/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C0005700
 * Callers:
 *     InitAcpiCpc @ 0x1C0023388 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
