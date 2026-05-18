/*
 * XREFs of sub_18001B288 @ 0x18001B288
 * Callers:
 *     sub_18001FDD8 @ 0x18001FDD8 (sub_18001FDD8.c)
 * Callees:
 *     sub_18001FE84 @ 0x18001FE84 (sub_18001FE84.c)
 */

void __fastcall sub_18001B288(__int64 a1)
{
  _QWORD *v1; // rsi
  RTL_SRWLOCK *v3; // rdi

  v1 = (_QWORD *)(a1 + 240);
  if ( !*(_QWORD *)(a1 + 240) && *(_QWORD *)(a1 + 24) )
  {
    *v1 = 0LL;
    v3 = *(RTL_SRWLOCK **)(a1 + 24);
    AcquireSRWLockExclusive(v3);
    sub_18001FE84(&v3[25], v1, sub_180016310, a1);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
}
