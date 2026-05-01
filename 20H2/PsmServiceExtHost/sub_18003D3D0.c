/*
 * XREFs of sub_18003D3D0 @ 0x18003D3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D3EC @ 0x18003D3EC (sub_18003D3EC.c)
 */

__int64 sub_18003D3D0()
{
  __int64 result; // rax

  result = sub_18003D3EC();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
