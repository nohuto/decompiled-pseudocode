/*
 * XREFs of MmKernelVerifierEnabled @ 0x14045B94E
 * Callers:
 *     VerifierExFreePool @ 0x140A7F070 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140A7F0E0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
