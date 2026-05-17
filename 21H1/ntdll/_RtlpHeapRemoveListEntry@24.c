/*
 * XREFs of _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A
 * Callers:
 *     @RtlpRemoveUCRBlock@8 @ 0x4B2A9E29 (@RtlpRemoveUCRBlock@8.c)
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpHeapRemoveListEntry(int a1, _DWORD *a2, char a3, int *a4, unsigned int a5, int a6)
{
  unsigned int v7; // edi
  int v8; // edx
  int result; // eax
  int *v10; // ecx
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int *v16; // [esp+14h] [ebp-Ch]
  __int16 v17; // [esp+14h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-4h]

  v7 = a5 - a2[5];
  if ( a2[2] )
  {
    v8 = 2 * v7;
    v19 = 2 * v7;
  }
  else
  {
    v8 = a5 - a2[5];
    v19 = v7;
  }
  result = a2[8];
  v10 = *(int **)(result + 4 * v8);
  --a2[3];
  v16 = v10;
  v11 = a2[1];
  if ( a5 == v11 - 1 )
    --a2[4];
  if ( v16 == a4 )
  {
    if ( !*a2 )
      --v11;
    v12 = *a4;
    if ( a5 < v11 )
    {
      if ( v12 == a2[6] )
        goto LABEL_13;
      if ( a3 )
      {
        v14 = *(_DWORD *)(v12 - 8);
        if ( *(_DWORD *)(a1 + 76) )
        {
          v14 ^= *(_DWORD *)(a1 + 80);
          v17 = v14;
          if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
          {
            RtlpLogHeapFailure(v12 - 8, 0, 0, 0);
            LOWORD(v14) = v17;
          }
          v8 = v19;
        }
        v15 = a6 - (unsigned __int16)v14;
      }
      else
      {
        v15 = a6 - *(_DWORD *)(v12 + 20);
      }
      if ( v15 )
      {
LABEL_13:
        result = a2[8];
        goto LABEL_10;
      }
      result = a2[8];
    }
    else if ( v12 == a2[6] )
    {
LABEL_10:
      *(_DWORD *)(result + 4 * v8) = 0;
      v13 = a2[7];
      result = *(_DWORD *)(v13 + 4 * (v7 >> 5)) & ~(1 << (v7 & 0x1F));
      *(_DWORD *)(v13 + 4 * (v7 >> 5)) = result;
      return result;
    }
    *(_DWORD *)(result + 4 * v8) = v12;
  }
  return result;
}
