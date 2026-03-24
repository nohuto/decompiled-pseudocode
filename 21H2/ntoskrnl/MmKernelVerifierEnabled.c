/*
 * XREFs of MmKernelVerifierEnabled @ 0x1405304B8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D5190 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D5220 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
