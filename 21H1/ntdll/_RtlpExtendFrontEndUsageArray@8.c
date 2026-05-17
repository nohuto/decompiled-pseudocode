/*
 * XREFs of _RtlpExtendFrontEndUsageArray@8 @ 0x4B2B1C10
 * Callers:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpExtendFrontEndUsageArray(int a1, unsigned __int16 a2)
{
  char *Heap; // eax
  char *v5; // edi
  const void *v6; // ecx
  int result; // eax

  if ( a2 <= *(_WORD *)(a1 + 240) )
    return 0;
  Heap = (char *)RtlAllocateHeap(a1, 8388618, 2 * a2);
  v5 = Heap;
  if ( !Heap )
    return -1073741801;
  *(Heap - 1) = 1;
  v6 = *(const void **)(a1 + 236);
  if ( v6 )
  {
    memcpy(Heap, v6, 2 * *(unsigned __int16 *)(a1 + 240));
    RtlFreeHeap(a1, 2, *(_DWORD *)(a1 + 236));
  }
  *(_DWORD *)(a1 + 236) = v5;
  result = 0;
  *(_WORD *)(a1 + 240) = a2;
  return result;
}
