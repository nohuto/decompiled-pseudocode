/*
 * XREFs of sub_18008FAB8 @ 0x18008FAB8
 * Callers:
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_180120630 @ 0x180120630 (sub_180120630.c)
 * Callees:
 *     sub_18008F6B0 @ 0x18008F6B0 (sub_18008F6B0.c)
 */

char **__fastcall sub_18008FAB8(char **a1, char **a2, char *a3)
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
    if ( (int)sub_18008F6B0(v7 + 32, (__int64)a3) >= 0 )
    {
      v6 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v6 == v3 || (int)sub_18008F6B0(a3, (__int64)(v6 + 32)) < 0 )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
