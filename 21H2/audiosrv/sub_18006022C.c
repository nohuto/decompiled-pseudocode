/*
 * XREFs of sub_18006022C @ 0x18006022C
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 * Callees:
 *     sub_180067C78 @ 0x180067C78 (sub_180067C78.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

char **__fastcall sub_18006022C(char **a1)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rsi
  char *v5; // rbp
  char **result; // rax

  v2 = (char *)sub_18006A1B0(144LL, &unk_18019F848);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x90uLL);
    v4 = 6LL;
    v5 = v3;
    do
    {
      sub_180067C78(v5);
      v5 += 24;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v3 = 0LL;
  }
  result = a1;
  *a1 = v3;
  return result;
}
