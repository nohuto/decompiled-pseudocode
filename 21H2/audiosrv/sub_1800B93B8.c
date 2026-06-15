/*
 * XREFs of sub_1800B93B8 @ 0x1800B93B8
 * Callers:
 *     sub_1800B73E0 @ 0x1800B73E0 (sub_1800B73E0.c)
 * Callees:
 *     sub_180038398 @ 0x180038398 (sub_180038398.c)
 */

void __fastcall sub_1800B93B8(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    sub_180038398(a1);
    *(_BYTE *)(a1 + 24) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
