/*
 * XREFs of sub_1800C40FC @ 0x1800C40FC
 * Callers:
 *     sub_1800C41A0 @ 0x1800C41A0 (sub_1800C41A0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800C41EC @ 0x1800C41EC (sub_1800C41EC.c)
 */

void __fastcall sub_1800C40FC(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rsi

  *(_QWORD *)a1 = &off_180149D80;
  sub_1800C41EC();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v3 = *(__int64 **)(a1 + 64);
    v4 = *(__int64 **)(a1 + 56);
    if ( (__int64 *)v2 != v3 )
    {
      do
        sub_18000F708(v4++);
      while ( v4 != v3 );
    }
    sub_1800472E0(v2, (*(_QWORD *)(a1 + 72) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
