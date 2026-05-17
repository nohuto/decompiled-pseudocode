/*
 * XREFs of RtlSizeHeap @ 0x180024160
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlSetEnvironmentVar @ 0x18004E160 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180082AE0 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008BBD0 (RtlSetCurrentEnvironment.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800F861C (RtlpScanHeapAllocBlocks.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800FE208 (RtlpHeapTrkDumpOutstandingAllocs.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpSizeHeap @ 0x1800243E0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  char v15; // al
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  char v18; // cl
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  unsigned __int16 v24; // ax
  struct _TEB *v25; // rbx
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  v4 = a3;
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v4 )
      v7 = *(_QWORD *)(v4 - 16);
    else
      v7 = 0LL;
    v8 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v10 = RtlpHpSizeHeap(a1, v9, v8);
    v11 = v10;
    if ( v10 != -1 )
      return v10 - v7;
    RtlpLogHeapFailure(9, a1, v4, 0, 0LL, 0LL);
    return v11;
  }
  v13 = a2 | *(_DWORD *)(a1 + 116);
  if ( (v13 & 0x61000000) != 0 && (v13 & 0x10000000) == 0 )
    return RtlDebugSizeHeap(a1, v13, v4);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v4 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, v4);
  }
  else
  {
    if ( (v4 & 0xF) != 0 )
    {
      v14 = 9;
LABEL_13:
      RtlpLogHeapFailure(v14, a1, v4, 0, 0LL, 0LL);
      v4 = 0LL;
      goto LABEL_14;
    }
    v4 -= 16LL;
    _m_prefetchw((const void *)v4);
    if ( *(_BYTE *)(v4 + 15) == 5 )
      v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
    if ( (*(_BYTE *)(v4 + 15) & 0x3F) == 0 )
    {
      v14 = 8;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !v4 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v25 = NtCurrentTeb();
    v25->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return -1LL;
  }
  v15 = *(_BYTE *)(v4 + 15);
  if ( v15 != 4 )
  {
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v20 = *(_DWORD *)(v4 + 8);
        LOWORD(v26) = v20;
        if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
          v26 = *(_DWORD *)(a1 + 136) ^ v20;
        v17 = v26;
      }
      else
      {
        v17 = *(_WORD *)(v4 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4)) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(v4
                        - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
      v17 = *(_WORD *)(v16 + 36);
    }
    v18 = *(_BYTE *)(v4 + 15);
    if ( v18 == 5 )
    {
      v19 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v4 + 12);
    }
    else if ( (v18 & 0x40) != 0 )
    {
      v19 = *(unsigned __int16 *)(v4 + 16LL * (v18 & 0x3F) + 12);
    }
    else if ( (v18 & 0x3F) == 0x3F )
    {
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v22 = *(_DWORD *)(v4 + 8);
          LOWORD(v27) = v22;
          if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
            v27 = *(_DWORD *)(a1 + 136) ^ v22;
          v19 = *(_QWORD *)(v4 + 16LL * (unsigned __int16)v27);
          return 16LL * v17 - v19;
        }
        v21 = *(_WORD *)(v4 + 8);
      }
      else
      {
        if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4))) )
          v3 = *(_QWORD *)(v4
                         - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
        v21 = *(_WORD *)(v3 + 36);
      }
      v19 = *(_QWORD *)(v4 + 16LL * v21);
    }
    else
    {
      v19 = v18 & 0x3F;
    }
    return 16LL * v17 - v19;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(v4 + 8);
    LOWORD(v28) = v23;
    if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
      v28 = *(_DWORD *)(a1 + 136) ^ v23;
    v24 = v28;
  }
  else
  {
    v24 = *(_WORD *)(v4 + 8);
  }
  return *(_QWORD *)(v4 - 16) - v24;
}
