/*
 * XREFs of ProducerConsumerBufferComplete @ 0x1409908EC
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopCountDataAsProduced @ 0x14099075C (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140990A5C (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerConsumerBufferComplete(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 result; // rax

  v4 = a4;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(a1);
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(unsigned int *)(a1 + 8);
  v10 = a3 - *(_DWORD *)a1;
  v11 = v9 + v10;
  if ( (unsigned int)(v8 % v9) <= v10 )
    v11 = v10;
  v12 = v8 + v11 - (unsigned int)(v8 % v9);
  while ( v12 != v8 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak(v9);
    }
    while ( v12 != *(_QWORD *)(a2 + 8) );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak(v9);
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
    v8 = *(_QWORD *)(a2 + 8);
  }
  result = v8 + v4;
  *(_QWORD *)(a2 + 8) = v8 + v4;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
