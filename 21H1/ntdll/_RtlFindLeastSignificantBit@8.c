/*
 * XREFs of _RtlFindLeastSignificantBit@8 @ 0x4B34EC70
 * Callers:
 *     _RtlLengthCurrentClearRunForward@12 @ 0x4B34F5C0 (_RtlLengthCurrentClearRunForward@12.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

CCHAR __cdecl RtlFindLeastSignificantBit(ULONGLONG Set)
{
  char v1; // bl

  v1 = 0;
  if ( (_DWORD)Set )
  {
    if ( !(_WORD)Set )
    {
      if ( (Set & 0xFF0000) != 0 )
        v1 = 16;
      else
        v1 = 24;
    }
  }
  else if ( WORD2(Set) )
  {
    if ( BYTE4(Set) )
      v1 = 32;
    else
      v1 = 40;
  }
  else if ( (Set & 0xFF000000000000LL) != 0 )
  {
    v1 = 48;
  }
  else
  {
    if ( !Set )
      return -1;
    v1 = 56;
  }
  return v1 + RtlpBitsClearLow[(unsigned __int8)(Set >> v1)];
}
