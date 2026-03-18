/*
 * XREFs of ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C022CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C026BE74 (-DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@.c)
 */

__int64 __fastcall DxgkCddSubmitSignalSyncObjectsToHwQueue(const struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1)
{
  return DxgkSubmitSignalSyncObjectsToHwQueueInternal(a1, 0);
}
