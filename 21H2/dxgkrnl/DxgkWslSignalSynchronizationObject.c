/*
 * XREFs of DxgkWslSignalSynchronizationObject @ 0x1C0344180
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSignalSynchronizationObjectInternal @ 0x1C01D1400 (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall DxgkWslSignalSynchronizationObject(__int64 a1, void *a2)
{
  return DxgkSignalSynchronizationObjectInternal(a1, 1, a2, 0);
}
