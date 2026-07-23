/*
 * XREFs of RtlSetBits @ 0x1800489E0
 * Callers:
 *     LdrpInitializeTls @ 0x180047428 (LdrpInitializeTls.c)
 *     RtlFindClearBitsAndSet @ 0x1800486B0 (RtlFindClearBitsAndSet.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     RtlpValidateRange @ 0x1800D92C8 (RtlpValidateRange.c)
 * Callees:
 *     memset @ 0x1800A4180 (memset.c)
 */

void __cdecl RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = RtlIsSystemAceType[NumberToSet + 16] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_18012E610[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = RtlIsSystemAceType[v6 + 16];
      goto LABEL_4;
    }
  }
}
