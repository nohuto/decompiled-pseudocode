/*
 * XREFs of sub_1800883F8 @ 0x1800883F8
 * Callers:
 *     sub_1800883F8 @ 0x1800883F8 (sub_1800883F8.c)
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 * Callees:
 *     sub_180081408 @ 0x180081408 (sub_180081408.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800883F8 @ 0x1800883F8 (sub_1800883F8.c)
 */

void __fastcall sub_1800883F8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 i; // rbx

  if ( *a3 )
  {
    sub_180081408(*a3, a2);
    v6 = *a3;
    sub_1800839A4(v6);
    v7 = *(_QWORD *)(v6 + 40);
    for ( i = *(_QWORD *)(v6 + 32); i != v7; i += 16LL )
      sub_1800883F8(a1, a2, i);
  }
}
