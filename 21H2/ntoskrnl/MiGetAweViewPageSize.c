/*
 * XREFs of MiGetAweViewPageSize @ 0x14054C718
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14054BD74 (MiDeleteVadAwePtes.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x1408D5A60 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x1408D6208 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6264 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
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
