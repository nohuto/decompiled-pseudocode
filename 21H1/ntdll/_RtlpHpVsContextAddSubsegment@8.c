/*
 * XREFs of _RtlpHpVsContextAddSubsegment@8 @ 0x4B37F0C2
 * Callers:
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 * Callees:
 *     _RtlpHpVsChunkAlignSplit@12 @ 0x4B37E7F6 (_RtlpHpVsChunkAlignSplit@12.c)
 *     _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E (_RtlpHpVsFreeChunkInsert@12.c)
 */

int __fastcall RtlpHpVsContextAddSubsegment(int a1, int a2)
{
  int v4; // edx
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  unsigned int v10; // eax

  v4 = a1 + 16;
  v5 = (int *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = a2 + 24;
  v8 = v4 ^ v6;
  if ( (v8 ^ *(_DWORD *)v8) != v4 )
    __fastfail(3u);
  v9 = a2 ^ v4;
  *(_DWORD *)a2 = v9;
  *(_DWORD *)(a2 + 4) = a2 ^ v8;
  *(_DWORD *)v8 = a2 ^ v8;
  *v5 = v9;
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && ((a2 + 40) & 0xFFF) != 0 )
  {
    v10 = RtlpHpVsChunkAlignSplit(v7, a2, a2 + 24);
    if ( v10 )
      RtlpHpVsFreeChunkInsert(v10);
    v7 = a2 + 24;
  }
  return RtlpHpVsFreeChunkInsert(v7);
}
