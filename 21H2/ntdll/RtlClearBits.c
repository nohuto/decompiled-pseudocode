/*
 * XREFs of RtlClearBits @ 0x180058550
 * Callers:
 *     LdrpInitializeTls @ 0x180053D54 (LdrpInitializeTls.c)
 *     LdrpAcquireTlsIndex @ 0x180054E64 (LdrpAcquireTlsIndex.c)
 *     RtlFindSetBitsAndClear @ 0x1800EC470 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

void __cdecl RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(RtlIsSystemAceType[NumberToClear + 16] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= RtlIsSystemAceType[v4 + 16];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_18012E6B0[v6];
      goto LABEL_4;
    }
  }
}
