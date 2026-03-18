/*
 * XREFs of MiGetAweViewPageSize @ 0x140547008
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140546664 (MiDeleteVadAwePtes.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x1408D2300 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x1408D2AA8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D2B04 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
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
