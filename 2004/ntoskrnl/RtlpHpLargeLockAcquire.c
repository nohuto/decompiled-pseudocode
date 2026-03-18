/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1402DAEBC
 * Callers:
 *     RtlpHpLargeFree @ 0x1402DA540 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
