/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18006D920
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSid(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  int v11; // edi
  __int64 Heap; // rax

  v11 = a2;
  if ( a2 > 8u )
    return 3221225592LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 4 * (unsigned int)a2 + 8);
  if ( Heap )
  {
    *(_BYTE *)(Heap + 1) = v11;
    *(_BYTE *)Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
    *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 != 4 )
          {
            if ( v11 != 5 )
            {
              if ( v11 != 6 )
              {
                if ( v11 != 7 )
                {
                  if ( v11 != 8 )
                    goto LABEL_5;
                  *(_DWORD *)(Heap + 36) = a10;
                }
                *(_DWORD *)(Heap + 32) = a9;
              }
              *(_DWORD *)(Heap + 28) = a8;
            }
            *(_DWORD *)(Heap + 24) = a7;
          }
          *(_DWORD *)(Heap + 20) = a6;
        }
        *(_DWORD *)(Heap + 16) = a5;
      }
      *(_DWORD *)(Heap + 12) = a4;
    }
    *(_DWORD *)(Heap + 8) = a3;
LABEL_5:
    *a11 = Heap;
    return 0LL;
  }
  return 3221225495LL;
}
