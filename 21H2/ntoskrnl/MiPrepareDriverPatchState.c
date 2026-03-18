/*
 * XREFs of MiPrepareDriverPatchState @ 0x1409682E4
 * Callers:
 *     MiLockPatchIatForDV @ 0x1405A1D20 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 *     MiCompleteSecureDriverLoad @ 0x14080C354 (MiCompleteSecureDriverLoad.c)
 *     MiLockAndMapEntireDriver @ 0x140970AB4 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1, __int64 a2)
{
  PVOID Pool; // rcx

  Pool = MiAllocatePool(
           64,
           8 * ((*(_DWORD *)(a1 + 24) >> 6) + (unsigned int)((*(_DWORD *)(a1 + 24) & 0x3F) != 0)),
           0x4D425044u);
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(a1 + 32) = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = Pool;
  *(_DWORD *)(a1 + 96) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 96) = 2;
  *(_QWORD *)(a1 + 16) = a2;
  return 0LL;
}
