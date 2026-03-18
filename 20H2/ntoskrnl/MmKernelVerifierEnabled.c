/*
 * XREFs of MmKernelVerifierEnabled @ 0x14052E9B8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D81A0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D8230 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
