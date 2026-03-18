/*
 * XREFs of MmKernelVerifierEnabled @ 0x14052AFE8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15C0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409D2180 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D2210 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
