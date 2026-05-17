/*
 * XREFs of _EtwpFillProcessorStreamIndexMap@16 @ 0x4B38160C
 * Callers:
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall EtwpFillProcessorStreamIndexMap(_DWORD *a1, unsigned __int16 a2, int a3, unsigned int a4)
{
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // edx
  int v7; // esi
  int Heap; // edi
  int result; // eax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // si
  unsigned int j; // edx
  __int16 v13; // ax
  int v14; // [esp+Ch] [ebp-14h]
  int i; // [esp+14h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]
  unsigned __int16 v19; // [esp+1Ch] [ebp-4h]

  v4 = a3;
  v5 = a2;
  v6 = 0;
  v7 = 4 * v5;
  for ( i = 4 * v5; v6 < a4; v6 += (*(unsigned __int16 *)(v6 + a3 + 4) + 7) & 0xFFFFFFF8 )
    v7 += 2 * *(_DWORD *)(v6 + a3 + 44);
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v7);
  v14 = Heap;
  if ( !Heap )
    return -1073741801;
  v10 = 0;
  v19 = 0;
  v11 = 0;
  v17 = Heap + i;
  for ( j = 0; j < a4; j += (*(unsigned __int16 *)(j + v4 + 4) + 7) & 0xFFFFFFF8 )
  {
    v18 = 0;
    *(_DWORD *)(Heap + 4 * v11) = v17 + 2 * v10;
    v10 = v19;
    if ( *(_DWORD *)(j + v4 + 44) )
    {
      do
      {
        *(_WORD *)(v17 + 2 * v10) = v19;
        *(_WORD *)(a1[94] + 4 * v10) = v11;
        *(_WORD *)(a1[94] + 4 * v10 + 2) = v18;
        v13 = v18;
        v4 = a3;
        v10 = ++v19;
        ++v18;
      }
      while ( (unsigned int)(unsigned __int16)(v13 + 1) < *(_DWORD *)(j + a3 + 44) );
      Heap = v14;
    }
    ++v11;
  }
  a1[87] = v11;
  result = 0;
  a1[88] = Heap;
  return result;
}
