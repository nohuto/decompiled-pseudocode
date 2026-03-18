/*
 * XREFs of RtlIsPartialPlaceholderFileInfo @ 0x140912E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsPartialPlaceholderFileInfo(_DWORD *a1, int a2, bool *a3)
{
  __int64 result; // rax

  if ( a2 >= 2 )
  {
    if ( a2 <= 3 )
      goto LABEL_10;
    if ( a2 == 35 )
    {
LABEL_11:
      *a3 = (*a1 & 0x440000) != 0;
      return 0LL;
    }
    if ( a2 > 36 && (a2 <= 38 || a2 == 60 || a2 == 63 || a2 == 68 || a2 == 70) )
    {
LABEL_10:
      a1 += 14;
      goto LABEL_11;
    }
  }
  result = 3221225475LL;
  if ( a2 < 76 )
    return 3221225659LL;
  return result;
}
