/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x140621EDC
 * Callers:
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x14067C640 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapExParametersInitialize @ 0x1406EFE38 (MiMapExParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408C6FE4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1496) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
