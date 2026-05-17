/*
 * XREFs of _RtlFindLeastSignificantBit@8 @ 0x4B34EC70
 * Callers:
 *     _RtlLengthCurrentClearRunForward@12 @ 0x4B34F5C0 (_RtlLengthCurrentClearRunForward@12.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

char __stdcall RtlFindLeastSignificantBit(unsigned __int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( !(_WORD)a1 )
    {
      if ( (a1 & 0xFF0000) != 0 )
        v1 = 16;
      else
        v1 = 24;
    }
  }
  else if ( WORD2(a1) )
  {
    if ( BYTE4(a1) )
      v1 = 32;
    else
      v1 = 40;
  }
  else if ( (a1 & 0xFF000000000000LL) != 0 )
  {
    v1 = 48;
  }
  else
  {
    if ( !a1 )
      return -1;
    v1 = 56;
  }
  return v1 + RtlpBitsClearLow[(unsigned __int8)(a1 >> v1)];
}
