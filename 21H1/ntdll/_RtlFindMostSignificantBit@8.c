/*
 * XREFs of _RtlFindMostSignificantBit@8 @ 0x4B34ED50
 * Callers:
 *     _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029 (_RtlCSparseBitmapFindBitSetCapped@12.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

int __stdcall RtlFindMostSignificantBit(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // ebx

  HIDWORD(v1) = HIDWORD(a1);
  v2 = 0;
  if ( HIDWORD(a1) )
  {
    if ( (a1 & 0xFFFF000000000000uLL) != 0 )
    {
      v2 = HIDWORD(a1) & 0xFF000000;
      if ( (a1 & 0xFF00000000000000uLL) != 0 )
        LOBYTE(v2) = 56;
      else
        v2 = 48;
    }
    else
    {
      v2 = WORD2(a1) & 0xFF00;
      if ( (a1 & 0xFF0000000000LL) != 0 )
        LOBYTE(v2) = 40;
      else
        v2 = 32;
    }
    goto LABEL_5;
  }
  if ( (a1 & 0xFFFF0000) != 0 )
  {
    if ( (a1 & 0xFF000000) != 0 )
      LOBYTE(v2) = 24;
    else
      LOBYTE(v2) = 16;
    goto LABEL_5;
  }
  if ( (a1 & 0xFF00) != 0 )
  {
    LOBYTE(v2) = 8;
LABEL_5:
    LODWORD(v1) = a1;
    LOBYTE(v2) = v2 - RtlpBitsClearHigh[(unsigned __int8)(v1 >> v2)];
    return v2 + 7;
  }
  if ( a1 )
    goto LABEL_5;
  return 255;
}
