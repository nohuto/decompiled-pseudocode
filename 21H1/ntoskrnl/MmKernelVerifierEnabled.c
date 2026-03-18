/*
 * XREFs of MmKernelVerifierEnabled @ 0x14052A998
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D2120 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D21B0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
