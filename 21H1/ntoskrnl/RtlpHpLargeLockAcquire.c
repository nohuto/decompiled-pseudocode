/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x14035F990
 * Callers:
 *     RtlpHpLargeFree @ 0x14035F014 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14035F3BC (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
