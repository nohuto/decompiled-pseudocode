/*
 * XREFs of _RtlpHpLargeAllocSetExtraPresent@12 @ 0x4B37A17E
 * Callers:
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 * Callees:
 *     _RtlpHpLargeLockAcquireShared@8 @ 0x4B307A50 (_RtlpHpLargeLockAcquireShared@8.c)
 *     _RtlpHpLargeLockReleaseShared@12 @ 0x4B307A88 (_RtlpHpLargeLockReleaseShared@12.c)
 */

void __fastcall RtlpHpLargeAllocSetExtraPresent(int a1, unsigned int a2, char a3)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // eax

  RtlpHpLargeLockAcquireShared((_RTL_SRWLOCK *)a1, a3);
  v5 = *(_DWORD *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    if ( v5 )
      v5 ^= a1 + 68;
    else
      v5 = 0;
  }
  while ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 12) & 0xFFFF0000;
    if ( a2 < v6 )
    {
      v7 = *(_DWORD *)v5;
    }
    else
    {
      if ( a2 <= v6 )
        break;
      v7 = *(_DWORD *)(v5 + 4);
    }
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  RtlpHpLargeLockReleaseShared((_RTL_SRWLOCK *)a1, a3, *(_BYTE *)(a1 + 72) & 1);
  *(_DWORD *)(v5 + 16) |= 1u;
}
