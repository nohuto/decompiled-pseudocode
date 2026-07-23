/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x18005F650
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockHeap @ 0x18005F990 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA30 (RtlUnlockHeap.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
