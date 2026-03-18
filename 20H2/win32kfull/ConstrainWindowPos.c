/*
 * XREFs of ConstrainWindowPos @ 0x1C0092E10
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0092AC0 (NtUserSetWindowPos.c)
 *     ConstrainWindowSIZERECT @ 0x1C01D0640 (ConstrainWindowSIZERECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstrainWindowPos(int *a1, int *a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // ecx

  v2 = *a1;
  result = 0x7FFFLL;
  if ( *a1 > 0x7FFF )
  {
    v2 = 0x7FFF;
  }
  else if ( v2 < -32768 )
  {
    v2 = -32768;
  }
  *a1 = v2;
  v4 = *a2;
  if ( *a2 <= 0x7FFF )
  {
    result = (unsigned int)v4;
    if ( v4 < -32768 )
      result = 4294934528LL;
  }
  *a2 = result;
  return result;
}
