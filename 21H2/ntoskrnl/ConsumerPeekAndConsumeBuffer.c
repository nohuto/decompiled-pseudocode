/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x1409959AC
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x1409B225C (PopHiberPeekRangeTable.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  unsigned __int64 result; // rax
  unsigned int v14; // eax
  int v15; // edx

  v5 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *a2;
    v11 = *(_DWORD *)(a1 + 40) - v9;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      if ( v10 >= *(_DWORD *)(a1 + 32) - (int)v9 )
        v10 = *(_DWORD *)(a1 + 32) - v9;
      *a2 = v10;
    }
    v12 = v10;
    if ( v10 <= v11 )
    {
      if ( !v10 )
        goto LABEL_8;
      v5 = *(_QWORD *)a1 + v9 % *(unsigned int *)(a1 + 8);
      v14 = PopHiberPeekRangeTable(v5, v10, a5);
      v12 = v14;
      v10 = v14;
      if ( v14 <= v11 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v15 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v12 >= *(_DWORD *)(a1 + 32) - v15 )
        v12 = *(_DWORD *)(a1 + 32) - v15;
    }
    while ( *(_QWORD *)(a1 + 48) == v9 && v12 > *(_DWORD *)(a1 + 40) - v15 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v14;
LABEL_8:
  if ( !v10 )
  {
LABEL_9:
    v5 = 0LL;
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 48) += v10;
LABEL_10:
  result = v5;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
