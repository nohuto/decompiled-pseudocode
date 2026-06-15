/*
 * XREFs of sub_180009280 @ 0x180009280
 * Callers:
 *     sub_180009064 @ 0x180009064 (sub_180009064.c)
 *     sub_18000C9D0 @ 0x18000C9D0 (sub_18000C9D0.c)
 *     sub_18000CB94 @ 0x18000CB94 (sub_18000CB94.c)
 * Callees:
 *     sub_180009888 @ 0x180009888 (sub_180009888.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

void *__fastcall sub_180009280(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void *v4; // rsi
  __int64 v5; // r14
  void *result; // rax
  __int64 v7; // rsi
  char *v8; // rbx
  size_t v9; // rsi
  char *v10; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > (unsigned __int64)v4) )
    sub_18000A174(2147942487LL);
  v5 = 32 * a2;
  result = (void *)sub_180009888((char *)*a1 + 32 * a2, 1LL);
  v7 = (__int64)v4 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (char *)*a1 + 32 * v2;
    v9 = 32 * v7;
    v10 = (char *)*a1 + v5;
    if ( v9 )
    {
      if ( !v10 || !v8 )
      {
        *(_DWORD *)o__errno() = 22;
        o__invalid_parameter_noinfo();
        sub_18000A174(2147942487LL);
      }
      result = memmove(v10, v8, v9);
    }
  }
  a1[1] = (char *)a1[1] - 1;
  return result;
}
