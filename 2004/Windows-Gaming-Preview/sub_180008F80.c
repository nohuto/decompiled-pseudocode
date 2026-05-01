/*
 * XREFs of sub_180008F80 @ 0x180008F80
 * Callers:
 *     sub_1800023D0 @ 0x1800023D0 (sub_1800023D0.c)
 *     sub_1800038C8 @ 0x1800038C8 (sub_1800038C8.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 */

char *__fastcall sub_180008F80(char *a1, char *a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  size_t v7; // rdi
  size_t v8; // rdx

  if ( a1 == a2 )
    goto LABEL_12;
  if ( !a3 )
    goto LABEL_12;
  if ( !*a3 )
    goto LABEL_12;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = v6 + 1;
  v8 = a2 - a1;
  if ( v8 >= v7 )
  {
    if ( v7 )
      sub_1800018E0(a1, v8, a3, v7);
    if ( a4 )
      *a4 = a1;
    return &a1[v7];
  }
  else
  {
LABEL_12:
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
