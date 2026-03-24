/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1406EC0BC
 * Callers:
 *     MiAllocateVirtualMemoryPrepare @ 0x1405F99F0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapParametersInitialize @ 0x1406EBFB0 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x140712858 (MiMapExParametersInitialize.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapImageInSystemProcess @ 0x1408C47A4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408D1E58 (MiAllocateEnclaveVad.c)
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
