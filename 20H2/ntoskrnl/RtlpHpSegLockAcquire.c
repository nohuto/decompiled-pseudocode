/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1402D42F8
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14023AFB0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402CCAB0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402CE210 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1402D4324 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
