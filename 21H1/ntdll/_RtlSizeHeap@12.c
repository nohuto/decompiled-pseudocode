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

SIZE_T __cdecl RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  ULONG v3; // edx
  unsigned int v4; // ecx
  char v5; // al
  unsigned int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // edi
  int v10; // ecx
  SIZE_T result; // rax
  unsigned int v12; // edx
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // eax
  int v17; // edi
  struct _TEB *v18; // esi
  int v19; // [esp+Ch] [ebp-4h]

  if ( !HeapHandle )
    RtlpLogHeapFailure(BaseAddress, 0, 0, 0);
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && BaseAddress )
      v19 = *((_DWORD *)BaseAddress - 2);
    else
      v19 = 0;
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    LODWORD(result) = RtlpHpSizeHeap(v16);
    v17 = result;
    if ( (_DWORD)result == -1 )
      RtlpLogHeapFailure(BaseAddress, 0, 0, 0);
    else
      v17 = result - v19;
    LODWORD(result) = v17;
    return result;
  }
  v3 = Flags | *((_DWORD *)HeapHandle + 17);
  if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
  {
    LODWORD(result) = RtlDebugSizeHeap(BaseAddress);
    return result;
  }
  if ( (*((_BYTE *)HeapHandle + 72) & 1) != 0 )
  {
    v4 = RtlpProbeUserBufferSafe((int)HeapHandle, (int)BaseAddress);
  }
  else
  {
    if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    {
      RtlpLogHeapFailure(BaseAddress, 0, 0, 0);
    }
    else
    {
      v4 = (unsigned int)BaseAddress - 8;
      if ( *((char *)BaseAddress - 1) == 5 )
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
      if ( *((_DWORD *)HeapHandle + 19) )
      {
        LODWORD(result) = *(_DWORD *)v4;
        if ( (*(_DWORD *)v4 & *((_DWORD *)HeapHandle + 19)) != 0 )
          LODWORD(result) = *((_DWORD *)HeapHandle + 20) ^ result;
      }
      else
      {
        LOWORD(result) = *(_WORD *)v4;
      }
      HIDWORD(result) = *(_DWORD *)(v4 - 8) - (unsigned __int16)result;
      goto LABEL_20;
    }
    if ( v5 >= 0 )
    {
      if ( *((_DWORD *)HeapHandle + 19) )
      {
        v7 = *(_DWORD *)v4;
        if ( (*(_DWORD *)v4 & *((_DWORD *)HeapHandle + 19)) != 0 )
          v7 ^= *((_DWORD *)HeapHandle + 20);
      }
      else
      {
        LOWORD(v7) = *(_WORD *)v4;
      }
    }
    else
    {
      v6 = (unsigned int)HeapHandle ^ RtlpLFHKey ^ *(_DWORD *)v4 ^ (v4 >> 3);
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
      v10 = *((unsigned __int16 *)HeapHandle + 42) ^ *(unsigned __int16 *)(v4 + 4);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      v10 = *(unsigned __int16 *)(v4 + 8 * (v8 & 0x3F) + 4);
    }
    else if ( (v8 & 0x3F) == 0x3F )
    {
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 19) )
        {
          v15 = *(_DWORD *)v4;
          if ( (*(_DWORD *)v4 & *((_DWORD *)HeapHandle + 19)) != 0 )
            v15 ^= *((_DWORD *)HeapHandle + 20);
          v10 = *(_DWORD *)(v4 + 8 * (unsigned __int16)v15 - 4);
          goto LABEL_19;
        }
        v14 = *(_WORD *)v4;
      }
      else
      {
        v12 = (unsigned int)HeapHandle ^ RtlpLFHKey ^ *(_DWORD *)v4 ^ (v4 >> 3);
        if ( (_WORD)v12 )
          v13 = 0;
        else
          v13 = *(_DWORD *)(v4 - (v12 >> 13));
        v14 = *(_WORD *)(v13 + 20);
      }
      v10 = *(_DWORD *)(v4 + 8 * v14 - 4);
    }
    else
    {
      v10 = v8 & 0x3F;
    }
LABEL_19:
    HIDWORD(result) = 8 * v9 - v10;
LABEL_20:
    LODWORD(result) = HIDWORD(result);
    return result;
  }
  v18 = NtCurrentTeb();
  v18->LastStatusValue = -1073741811;
  v18->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  LODWORD(result) = -1;
  return result;
}
