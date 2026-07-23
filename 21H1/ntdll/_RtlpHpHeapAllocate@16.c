/*
 * XREFs of _RtlpHpHeapAllocate@16 @ 0x4B37877E
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpHpLfhContextMaximumExtension@4 @ 0x4B3766FE (_RtlpHpLfhContextMaximumExtension@4.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 *     _RtlpHpMetadataHeapCtxGet@8 @ 0x4B3794D2 (_RtlpHpMetadataHeapCtxGet@8.c)
 */

int __fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // esi
  ULONG v11; // esi
  int v12; // eax
  size_t v14; // [esp-4h] [ebp-24h]
  ULONG_PTR RegionSize; // [esp+10h] [ebp-10h] BYREF
  unsigned int v16; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h]

  v5 = RtlpHpLfhContextMaximumExtension(a2);
  v6 = 4096;
  v16 = 4096;
  v7 = 0;
  RegionSize = v5 + 1408 - (((_WORD)v5 + 1407) & 0xFFFu) + 4095;
  v8 = RtlpHpMetadataHeapCtxGet(a3, a4);
  v17 = *(_DWORD *)v8;
  if ( !v17
    || (RtlpHpAppCompatFlags & 8) != 0
    || (a1 & 0x40000000) != 0
    || BYTE2(v9)
    || HIDWORD(v8) >= *(_DWORD *)(v17 + 396) )
  {
    v7 = BYTE1(v9) < 2u ? 0x1000000 : 0;
    v11 = (a1 & 0x40000000) != 0 ? 64 : 4;
    if ( RtlpHpAllocVA((PVOID *)&RegionSize + 1, (int *)&RegionSize, 0, v7 | 0x2000, v11, v9, a4) < 0
      || RtlpHpAllocVA((PVOID *)&RegionSize + 1, (int *)&v16, 0, v7 | 0x1000, v11, a3, a4) < 0 )
    {
      v10 = 0;
      goto LABEL_20;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v6 = v16;
      RtlpLogHeapCommit(SHIDWORD(RegionSize), SHIDWORD(RegionSize), v16, 11);
    }
    else
    {
      v6 = v16;
    }
    v10 = HIDWORD(RegionSize);
    HIDWORD(RegionSize) = 0;
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v10 = RtlpHpMetadataAlloc(1, v9, a4);
    if ( !v10 )
      goto LABEL_20;
    RtlpHpMetadataCommit(RegionSize - 4096, 0, a3, a4);
  }
  LODWORD(v14) = 1408;
  memset((void *)v10, 0, v14);
  *(_DWORD *)(v10 + 184) = v10 + 1408;
  *(_DWORD *)(v10 + 188) = v10 + v6;
  *(_DWORD *)(v10 + 192) = v10 + RegionSize;
  *(_WORD *)(v10 + 22) = v16 | *(_WORD *)(v10 + 22) & 0xFFFE;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 128), (unsigned int)RegionSize >> 12);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 132), v6 >> 12);
LABEL_20:
  if ( HIDWORD(RegionSize) )
    RtlpHpFreeVA((PVOID *)&RegionSize + 1, &RegionSize, v7 | 0x8000, a3, a4);
  return v10;
}
