/*
 * XREFs of _RtlpHpReallocMove@16 @ 0x4B37981A
 * Callers:
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 *     _RtlpHpExtrasMove@20 @ 0x4B378400 (_RtlpHpExtrasMove@20.c)
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 */

void *__fastcall RtlpHpReallocMove(unsigned __int16 *a1, void *a2, int *a3, int a4)
{
  int v4; // edx
  void *v5; // ebx
  int v6; // eax
  unsigned __int16 *v7; // esi
  size_t v9; // [esp-Ch] [ebp-24h]
  size_t v10; // [esp-4h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int16 *v12; // [esp+10h] [ebp-8h]
  void *Src; // [esp+14h] [ebp-4h]

  HIDWORD(v9) = a4;
  LODWORD(v9) = a3[4];
  Src = a2;
  v4 = a3[3];
  v12 = a1;
  v5 = (void *)RtlpHpAllocateHeapInternal(a1, v4, v9, &v11);
  if ( v5 )
  {
    v6 = *a3;
    if ( *a3 >= (unsigned int)a3[3] )
      v6 = a3[3];
    LODWORD(v10) = v6;
    memcpy(v5, Src, v10);
    if ( a3[2] )
    {
      RtlpHpExtrasMove((int)Src, *a3, (int)v5, a3[3], a4);
      v7 = v12;
      RtlpHpExtrasSetPresent((int)v12, (int)v5, a4);
    }
    else
    {
      v7 = v12;
    }
    RtlpHpFreeHeap(v7, (int)Src, a4 & 0x11000001, 0, 0);
  }
  return v5;
}
