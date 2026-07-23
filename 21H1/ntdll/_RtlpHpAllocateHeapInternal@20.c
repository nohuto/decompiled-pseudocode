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

int __fastcall RtlpHpAllocateHeapInternal(unsigned __int16 *BaseAddress, int a2, size_t Size, int *a4)
{
  int v5; // ecx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h]

  v8 = 3;
  if ( (unsigned int)Size > (unsigned int)BaseAddress[368] - 8
    || (v5 = RtlpHpLfhContextAllocate((int)(BaseAddress + 352), a2, Size, SHIDWORD(Size)), v5 == -1) )
  {
    if ( (unsigned int)Size > 0x20000 )
    {
      if ( (unsigned int)Size > *((_DWORD *)BaseAddress + 99) )
        v6 = RtlpHpLargeAlloc(BaseAddress, Size);
      else
        v6 = RtlpHpSegAlloc(Size, Size, HIDWORD(Size));
    }
    else
    {
      v6 = RtlpHpVsContextAllocate(Size, HIDWORD(Size));
    }
    v5 = v6;
  }
  else
  {
    v8 = 2;
  }
  *a4 = v8;
  return v5;
}
