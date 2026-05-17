/*
 * XREFs of _RtlpStdExtendLowerWatermark@8 @ 0x4B36923A
 * Callers:
 *     _RtlpStdGetSpaceForTrace@8 @ 0x4B369414 (_RtlpStdGetSpaceForTrace@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __fastcall RtlpStdExtendLowerWatermark(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  char v5; // dl
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v10; // [esp+Ch] [ebp-Ch]
  unsigned int v11; // [esp+10h] [ebp-8h] BYREF
  unsigned int v12; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v3 = 0;
  if ( !byte_4B3A5DA8 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    v2 = a2;
  }
  v5 = *(_BYTE *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 76);
  v10 = *(_DWORD *)(a1 + 84);
  v7 = v2 + v10;
  v12 = v6;
  if ( v5 )
  {
    if ( v7 > *(_DWORD *)(a1 + 88) )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v7 <= v6 )
  {
LABEL_10:
    v3 = v10;
    ++*(_DWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 84) = v7;
    goto LABEL_11;
  }
  v11 = (v2 + 4095) & 0xFFFFF000;
  if ( v6 + v11 < *(_DWORD *)(a1 + 80) && NtAllocateVirtualMemory(-1, (int)&v12, 0, (int)&v11, 4096, 4) >= 0 )
  {
    *(_DWORD *)(a1 + 76) = v12 + v11;
    goto LABEL_10;
  }
LABEL_11:
  if ( !byte_4B3A5DA8 )
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  return v3;
}
