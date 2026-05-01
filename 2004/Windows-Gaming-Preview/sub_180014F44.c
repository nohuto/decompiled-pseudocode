/*
 * XREFs of sub_180014F44 @ 0x180014F44
 * Callers:
 *     sub_180013FC0 @ 0x180013FC0 (sub_180013FC0.c)
 *     sub_180014440 @ 0x180014440 (sub_180014440.c)
 *     sub_180018D30 @ 0x180018D30 (sub_180018D30.c)
 *     sub_180019380 @ 0x180019380 (sub_180019380.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180014F44(HSTRING *a1, unsigned int a2)
{
  HSTRING *v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1;
      v4 = a2;
      do
      {
        WindowsDeleteString(*v3);
        *v3++ = 0LL;
        --v4;
      }
      while ( v4 );
    }
    return _o_free(a1);
  }
  return result;
}
