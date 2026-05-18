/*
 * XREFs of sub_1800FD6AC @ 0x1800FD6AC
 * Callers:
 *     sub_180100020 @ 0x180100020 (sub_180100020.c)
 * Callees:
 *     sub_1800FD728 @ 0x1800FD728 (sub_1800FD728.c)
 *     memset @ 0x18011E09A (memset.c)
 */

void __fastcall sub_1800FD6AC(__int64 *a1, unsigned __int64 a2)
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
      sub_1800FD728(a1);
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
