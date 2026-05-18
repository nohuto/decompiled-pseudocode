/*
 * XREFs of sub_18011AD60 @ 0x18011AD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008A1E8 @ 0x18008A1E8 (sub_18008A1E8.c)
 *     sub_18011CBE8 @ 0x18011CBE8 (sub_18011CBE8.c)
 */

_QWORD *__fastcall sub_18011AD60(__int64 a1, _QWORD *a2, char *a3)
{
  char **v3; // rbx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (char **)(a1 + 144);
  sub_18008A1E8((char **)(a1 + 144), &v6, a3);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_18011CBE8(v6 + 64, a2);
  }
  return a2;
}
