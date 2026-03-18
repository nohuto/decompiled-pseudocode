/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1405FD69C
 * Callers:
 *     MiMapParametersInitialize @ 0x1405FD590 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x1406B64B0 (MiMapExParametersInitialize.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406B7010 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408C11A4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
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
