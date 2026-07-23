/*
 * XREFs of _RtlFindMostSignificantBit@8 @ 0x4B34ED50
 * Callers:
 *     _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029 (_RtlCSparseBitmapFindBitSetCapped@12.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

CCHAR __cdecl RtlFindMostSignificantBit(ULONGLONG Set)
{
  unsigned __int64 v1; // rax
  char v2; // bl

  HIDWORD(v1) = HIDWORD(Set);
  v2 = 0;
  if ( HIDWORD(Set) )
  {
    if ( (Set & 0xFFFF000000000000uLL) != 0 )
    {
      if ( (Set & 0xFF00000000000000uLL) != 0 )
        v2 = 56;
      else
        v2 = 48;
    }
    else if ( (Set & 0xFF0000000000LL) != 0 )
    {
      v2 = 40;
    }
    else
    {
      v2 = 32;
    }
  }
  else if ( (Set & 0xFFFF0000) != 0 )
  {
    if ( (Set & 0xFF000000) != 0 )
      v2 = 24;
    else
      v2 = 16;
  }
  else if ( (Set & 0xFF00) != 0 )
  {
    v2 = 8;
  }
  else if ( !Set )
  {
    LOBYTE(v1) = -1;
    return v1;
  }
  LODWORD(v1) = Set;
  LOBYTE(v1) = v2 - RtlpBitsClearHigh[(unsigned __int8)(v1 >> v2)] + 7;
  return v1;
}
