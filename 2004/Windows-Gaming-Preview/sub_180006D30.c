/*
 * XREFs of sub_180006D30 @ 0x180006D30
 * Callers:
 *     sub_180007730 @ 0x180007730 (sub_180007730.c)
 * Callees:
 *     sub_180006478 @ 0x180006478 (sub_180006478.c)
 *     sub_180006F98 @ 0x180006F98 (sub_180006F98.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180006D30(__int64 a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbp

  *a2 = 0LL;
  if ( *(_BYTE *)a1 && (unsigned __int8)sub_180006F98() )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    if ( !*(_QWORD *)(a1 + 96) )
    {
      if ( *(_QWORD *)(a1 + 24) )
      {
        *(_QWORD *)(a1 + 96) = 0LL;
        v6 = *(RTL_SRWLOCK **)(a1 + 24);
        AcquireSRWLockExclusive(v6);
        sub_180006478((__int64)&v6[25], (__int64 *)(a1 + 96), (__int64)sub_1800072B0, a1);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
      }
    }
    sub_180006478(a1 + 176, a2, a3, 0LL);
    if ( *a2 )
      *a2 |= 0x80000000uLL;
    if ( a1 != -32 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 32));
  }
}
