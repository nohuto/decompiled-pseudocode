/*
 * XREFs of _RtlInterlockedSetBitRun@12 @ 0x4B34F530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInterlockedSetBitRun(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  ULONG v3; // ebx
  ULONG v4; // esi
  volatile signed __int32 *v5; // edi
  unsigned int v6; // eax
  ULONG v7; // ecx

  v3 = StartingIndex & 0x1F;
  v4 = NumberToSet;
  v5 = (volatile signed __int32 *)&BitMapHeader->Buffer[StartingIndex >> 5];
  if ( v3 + NumberToSet <= 0x20 )
  {
    if ( NumberToSet == 32 )
    {
      *v5 = -1;
      return;
    }
    v6 = ((1 << NumberToSet) - 1) << v3;
    goto LABEL_12;
  }
  if ( (StartingIndex & 0x1F) != 0 )
  {
    _InterlockedOr(v5, ((1 << (32 - v3)) - 1) << v3);
    v4 = NumberToSet - (32 - v3);
    ++v5;
  }
  if ( v4 >= 0x20 )
  {
    v7 = v4 >> 5;
    do
    {
      *v5 = -1;
      v4 -= 32;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
  if ( v4 )
  {
    v6 = (1 << v4) - 1;
LABEL_12:
    _InterlockedOr(v5, v6);
  }
}
