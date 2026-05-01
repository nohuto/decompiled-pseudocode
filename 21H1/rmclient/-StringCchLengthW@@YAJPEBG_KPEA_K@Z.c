/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180010530
 * Callers:
 *     HamHostIdInitializeKey @ 0x180007040 (HamHostIdInitializeKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchLengthW(const unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( a1 )
  {
    v3 = a2;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0x80070057 : 0;
    if ( a3 )
    {
      if ( v3 )
        *a3 = a2 - v3;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 2147942487LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
