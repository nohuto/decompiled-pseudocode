/*
 * XREFs of sub_180039294 @ 0x180039294
 * Callers:
 *     pfnti @ 0x180038540 (pfnti.c)
 *     sub_180063E50 @ 0x180063E50 (sub_180063E50.c)
 * Callees:
 *     sub_18003A040 @ 0x18003A040 (sub_18003A040.c)
 */

void __fastcall sub_180039294(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    sub_18003A040(a1);
    *(_BYTE *)(a1 + 24) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
