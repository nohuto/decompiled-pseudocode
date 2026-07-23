/*
 * XREFs of _LdrpAddNodeServiceTag@8 @ 0x4B32F554
 * Callers:
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 *     _LdrpAddNodeServiceTag@8 @ 0x4B32F554 (_LdrpAddNodeServiceTag@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpAddNodeServiceTag@8 @ 0x4B32F554 (_LdrpAddNodeServiceTag@8.c)
 */

void __fastcall LdrpAddNodeServiceTag(_DWORD *a1, int a2)
{
  _DWORD *i; // eax
  _DWORD *Heap; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  SIZE_T v8; // [esp-4h] [ebp-14h]

  if ( a1[3] != -1 && (*(_BYTE *)(*a1 - 32) & 0x20) == 0 )
  {
    for ( i = (_DWORD *)a1[2]; i; i = (_DWORD *)*i )
    {
      if ( i[1] == a2 )
        return;
    }
    LODWORD(v8) = 8;
    Heap = RtlAllocateHeap(LdrpHeap, 0, v8);
    if ( Heap )
    {
      Heap[1] = a2;
      *Heap = a1[2];
      v6 = (_DWORD *)a1[6];
      a1[2] = Heap;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          v7 = (_DWORD *)*v7;
          LdrpAddNodeServiceTag(v7[1]);
        }
        while ( v7 != v6 );
      }
    }
  }
}
