/*
 * XREFs of MiPrepareDriverPatchState @ 0x1408C03EC
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x140539BD8 (MmWriteSystemImageTracepoint.c)
 *     MiApplyDriverHotPatch @ 0x1408C4464 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408C9D50 (MiUnapplyDriverHotPatch.c)
 *     MiLockAndMapEntireDriver @ 0x1408CC1A4 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1)
{
  PVOID Pool; // rcx

  Pool = MiAllocatePool(64, (unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3, 0x4D425044u);
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = Pool;
  *(_DWORD *)(a1 + 56) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(*(_QWORD *)a1 + 48LL)) )
    *(_DWORD *)(a1 + 56) = 2;
  return 0LL;
}
