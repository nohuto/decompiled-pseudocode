/*
 * XREFs of CmpInitCmPrivateAlloc @ 0x140A8FB7C
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1402A3110 (ExInitializeLookasideListExInternal.c)
 */

__int64 CmpInitCmPrivateAlloc()
{
  return ExInitializeLookasideListExInternal(
           &CmpKcbLookaside,
           CmpAllocateTransientPoolWithTag,
           (__int64 (__fastcall *)(ULONG_PTR))CmSiFreeMemory,
           1,
           0,
           0x138uLL,
           1651199299,
           0,
           0);
}
