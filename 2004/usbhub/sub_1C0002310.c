/*
 * XREFs of sub_1C0002310 @ 0x1C0002310
 * Callers:
 *     sub_1C0001D70 @ 0x1C0001D70 (sub_1C0001D70.c)
 *     sub_1C0005CF0 @ 0x1C0005CF0 (sub_1C0005CF0.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0058304 @ 0x1C0058304 (sub_1C0058304.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0002310(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v7; // rdi
  char *PoolWithTag; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  if ( !a2 )
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    sub_1C002DC78(a2, 0LL);
  if ( *v7 != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    v9 = v7 + 318;
    *(_QWORD *)(PoolWithTag + 4) = 0LL;
    *(_QWORD *)(PoolWithTag + 12) = 0LL;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 7) = 0;
    *(_DWORD *)PoolWithTag = 1668571500;
    *((_QWORD *)PoolWithTag + 4) = a2;
    *((_DWORD *)PoolWithTag + 6) = a4;
    *((_QWORD *)PoolWithTag + 5) = a3;
    v10 = PoolWithTag + 8;
    v11 = (_QWORD *)*((_QWORD *)v9 + 1);
    if ( (_DWORD *)*v11 != v9 )
      __fastfail(3u);
    *v10 = v9;
    v10[1] = v11;
    *v11 = v10;
    *((_QWORD *)v9 + 1) = v10;
  }
  else
  {
    ++v7[322];
  }
  return a2;
}
