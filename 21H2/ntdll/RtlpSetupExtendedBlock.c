/*
 * XREFs of RtlpSetupExtendedBlock @ 0x1800F6D08
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6)
{
  unsigned __int64 v6; // r14
  char v8; // r15
  char v9; // cl
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  int v15; // eax
  int v17; // [rsp+28h] [rbp-20h]

  v6 = a3 - 16;
  v8 = 0;
  v9 = *(_BYTE *)(a3 - 1);
  v11 = a3 + a5;
  if ( v9 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 - 5) != (*(_BYTE *)(a3 - 8) ^ (unsigned __int8)(*(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    *(_WORD *)(a3 - 8) += a5;
    LOWORD(v12) = *(_WORD *)(a3 - 8);
    *(_BYTE *)(a3 - 2) = a5 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 - 5) = *(_BYTE *)(a3 - 8) ^ *(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6);
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v11 - 2) = a5 >> 4;
  }
  else
  {
    if ( v9 == 5 )
    {
      LOWORD(v12) = *(_WORD *)(a3 - 4) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LOWORD(v12) = *(_WORD *)(a3 + 16LL * (v9 & 0x3F) - 4);
    }
    else if ( (v9 & 0x3F) == 0x3F )
    {
      if ( v9 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(a3 - 8);
          LOWORD(v17) = v15;
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            v17 = *(_DWORD *)(a1 + 136) ^ v15;
          v14 = v17;
        }
        else
        {
          v14 = *(_WORD *)(a3 - 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a3 - 8) ^ (v6 >> 4)) )
          v13 = 0LL;
        else
          v13 = *(_QWORD *)(v6
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(a3 - 8) ^ (unsigned int)(v6 >> 4)) >> 12));
        v14 = *(_WORD *)(v13 + 36);
      }
      v12 = *(_QWORD *)(a3 + 16LL * v14 - 16);
    }
    else
    {
      LOWORD(v12) = v9 & 0x3F;
    }
    *(_BYTE *)(v11 - 2) = a5 >> 4;
    *(_BYTE *)(a3 - 1) &= 0xC0u;
    *(_BYTE *)(a3 - 1) |= (unsigned __int8)(a5 >> 4) | 0x40;
  }
  *(_BYTE *)(v11 - 1) = 5;
  *(_WORD *)(v11 - 4) = a5 + v12;
  *(_DWORD *)(v11 - 8) = a6;
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v11;
}
