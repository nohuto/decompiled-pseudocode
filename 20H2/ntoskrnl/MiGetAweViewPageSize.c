/*
 * XREFs of MiGetAweViewPageSize @ 0x14054A9D8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14054A034 (MiDeleteVadAwePtes.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x1408D8140 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x1408D88E8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D8944 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D9520 (NtMapUserPhysicalPages.c)
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
