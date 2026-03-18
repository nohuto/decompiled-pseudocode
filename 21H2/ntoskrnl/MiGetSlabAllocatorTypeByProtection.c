/*
 * XREFs of MiGetSlabAllocatorTypeByProtection @ 0x1402EB3F8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402EB398 (MiUseSlabAllocatorForDriverPage.c)
 *     MiUseSlabAllocator @ 0x140313D20 (MiUseSlabAllocator.c)
 *     MiCreateKernelHalSlabRange @ 0x140B04C20 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSlabAllocatorTypeByProtection(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  result = 5LL;
  if ( (a2 & 5) == 4 || !a3 && (a2 & 5) == 5 )
    return 6LL;
  if ( (a2 & 2) != 0 )
    return a3 == 0 ? 4 : 0;
  if ( (a2 & 1) == 0 )
    return a3 != 0 ? 2 : 5;
  if ( a3 )
    return ((unsigned int)MiFlags >> 15) & 1;
  return result;
}
