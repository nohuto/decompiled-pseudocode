/*
 * XREFs of sub_180033AA0 @ 0x180033AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

char *__fastcall sub_180033AA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char *result; // rax
  unsigned __int64 v7; // rsi
  char *v8; // rdx
  char *v9; // rcx

  v2 = a2;
  v4 = a2 + 1LL;
  if ( v4 < a2 || a2 == -1LL || (v5 = *(_QWORD *)(a1 + 32), v4 > v5) )
    sub_18000A174(-2147024809);
  result = (char *)sub_1800361E8(*(_QWORD *)(a1 + 24) + 8LL * a2, 1LL);
  v7 = v5 - v4;
  if ( v7 )
  {
    result = *(char **)(a1 + 24);
    v8 = &result[8 * v4];
    v9 = &result[8 * v2];
    if ( 8 * v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)o__errno(v9, v8) = 22;
        o__invalid_parameter_noinfo();
        sub_18000A174(-2147024809);
      }
      result = (char *)memmove(v9, v8, 8 * v7);
    }
  }
  --*(_QWORD *)(a1 + 32);
  return result;
}
