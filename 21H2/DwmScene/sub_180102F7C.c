/*
 * XREFs of sub_180102F7C @ 0x180102F7C
 * Callers:
 *     sub_1801058F0 @ 0x1801058F0 (sub_1801058F0.c)
 * Callees:
 *     sub_180102FF8 @ 0x180102FF8 (sub_180102FF8.c)
 *     memset @ 0x18012396A (memset.c)
 */

void __fastcall sub_180102F7C(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  char *v6; // rax
  size_t v7; // rbx

  v2 = (char *)a1[1];
  v4 = *a1;
  v5 = (__int64)&v2[-*a1] >> 2;
  if ( a2 >= v5 )
  {
    if ( a2 <= v5 )
      return;
    if ( a2 > (a1[2] - v4) >> 2 )
    {
      sub_180102FF8(a1);
      return;
    }
    v7 = 4 * (a2 - v5);
    memset(v2, 0, v7);
    v6 = &v2[v7];
  }
  else
  {
    v6 = (char *)(v4 + 4 * a2);
  }
  a1[1] = (__int64)v6;
}
