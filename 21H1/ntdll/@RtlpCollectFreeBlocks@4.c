/*
 * XREFs of @RtlpCollectFreeBlocks@4 @ 0x4B2AF680
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     _RtlpFlushHeap@4 @ 0x4B35D672 (_RtlpFlushHeap@4.c)
 * Callees:
 *     @RtlpDecommitBlock@8 @ 0x4B2AF71A (@RtlpDecommitBlock@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 */

int __fastcall RtlpCollectFreeBlocks(int a1)
{
  int v1; // edi
  int result; // eax
  int i; // ebx
  int v4; // esi

  v1 = a1;
  result = a1 + 192;
  for ( i = *(_DWORD *)(a1 + 196); i != result; i = *(_DWORD *)(i + 4) )
  {
    v4 = i - 8;
    if ( *(_DWORD *)(v1 + 76) )
    {
      *(_DWORD *)v4 ^= *(_DWORD *)(v1 + 80);
      if ( *(_BYTE *)(v4 + 3) != (*(_BYTE *)v4 ^ (unsigned __int8)(*(_BYTE *)(v4 + 1) ^ *(_BYTE *)(v4 + 2))) )
        RtlpAnalyzeHeapFailure(a1);
      result = v1 + 192;
    }
    a1 = 512;
    if ( *(_WORD *)v4 <= 0x200u )
    {
      if ( *(_DWORD *)(v1 + 76) )
      {
        *(_BYTE *)(v4 + 3) = *(_BYTE *)v4 ^ *(_BYTE *)(v4 + 1) ^ *(_BYTE *)(v4 + 2);
        result = *(_DWORD *)(v1 + 80);
        *(_DWORD *)v4 ^= result;
      }
      return result;
    }
    LOBYTE(a1) = *(_BYTE *)(v4 + 2);
    if ( (a1 & 8) == 0 )
    {
      RtlpDecommitBlock(v1, i - 8);
LABEL_3:
      result = v1 + 192;
      continue;
    }
    if ( *(_DWORD *)(v1 + 76) )
    {
      *(_BYTE *)(v4 + 3) = a1 ^ *(_BYTE *)v4 ^ *(_BYTE *)(v4 + 1);
      *(_DWORD *)v4 ^= *(_DWORD *)(v1 + 80);
      goto LABEL_3;
    }
  }
  return result;
}
