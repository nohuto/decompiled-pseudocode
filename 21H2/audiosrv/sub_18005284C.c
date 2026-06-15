/*
 * XREFs of sub_18005284C @ 0x18005284C
 * Callers:
 *     sub_18005279C @ 0x18005279C (sub_18005279C.c)
 *     sub_1800C3DF0 @ 0x1800C3DF0 (sub_1800C3DF0.c)
 *     sub_1800CFE30 @ 0x1800CFE30 (sub_1800CFE30.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_18005284C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 result; // rax
  size_t v6; // rcx
  const void *v7; // r10
  void *v8; // r9
  __int64 v9; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > v4) )
    sub_1800B8610(2147942487LL);
  if ( v4 != v2 )
  {
    v6 = 4 * (v4 - v2);
    v7 = (const void *)(*a1 + 4 * v2);
    v8 = (void *)(*a1 + 4 * a2);
    if ( v6 )
    {
      if ( !v8 || !v7 )
      {
        *(_DWORD *)o__errno(v6) = 22;
        o__invalid_parameter_noinfo(v9);
        sub_1800B8610(2147942487LL);
      }
      memmove(v8, v7, v6);
      v4 = a1[1];
    }
  }
  result = v4 - 1;
  a1[1] = v4 - 1;
  return result;
}
