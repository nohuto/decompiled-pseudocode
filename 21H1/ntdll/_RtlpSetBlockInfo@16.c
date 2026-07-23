/*
 * XREFs of _RtlpSetBlockInfo@16 @ 0x4B35EDDC
 * Callers:
 *     _RtlpLeakCallbackRoutine@8 @ 0x4B35E8A0 (_RtlpLeakCallbackRoutine@8.c)
 *     _RtlpPushPageDescriptor@8 @ 0x4B35E9DA (_RtlpPushPageDescriptor@8.c)
 *     _RtlpSetBlockInfo@16 @ 0x4B35EDDC (_RtlpSetBlockInfo@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeMap@8 @ 0x4B35E872 (_RtlpInitializeMap@8.c)
 *     _RtlpSetBlockInfo@16 @ 0x4B35EDDC (_RtlpSetBlockInfo@16.c)
 */

unsigned int __fastcall RtlpSetBlockInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // esi
  int v8; // ebx
  _DWORD *Heap; // eax
  SIZE_T v10; // [esp-4h] [ebp-1Ch]
  unsigned int v11; // [esp+10h] [ebp-8h]

  result = a2 + a3 - 1;
  if ( result >= a1[1] && a2 <= a1[2] )
  {
    v6 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v7 = 0;
    else
      v7 = v6 / *a1;
    result = (v6 + a3 - 1) / *a1;
    v11 = result;
    if ( result > 0xFF )
    {
      result = 255;
      v11 = 255;
    }
    if ( v7 <= result )
    {
      v8 = (int)&a1[v7 + 11];
      do
      {
        if ( *a1 == 4096 )
        {
          result = a4;
          if ( a4 )
          {
            if ( *(_DWORD *)v8 )
            {
              if ( *(_DWORD *)v8 != a4 )
              {
                DbgPrint("Error\n");
                result = a4;
              }
            }
            *(_DWORD *)v8 = result;
          }
          else
          {
            result = v7 & 7;
            *((_BYTE *)a1 + (v7 >> 3) + 12) |= 1 << result;
          }
        }
        else
        {
          if ( !*(_DWORD *)v8 )
          {
            LODWORD(v10) = 1072;
            Heap = RtlAllocateHeap(RtlpLeakHeap, 0, v10);
            *(_DWORD *)v8 = Heap;
            if ( !Heap )
              return DbgPrint("Not enough memory to complete\n");
            RtlpInitializeMap(Heap, a1);
            *(_DWORD *)(*(_DWORD *)v8 + 4) = a1[1] + v7 * *a1;
            *(_DWORD *)(*(_DWORD *)v8 + 8) = a1[1] - 1 + *a1 * (v7 + 1);
          }
          result = RtlpSetBlockInfo(a3, a4);
        }
        ++v7;
        v8 += 4;
      }
      while ( v7 <= v11 );
    }
  }
  return result;
}
