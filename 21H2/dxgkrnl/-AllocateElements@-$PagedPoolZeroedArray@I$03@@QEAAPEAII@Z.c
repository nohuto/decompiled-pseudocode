/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01CE214
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02242A8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C030E5C8 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C03119C0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0315510 (NtDxgkOutputDuplPresentToHwQueue.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0343870 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  if ( a2 <= 4 )
  {
    v6 = a1 + 1;
    *a1 = (__int64)v6;
    if ( a2 )
      memset(v6, 0, 4LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 4 )
  {
    *a1 = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL, a4);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 6) = a2;
    return result;
  }
  return 0LL;
}
