/*
 * XREFs of _RtlAllocateAndInitializeSidEx@16 @ 0x4B345F80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall RtlAllocateAndInitializeSidEx(int a1, unsigned __int8 a2, int *a3, int *a4)
{
  int v5; // edi
  int Heap; // eax
  int v7; // edx
  _DWORD *v9; // esi
  int v10; // eax

  if ( a2 > 0xFu )
    return -1073741811;
  v5 = a2;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 4 * a2 + 8);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_BYTE *)Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Heap + 1) = a2;
  if ( a2 )
  {
    v9 = (_DWORD *)(Heap + 8);
    do
    {
      v10 = *a3++;
      *v9++ = v10;
      --v5;
    }
    while ( v5 );
  }
  *a4 = v7;
  return 0;
}
