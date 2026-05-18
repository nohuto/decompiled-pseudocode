/*
 * XREFs of sub_18008A1E8 @ 0x18008A1E8
 * Callers:
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_18011AD60 @ 0x18011AD60 (sub_18011AD60.c)
 * Callees:
 *     sub_180089DE0 @ 0x180089DE0 (sub_180089DE0.c)
 */

char **__fastcall sub_18008A1E8(char **a1, char **a2, char *a3)
{
  char *v3; // rsi
  char *v6; // rdi
  char *v7; // rbx
  char **result; // rax

  v3 = *a1;
  v6 = *a1;
  v7 = (char *)*((_QWORD *)*a1 + 1);
  while ( !v7[25] )
  {
    if ( (int)sub_180089DE0(v7 + 32, (__int64)a3) >= 0 )
    {
      v6 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v6 == v3 || (int)sub_180089DE0(a3, (__int64)(v6 + 32)) < 0 )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
