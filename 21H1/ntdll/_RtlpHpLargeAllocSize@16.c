/*
 * XREFs of _RtlpHpLargeAllocSize@16 @ 0x4B37A1ED
 * Callers:
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpLargeAllocSizeInternal@12 @ 0x4B37A27E (_RtlpHpLargeAllocSizeInternal@12.c)
 */

int __fastcall RtlpHpLargeAllocSize(int a1, unsigned int a2, char a3, int a4)
{
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // esi

  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v6 = *(_DWORD *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= a1 + 68;
    else
      v6 = 0;
  }
  while ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 12) & 0xFFFF0000;
    if ( a2 < v7 )
    {
      v8 = *(_DWORD *)v6;
    }
    else
    {
      if ( a2 <= v7 )
        break;
      v8 = *(_DWORD *)(v6 + 4);
    }
    if ( (*(_BYTE *)(a1 + 72) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
    v9 = RtlpHpLargeAllocSizeInternal(a4);
  else
    v9 = -1;
  if ( (a3 & 1) == 0 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  return v9;
}
