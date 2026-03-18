/*
 * XREFs of sub_1C003B464 @ 0x1C003B464
 * Callers:
 *     sub_1C0036430 @ 0x1C0036430 (sub_1C0036430.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C003B464(__int64 a1, __int64 a2, int a3)
{
  __m128 *PoolWithTag; // rax
  __int64 v7; // rbx

  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0x50uLL, 0x42554855u);
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, 0x50uLL);
    sub_1C000FD80(a1, 0x2000, 1768843604, v7, a2);
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 1332899156;
    *(_QWORD *)(v7 + 48) = a2;
    *(_DWORD *)(v7 + 72) = a3;
    *(_DWORD *)(v7 + 8) = 1;
  }
  return v7;
}
