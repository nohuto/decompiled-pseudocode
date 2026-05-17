/*
 * XREFs of _RtlpHpStackTraceSerialize@12 @ 0x4B36E775
 * Callers:
 *     _RtlQueryHeapInformation@20 @ 0x4B356D50 (_RtlQueryHeapInformation@20.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D (_RtlpHpStackTraceSerializeRemote@4.c)
 *     _RtlStackDbContextSerialize@12 @ 0x4B38A040 (_RtlStackDbContextSerialize@12.c)
 */

int __fastcall RtlpHpStackTraceSerialize(int a1, int a2, _DWORD *a3)
{
  int v4; // esi
  char v5; // al
  int v7; // [esp-4h] [ebp-Ch]

  if ( a2 != 20 || *(_DWORD *)a1 != 2 )
    return -1073741811;
  if ( *(_DWORD *)(a1 + 4) != -1 )
    return RtlpHpStackTraceSerializeRemote();
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 && (dword_4B3A6834 & 2) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 17) |= 1u;
    v4 = RtlStackDbContextSerialize(v7);
    if ( v4 >= 0 )
    {
      v4 = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHpStackTraceHeapSerialize, a1, 0);
      if ( v4 >= 0 )
      {
        v4 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(a1 + 8))(
               *(_DWORD *)(a1 + 8),
               0,
               0,
               *(_DWORD *)(a1 + 12));
        if ( v4 >= 0 )
        {
          v4 = 0;
          if ( a3 )
            *a3 = 0;
        }
      }
    }
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 16) - 1;
    *(_BYTE *)(a1 + 17) = 0;
    v4 = v5 != 0 ? 0xC000000D : 0;
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  return v4;
}
