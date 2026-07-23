/*
 * XREFs of _RtlpHpLargeFree@12 @ 0x4B37A3A3
 * Callers:
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 */

int __fastcall RtlpHpLargeFree(int a1, unsigned int a2, char a3)
{
  bool v3; // zf
  int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v14; // [esp-8h] [ebp-20h]
  int v15; // [esp-4h] [ebp-1Ch]
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+20h] [ebp+8h]

  v3 = (a3 & 1) == 0;
  v17 = a3 & 1;
  HIDWORD(RegionSize) = a2;
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    a2 = HIDWORD(RegionSize);
  }
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= a1 + 68;
    else
      v6 = 0;
  }
  if ( !v6 )
    goto LABEL_18;
  do
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
  while ( v6 );
  if ( v6 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 68), (PRTL_BALANCED_NODE)v6);
    if ( !v17 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v9 = *(_DWORD *)(v6 + 16);
    v15 = *(_DWORD *)(a1 + 4);
    v14 = *(_DWORD *)a1;
    v10 = (((v9 >> 12) + ((v9 >> 1) & 1)) << 12) - 1;
    LODWORD(RegionSize) = (1 << ((v9 >> 2) & 0x3F))
                        - (((1 << ((v9 >> 2) & 0x3F)) - 1) & ((1 << ((v9 >> 2) & 0x3F)) + v10))
                        + v10;
    RtlpHpFreeVA((PVOID *)&RegionSize + 1, &RegionSize, 0x8000, v14, v15);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), -(*(_DWORD *)(v6 + 16) >> 12));
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 76), -((unsigned int)RegionSize >> 12));
    RtlpHpMetadataFree(*(_DWORD *)a1, *(_DWORD *)(a1 + 4));
    v11 = RegionSize;
    v5 = RegionSize;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v11 = RegionSize;
      v12 = (int)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v12 = 2147353480;
    }
    if ( *(_BYTE *)v12 )
      RtlpHeapLogRangeRelease(a1, SHIDWORD(RegionSize), v11);
  }
  else
  {
LABEL_18:
    if ( !v17 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      a2 = HIDWORD(RegionSize);
    }
    RtlpLogHeapFailure(8, a1, a2, 0, 0, 0);
  }
  return v5;
}
