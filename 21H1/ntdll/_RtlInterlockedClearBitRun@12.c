/*
 * XREFs of _RtlInterlockedClearBitRun@12 @ 0x4B34F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInterlockedClearBitRun(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  ULONG v3; // ebx
  ULONG v4; // esi
  volatile signed __int32 *v5; // edi
  unsigned int v6; // eax
  ULONG v7; // eax

  v3 = StartingIndex & 0x1F;
  v4 = NumberToClear;
  v5 = (volatile signed __int32 *)&BitMapHeader->Buffer[StartingIndex >> 5];
  if ( v3 + NumberToClear <= 0x20 )
  {
    if ( NumberToClear == 32 )
    {
      *v5 = 0;
      return;
    }
    v6 = ~(((1 << NumberToClear) - 1) << v3);
    goto LABEL_12;
  }
  if ( (StartingIndex & 0x1F) != 0 )
  {
    _InterlockedAnd(v5, ~(((1 << (32 - v3)) - 1) << v3));
    v4 = NumberToClear - (32 - v3);
    ++v5;
  }
  if ( v4 >= 0x20 )
  {
    v7 = v4 >> 5;
    do
    {
      *v5 = 0;
      v4 -= 32;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  if ( v4 )
  {
    v6 = -1 << v4;
LABEL_12:
    _InterlockedAnd(v5, v6);
  }
}
