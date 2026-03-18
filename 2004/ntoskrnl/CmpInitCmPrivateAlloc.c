/*
 * XREFs of CmpInitCmPrivateAlloc @ 0x140A8C00C
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x1402FD850 (ExInitializeLookasideListExInternal.c)
 */

__int64 CmpInitCmPrivateAlloc()
{
  return ExInitializeLookasideListExInternal(
           &CmpKcbLookaside,
           CmpAllocateTransientPoolWithTag,
           (__int64 (__fastcall *)())CmSiFreeMemory,
           1,
           0,
           0x138uLL,
           1651199299,
           0,
           0);
}
