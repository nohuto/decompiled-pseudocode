/*
 * XREFs of _RtlpLockUlockAllHeapsCallback@8 @ 0x4B3589D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 */

int __thiscall RtlpLockUlockAllHeapsCallback(void *this, int a2, int a3)
{
  if ( a3 )
    RtlLockHeap(a2);
  else
    RtlUnlockHeap(this, a2);
  return 0;
}
