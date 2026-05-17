/*
 * XREFs of _RtlSizeHeap@12 @ 0x4B2DB840
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlSetEnvironmentVar@20 @ 0x4B2DB1B0 (_RtlSetEnvironmentVar@20.c)
 *     _RtlSetCurrentEnvironment@8 @ 0x4B32DD40 (_RtlSetCurrentEnvironment@8.c)
 *     _RtlSetEnvironmentStrings@8 @ 0x4B32DDE0 (_RtlSetEnvironmentStrings@8.c)
 *     _RtlpDumpEntryInfo@8 @ 0x4B35E6BD (_RtlpDumpEntryInfo@8.c)
 *     _RtlpScanHeapAllocBlocks@0 @ 0x4B35EB37 (_RtlpScanHeapAllocBlocks@0.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x4B364580 (RtlpHeapTrkDumpOutstandingAllocs.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpSizeHeap@12 @ 0x4B37999D (_RtlpHpSizeHeap@12.c)
 */

int __stdcall RtlSizeHeap(int a1, int a2, int a3)
{
  int v3; // edx
  unsigned int v4; // ecx
  char v5; // al
  unsigned int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // edi
  int v10; // ecx
  unsigned int v13; // edx
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  struct _TEB *v20; // esi
  int v21; // eax
  int v22; // [esp+Ch] [ebp-4h]

  if ( !a1 )
    RtlpLogHeapFailure(a3, 0, 0, 0);
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a3 )
      v22 = *(_DWORD *)(a3 - 8);
    else
      v22 = 0;
    v17 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v18 = RtlpHpSizeHeap(v17);
    v19 = v18;
    if ( v18 != -1 )
      return v18 - v22;
    RtlpLogHeapFailure(a3, 0, 0, 0);
    return v19;
  }
  v3 = a2 | *(_DWORD *)(a1 + 68);
  if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    return RtlDebugSizeHeap(a3);
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v4 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 7) != 0 )
    {
      RtlpLogHeapFailure(a3, 0, 0, 0);
    }
    else
    {
      v4 = a3 - 8;
      if ( *(_BYTE *)(a3 - 1) == 5 )
        v4 -= 8 * *(unsigned __int8 *)(v4 + 6);
      if ( (*(_BYTE *)(v4 + 7) & 0x3F) != 0 )
        goto LABEL_9;
      RtlpLogHeapFailure(v4, 0, 0, 0);
    }
    v4 = 0;
  }
LABEL_9:
  if ( v4 )
  {
    v5 = *(_BYTE *)(v4 + 7);
    if ( v5 == 4 )
    {
      if ( *(_DWORD *)(a1 + 76) )
      {
        v21 = *(_DWORD *)v4;
        if ( (*(_DWORD *)v4 & *(_DWORD *)(a1 + 76)) != 0 )
          v21 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v21) = *(_WORD *)v4;
      }
      return *(_DWORD *)(v4 - 8) - (unsigned __int16)v21;
    }
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 76) )
      {
        v7 = *(_DWORD *)v4;
        if ( (*(_DWORD *)v4 & *(_DWORD *)(a1 + 76)) != 0 )
          v7 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v7) = *(_WORD *)v4;
      }
    }
    else
    {
      v6 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v4 ^ (v4 >> 3);
      if ( (_WORD)v6 )
        v7 = 0;
      else
        v7 = *(_DWORD *)(v4 - (v6 >> 13));
      LOWORD(v7) = *(_WORD *)(v7 + 20);
    }
    v8 = *(_BYTE *)(v4 + 7);
    v9 = (unsigned __int16)v7;
    if ( v8 == 5 )
    {
      v10 = *(unsigned __int16 *)(a1 + 84) ^ *(unsigned __int16 *)(v4 + 4);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      v10 = *(unsigned __int16 *)(v4 + 8 * (v8 & 0x3F) + 4);
    }
    else if ( (v8 & 0x3F) == 0x3F )
    {
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 76) )
        {
          v16 = *(_DWORD *)v4;
          if ( (*(_DWORD *)v4 & *(_DWORD *)(a1 + 76)) != 0 )
            v16 ^= *(_DWORD *)(a1 + 80);
          v10 = *(_DWORD *)(v4 + 8 * (unsigned __int16)v16 - 4);
          return 8 * v9 - v10;
        }
        v15 = *(_WORD *)v4;
      }
      else
      {
        v13 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v4 ^ (v4 >> 3);
        if ( (_WORD)v13 )
          v14 = 0;
        else
          v14 = *(_DWORD *)(v4 - (v13 >> 13));
        v15 = *(_WORD *)(v14 + 20);
      }
      v10 = *(_DWORD *)(v4 + 8 * v15 - 4);
    }
    else
    {
      v10 = v8 & 0x3F;
    }
    return 8 * v9 - v10;
  }
  v20 = NtCurrentTeb();
  v20->LastStatusValue = -1073741811;
  v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return -1;
}
