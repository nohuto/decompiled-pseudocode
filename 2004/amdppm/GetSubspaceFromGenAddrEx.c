/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C0004ED0
 * Callers:
 *     InitAcpiCpc @ 0x1C0020B78 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
