/*
 * XREFs of sub_1C000174C @ 0x1C000174C
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C000174C(int a1, __int64 a2, _QWORD *a3)
{
  char *PoolWithTag; // rax
  unsigned int v7; // r10d

  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x14uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(PoolWithTag + 4) = 0LL;
    v7 = 0;
    *(_QWORD *)(PoolWithTag + 12) = 0LL;
    *(_DWORD *)PoolWithTag = 1867468116;
    *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)(a2 + 400);
    *a3 = PoolWithTag;
  }
  else
  {
    *a3 = 0LL;
    sub_1C000FD80(a1, 1024, 1635020577, a2, 0LL);
  }
  return v7;
}
