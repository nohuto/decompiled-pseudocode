/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu @ 0x1C0183070
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1C0182B30 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 1, a3);
}
