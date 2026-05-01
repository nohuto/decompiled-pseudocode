/*
 * XREFs of sub_180030794 @ 0x180030794
 * Callers:
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180030794(int a1)
{
  const void *v1; // rdx
  size_t v2; // r8
  char *v3; // rbx
  void *v5; // rax
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v1 = 0LL;
  v2 = 0LL;
  v3 = (char *)&unk_180088100 + 568 * a1;
  if ( dword_1800B3EF8 == 14 )
  {
    v1 = &unk_18008D960;
    v2 = 1LL;
  }
  if ( dword_1800B3EF8 == 5 || dword_1800B3EF8 == 11 || dword_1800B3EF8 == 12 )
  {
    v1 = &unk_18008DBA0;
    v2 = 3LL;
  }
  if ( v1 )
  {
    v5 = bsearch(&Key, v1, v2, 0x238uLL, sub_18003B410);
    if ( v5 )
      return (char *)v5;
  }
  return v3;
}
