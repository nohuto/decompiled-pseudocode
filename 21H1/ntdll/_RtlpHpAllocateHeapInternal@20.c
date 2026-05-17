/*
 * XREFs of _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0
 * Callers:
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 * Callees:
 *     _RtlpHpLfhContextAllocate@16 @ 0x4B376407 (_RtlpHpLfhContextAllocate@16.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 *     _RtlpHpVsContextAllocate@16 @ 0x4B37F139 (_RtlpHpVsContextAllocate@16.c)
 */

int __fastcall RtlpHpAllocateHeapInternal(int a1, size_t a2, size_t Size, int a4, int *a5)
{
  int v6; // ecx
  int v7; // eax
  int v9; // [esp+Ch] [ebp-4h]

  v9 = 3;
  if ( Size > (unsigned int)*(unsigned __int16 *)(a1 + 736) - 8
    || (v6 = RtlpHpLfhContextAllocate(a1 + 704, a2, Size, a4), v6 == -1) )
  {
    if ( Size > 0x20000 )
    {
      if ( Size > *(_DWORD *)(a1 + 396) )
        v7 = RtlpHpLargeAlloc(Size, a4);
      else
        v7 = RtlpHpSegAlloc(Size, Size, a4);
    }
    else
    {
      v7 = RtlpHpVsContextAllocate(Size, a4);
    }
    v6 = v7;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v6;
}
