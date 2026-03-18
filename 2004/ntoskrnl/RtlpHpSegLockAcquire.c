/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1402CF3B0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x140256F00 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140259C20 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegContextCompact @ 0x1402DB670 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, char a2)
{
  char result; // al

  result = -1;
  if ( (a2 & 1) == 0 )
    return RtlpHpAcquireLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1);
  return result;
}
