/*
 * XREFs of _RtlpLockUlockAllHeapsCallback@8 @ 0x4B3589D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 */

int __stdcall RtlpLockUlockAllHeapsCallback(PVOID HeapHandle, int a2)
{
  if ( a2 )
    RtlLockHeap(HeapHandle);
  else
    RtlUnlockHeap(HeapHandle);
  return 0;
}
