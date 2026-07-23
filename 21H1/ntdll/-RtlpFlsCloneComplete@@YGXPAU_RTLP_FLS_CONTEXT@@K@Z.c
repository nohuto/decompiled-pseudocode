/*
 * XREFs of ?RtlpFlsCloneComplete@@YGXPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B33D50F
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpFlsCloneComplete(int a1, int a2)
{
  int v2; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  PRTL_SRWLOCK v7; // eax

  v2 = dword_4B3A66FC;
  if ( a2 )
    RtlpFlsContext.0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)1;
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  if ( v2 )
  {
    v4 = v2 + 16;
    do
    {
      _BitScanReverse(&v5, v4);
      v6 = v4 ^ (1 << v5);
      v7 = (&dword_4B3A66C4)[v5];
      if ( v7 )
        v7 += 2 * v6 + 1;
      if ( a2 )
        v7->Value = 1;
      RtlReleaseSRWLockExclusive(v7);
      --v4;
      --v2;
    }
    while ( v2 );
  }
}
