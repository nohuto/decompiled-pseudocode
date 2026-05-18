/*
 * XREFs of sub_18008A568 @ 0x18008A568
 * Callers:
 *     sub_18008F59C @ 0x18008F59C (sub_18008F59C.c)
 *     sub_18008F890 @ 0x18008F890 (sub_18008F890.c)
 *     sub_1800CAF60 @ 0x1800CAF60 (sub_1800CAF60.c)
 *     sub_1801212B8 @ 0x1801212B8 (sub_1801212B8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18008A568(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v3 = 0LL;
  v4 = a1;
  v5 = (a2 - (unsigned __int64)a1 + 7) >> 3;
  if ( (unsigned __int64)a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( v5 >= 2 )
    {
      v6 = (unsigned __int64)&a1[v5 - 1];
      if ( v4 > a3 || v6 < (unsigned __int64)a3 )
      {
        v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v3 += 2LL;
        while ( v3 != v7 );
        v8 = 8 * v7;
        memset64(v4, *a3, v8 >> 3);
        v4 = (unsigned __int64 *)((char *)v4 + v8);
      }
    }
    while ( v3 != v5 )
    {
      ++v3;
      *v4++ = *a3;
    }
  }
}
