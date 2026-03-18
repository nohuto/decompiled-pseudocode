/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x14098DA24
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140990A5C (PopHiberCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x1409AD65C (PopHiberPeekRangeTable.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned __int64 result; // rax
  unsigned int v15; // eax
  int v16; // edx

  v5 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      ((void (*)(void))PopHiberCheckForDebugBreak)();
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
      v12 = *(_DWORD *)(a1 + 32) - v9;
      if ( (unsigned int)v10 >= v12 )
        v10 = v12;
      *a2 = v10;
    }
    v13 = v10;
    if ( (unsigned int)v10 <= v11 )
    {
      if ( !(_DWORD)v10 )
        goto LABEL_8;
      v5 = *(_QWORD *)a1 + v9 % *(unsigned int *)(a1 + 8);
      v15 = PopHiberPeekRangeTable(v5, (unsigned int)v10, a5);
      v13 = v15;
      v10 = v15;
      if ( v15 <= v11 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v10);
      v16 = *(_DWORD *)(a1 + 48);
      v10 = (unsigned int)(*(_DWORD *)(a1 + 40) - v16);
      if ( !*(_QWORD *)(a1 + 16) && v13 >= *(_DWORD *)(a1 + 32) - v16 )
        v13 = *(_DWORD *)(a1 + 32) - v16;
    }
    while ( *(_QWORD *)(a1 + 48) == v9 && v13 > (unsigned int)v10 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v10);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v15;
LABEL_8:
  if ( !(_DWORD)v10 )
  {
LABEL_9:
    v5 = 0LL;
    goto LABEL_10;
  }
  *(_QWORD *)(a1 + 48) += (unsigned int)v10;
LABEL_10:
  result = v5;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
