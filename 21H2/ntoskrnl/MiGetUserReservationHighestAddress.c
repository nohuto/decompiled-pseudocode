/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1406FC9C4
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapParametersInitialize @ 0x1406FC8B0 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x140756F2C (MiMapExParametersInitialize.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1407E6C40 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapImageInSystemProcess @ 0x14096CE14 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
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
