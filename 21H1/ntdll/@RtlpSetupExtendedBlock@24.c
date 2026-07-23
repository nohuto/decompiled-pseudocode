/*
 * XREFs of @RtlpSetupExtendedBlock@24 @ 0x4B35CF90
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 */

int __fastcall RtlpSetupExtendedBlock(int a1, unsigned __int8 a2, int a3, int a4, unsigned int a5, int a6)
{
  int v6; // edi
  unsigned int v7; // esi
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // eax
  int v15; // [esp+10h] [ebp-8h]
  char v16; // [esp+17h] [ebp-1h]

  v6 = a1;
  LOBYTE(a1) = *(_BYTE *)(a3 - 1);
  v7 = a3 - 8;
  v8 = 0;
  v15 = a3 + (unsigned __int16)a5;
  v16 = 0;
  if ( (_BYTE)a1 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(v6 + 68)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 200));
      v16 = 1;
    }
    if ( *(_DWORD *)(v6 + 76) )
    {
      *(_DWORD *)v7 ^= *(_DWORD *)(v6 + 80);
      if ( *(_BYTE *)(a3 - 5) != (*(_BYTE *)v7 ^ (unsigned __int8)(*(_BYTE *)(a3 - 6) ^ *(_BYTE *)(a3 - 7))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    *(_WORD *)v7 += a5;
    LOWORD(v9) = *(_WORD *)v7;
    *(_BYTE *)(a3 - 2) = a5 >> 3;
    if ( *(_DWORD *)(v6 + 76) )
    {
      *(_BYTE *)(a3 - 5) = *(_BYTE *)v7 ^ *(_BYTE *)(a3 - 6) ^ *(_BYTE *)(a3 - 7);
      *(_DWORD *)v7 ^= *(_DWORD *)(v6 + 80);
    }
    v10 = a3 + (unsigned __int16)a5;
    *(_BYTE *)(v15 - 2) = a5 >> 3;
  }
  else
  {
    if ( (_BYTE)a1 == 5 )
    {
      LOWORD(v9) = *(_WORD *)(a3 - 4) ^ *(_WORD *)(v6 + 84);
    }
    else if ( (a1 & 0x40) != 0 )
    {
      LOWORD(v9) = *(_WORD *)(a3 + 8 * (a1 & 0x3F) - 4);
    }
    else if ( (a1 & 0x3F) == 0x3F )
    {
      if ( (a1 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v6 + 76) )
        {
          v12 = *(_DWORD *)v7;
          if ( (*(_DWORD *)v7 & *(_DWORD *)(v6 + 76)) != 0 )
            v12 ^= *(_DWORD *)(v6 + 80);
        }
        else
        {
          LOWORD(v12) = *(_WORD *)v7;
        }
      }
      else
      {
        v11 = v6 ^ RtlpLFHKey ^ *(_DWORD *)v7 ^ (v7 >> 3);
        if ( !(_WORD)v11 )
          v8 = *(_DWORD *)(v7 - (v11 >> 13));
        LOWORD(v12) = *(_WORD *)(v8 + 20);
      }
      v9 = *(_DWORD *)(a3 + 8 * (unsigned __int16)v12 - 12);
    }
    else
    {
      LOWORD(v9) = a1 & 0x3F;
    }
    *(_BYTE *)(v15 - 2) = a5 >> 3;
    *(_BYTE *)(a3 - 1) = (a5 >> 3) | *(_BYTE *)(a3 - 1) & 0xC0 | 0x40;
    v10 = a3 + (unsigned __int16)a5;
  }
  *(_BYTE *)(v10 - 1) = 5;
  *(_WORD *)(v10 - 4) = v9 + a5;
  *(_DWORD *)(v10 - 8) = a6;
  if ( v16 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 200));
  return v10;
}
