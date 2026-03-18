/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1405901CC
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14058FE38 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14058FF8C (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x1402CB544 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
