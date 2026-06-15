/*
 * XREFs of sub_18005289C @ 0x18005289C
 * Callers:
 *     sub_18005279C @ 0x18005279C (sub_18005279C.c)
 *     sub_18009D044 @ 0x18009D044 (sub_18009D044.c)
 *     sub_1800C293C @ 0x1800C293C (sub_1800C293C.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_18005289C(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v6; // rax
  size_t v7; // r10
  const void *v8; // rcx
  void *v9; // r9
  __int64 v10; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    sub_1800B8610(2147942487LL);
  if ( v4 != v2 )
  {
    v6 = *a1;
    v7 = 4 * (v4 - v2);
    v8 = (const void *)(*a1 + 4 * v2);
    v9 = (void *)(v6 + 4 * a2);
    if ( v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)o__errno(v8) = 22;
        o__invalid_parameter_noinfo(v10);
        sub_1800B8610(2147942487LL);
      }
      memmove(v9, v8, v7);
      v4 = a1[1];
    }
  }
  result = v4 - 1;
  a1[1] = v4 - 1;
  return result;
}
