/*
 * XREFs of RtlShiftLeftBitMapEx @ 0x140582B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlExtractBitMapEx @ 0x1405814B0 (RtlExtractBitMapEx.c)
 */

void __fastcall RtlShiftLeftBitMapEx(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r8

  if ( a2 )
  {
    v2 = *(_QWORD *)a1;
    v3 = 0LL;
    if ( a2 < *(_QWORD *)a1 )
    {
      RtlExtractBitMapEx((_QWORD *)a1, a1, a2, v2 - a2);
      RtlClearBitsEx(a1, *(_QWORD *)a1 - a2, a2);
    }
    else
    {
      LOBYTE(v3) = (v2 & 0x1F) != 0;
      memset(*(void **)(a1 + 8), 0, 4 * ((v2 >> 5) + v3));
    }
  }
}
