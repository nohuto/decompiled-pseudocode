/*
 * XREFs of sub_1800168A0 @ 0x1800168A0
 * Callers:
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800168A0(_DWORD *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( a1[127] )
  {
    if ( a1[124] )
      v2 = a1[125];
    else
      v2 = a1[82];
    if ( v2 )
      return 1LL;
  }
  return result;
}
