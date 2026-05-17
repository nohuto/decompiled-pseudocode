/*
 * XREFs of WerpPathTail @ 0x180060984
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall WerpPathTail(unsigned __int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 *v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int16 *v6; // r8

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (unsigned __int16 *)(a1 + 2 * v2);
  while ( 1 )
  {
    v6 = v3;
    if ( (unsigned __int64)v3 <= a1 )
      break;
    v4 = *--v3;
    LOWORD(v4) = v4 - 47;
    if ( (unsigned __int16)v4 <= 0x2Du )
    {
      v5 = 0x200000000801LL;
      if ( _bittest64(&v5, v4) )
        break;
    }
  }
  return v6;
}
