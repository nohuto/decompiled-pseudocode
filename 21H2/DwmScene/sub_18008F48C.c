/*
 * XREFs of sub_18008F48C @ 0x18008F48C
 * Callers:
 *     sub_18008F39C @ 0x18008F39C (sub_18008F39C.c)
 *     sub_1800CB96C @ 0x1800CB96C (sub_1800CB96C.c)
 *     sub_180110DFC @ 0x180110DFC (sub_180110DFC.c)
 *     sub_1801210EC @ 0x1801210EC (sub_1801210EC.c)
 * Callees:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 */

__int64 __fastcall sub_18008F48C(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r11
  _QWORD *v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rcx

  v4 = (a1[1] - *a1) >> 3;
  v5 = sub_180020F10((__int64)a1, a2);
  v6 = (_QWORD *)*a1;
  v7 = v5;
  v8 = 0LL;
  v9 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      *v7++ = *v6++;
      ++v8;
    }
    while ( v8 != v9 );
  }
  return sub_180020A38(a1, (__int64)v5, v4, a2);
}
