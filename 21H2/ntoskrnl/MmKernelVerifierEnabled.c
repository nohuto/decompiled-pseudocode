/*
 * XREFs of MmKernelVerifierEnabled @ 0x1405306F8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D6190 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D6220 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
