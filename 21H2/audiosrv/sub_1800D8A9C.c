/*
 * XREFs of sub_1800D8A9C @ 0x1800D8A9C
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_18006E0A0 @ 0x18006E0A0 (sub_18006E0A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D8A9C(_BYTE *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 result; // rax

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v5 = 0x7FFFFFFFLL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v5;
    }
    while ( v5 );
    result = v5 == 0 ? 0x80070057 : 0;
    if ( v5 )
      v4 = 0x7FFFFFFF - v5;
    else
      v4 = 0LL;
  }
  else
  {
    result = 2147942487LL;
  }
  if ( a3 )
  {
    if ( (int)result >= 0 )
      v3 = v4;
    *a3 = v3;
  }
  return result;
}
