/*
 * XREFs of MiPrepareDriverPatchState @ 0x1408C4E9C
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE800 (MiUnapplyDriverHotPatch.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0C54 (MiLockAndMapEntireDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
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
