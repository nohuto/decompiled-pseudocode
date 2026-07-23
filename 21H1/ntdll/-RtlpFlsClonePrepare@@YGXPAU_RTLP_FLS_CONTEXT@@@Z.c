/*
 * XREFs of ?RtlpFlsClonePrepare@@YGXPAU_RTLP_FLS_CONTEXT@@@Z @ 0x4B33D56D
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __cdecl RtlpFlsClonePrepare()
{
  unsigned int v0; // edi
  unsigned int v1; // esi
  unsigned int v2; // ecx
  int v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  _RTL_SRWLOCK *v6; // eax
  unsigned int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v0 = dword_4B3A66FC;
  v1 = 1;
  v8 = dword_4B3A66FC;
  while ( 1 )
  {
    if ( v1 <= v0 )
    {
      v2 = v1 + 16;
      v3 = v0 - v1 + 1;
      v7 = v1 + 16;
      v1 += v3;
      do
      {
        _BitScanReverse(&v4, v2);
        v5 = v2 ^ (1 << v4);
        v6 = (&dword_4B3A66C4)[v4];
        if ( v6 )
          v6 += 2 * v5 + 1;
        RtlAcquireSRWLockExclusive(v6);
        v2 = ++v7;
        --v3;
      }
      while ( v3 );
      v0 = v8;
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    if ( dword_4B3A66FC <= v0 )
      break;
    v0 = dword_4B3A66FC;
    v8 = dword_4B3A66FC;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
}
