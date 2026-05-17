/*
 * XREFs of RtlpHpUnlockHeapForCloning @ 0x18010E680
 * Callers:
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F4BC4 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18010E210 (RtlpHpLfhContextLockUnlock.c)
 */

void __fastcall RtlpHpUnlockHeapForCloning(__int64 a1, int a2)
{
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rcx
  _QWORD *v6; // rax

  v4 = 2LL;
  RtlpHpLfhContextLockUnlock(a1 + 832, a2 != 0 ? 3 : 1);
  v5 = (volatile signed __int64 *)(a1 + 224);
  if ( a2 )
    *v5 = 1LL;
  RtlReleaseSRWLockExclusive(v5);
  if ( a2 )
  {
    v6 = (_QWORD *)(a1 + 368);
    do
    {
      *v6 = 1LL;
      v6 += 24;
      --v4;
    }
    while ( v4 );
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 560));
  RtlpHpHeapUnlock(a1, a2);
}
