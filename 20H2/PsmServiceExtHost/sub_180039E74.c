/*
 * XREFs of sub_180039E74 @ 0x180039E74
 * Callers:
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 *     sub_180039DF0 @ 0x180039DF0 (sub_180039DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039E74(unsigned __int16 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = *a1;
  else
    result = a1[4] + 2LL;
  if ( *((_BYTE *)a1 + 2) == 1 )
  {
    result += 2LL;
  }
  else if ( *((_BYTE *)a1 + 2) == 2 )
  {
    result += 4LL;
  }
  return result;
}
