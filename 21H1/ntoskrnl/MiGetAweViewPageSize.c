/*
 * XREFs of MiGetAweViewPageSize @ 0x1405469B8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140546014 (MiDeleteVadAwePtes.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x1408D0FB0 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x1408D1758 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D17B4 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D2390 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweViewPageSize(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return 16LL;
  result = 0LL;
  if ( v1 == 2 )
    return 512LL;
  return result;
}
