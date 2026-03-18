/*
 * XREFs of DxgkWslWaitForSynchronizationObjectFromCpu @ 0x1C03441A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CD280 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkWslWaitForSynchronizationObjectFromCpu(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        void *a2)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, 0LL, a2);
}
