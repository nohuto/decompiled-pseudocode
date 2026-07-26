/*
 * XREFs of ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00AB888
 * Callers:
 *     ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1C00AB3D0 (-ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z.c)
 *     ?ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z @ 0x1C00AB4B0 (-ndisVerifierAllocateMemoryWithTag@@YAHPEAPEAXIK@Z.c)
 *     ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1C00AB690 (-ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z.c)
 *     ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1C00AB6F0 (-ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisVerifierInjectResourceFailure()
{
  if ( (ndisVerifierLevel & 4) == 0 )
    return 0;
  if ( !VerifierSystemSufficientlyBooted )
    VerifierSystemSufficientlyBooted = MEMORY[0xFFFFF78000000014] > VerifierRequiredTimeSinceBoot.QuadPart
                                                                  + KeBootTime.QuadPart;
  if ( VerifierSystemSufficientlyBooted != 1 || (MEMORY[0xFFFFF78000000320] & 7) != 0 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&ndisVeriferFailedAllocations);
  return 1;
}
