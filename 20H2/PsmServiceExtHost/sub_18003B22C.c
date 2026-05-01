/*
 * XREFs of sub_18003B22C @ 0x18003B22C
 * Callers:
 *     sub_1800385F4 @ 0x1800385F4 (sub_1800385F4.c)
 * Callees:
 *     sub_18003A354 @ 0x18003A354 (sub_18003A354.c)
 */

void __fastcall sub_18003B22C(__int64 a1)
{
  __int64 *v1; // rdi
  RTL_SRWLOCK *v3; // rsi

  v1 = (__int64 *)(a1 + 96);
  if ( !*(_QWORD *)(a1 + 96) && *(_QWORD *)(a1 + 24) )
  {
    *v1 = 0LL;
    v3 = *(RTL_SRWLOCK **)(a1 + 24);
    AcquireSRWLockExclusive(v3);
    sub_18003A354((__int64)&v3[25], v1, (__int64)sub_180063D70, a1);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
}
