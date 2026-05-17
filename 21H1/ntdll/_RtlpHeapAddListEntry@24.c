/*
 * XREFs of _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D
 * Callers:
 *     @RtlpInsertUCRBlock@8 @ 0x4B2AB9B6 (@RtlpInsertUCRBlock@8.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpPopulateListIndex@8 @ 0x4B2B19E4 (_RtlpPopulateListIndex@8.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 *     _RtlpInitializeUCRIndex@4 @ 0x4B37079C (_RtlpInitializeUCRIndex@4.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpHeapAddListEntry(int a1, _DWORD *a2, char a3, int a4, int a5, int a6)
{
  unsigned int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  int result; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v7 = a5 - a2[5];
  if ( a2[2] )
  {
    v8 = 2 * v7;
    v15 = 2 * v7;
  }
  else
  {
    v8 = a5 - a2[5];
    v15 = v7;
  }
  v9 = a2[8];
  ++a2[3];
  v10 = *(_DWORD *)(v9 + 4 * v8);
  result = a2[1] - 1;
  if ( a5 == result )
    ++a2[4];
  if ( !v10 )
    goto LABEL_6;
  if ( a3 )
  {
    result = *(_DWORD *)(v10 - 8);
    if ( *(_DWORD *)(a1 + 76) )
    {
      v14 = result ^ *(_DWORD *)(a1 + 80);
      LOWORD(result) = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
      {
        RtlpLogHeapFailure(v10 - 8, 0, 0, 0);
        LOWORD(result) = v14;
      }
      v8 = v15;
    }
    result = (unsigned __int16)result;
    v13 = a6 - (unsigned __int16)result;
  }
  else
  {
    v13 = a6 - *(_DWORD *)(v10 + 20);
  }
  if ( v13 <= 0 )
  {
LABEL_6:
    result = a4;
    *(_DWORD *)(a2[8] + 4 * v8) = a4;
  }
  if ( !v10 )
  {
    v12 = a2[7];
    result = *(_DWORD *)(v12 + 4 * (v7 >> 5)) | (1 << (v7 & 0x1F));
    *(_DWORD *)(v12 + 4 * (v7 >> 5)) = result;
  }
  return result;
}
