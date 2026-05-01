/*
 * XREFs of sub_180037EB0 @ 0x180037EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180037EB0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a2 )
    return (a2[1] >> 1) & 1;
  return result;
}
