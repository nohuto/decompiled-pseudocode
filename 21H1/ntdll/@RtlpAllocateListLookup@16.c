/*
 * XREFs of @RtlpAllocateListLookup@16 @ 0x4B370752
 * Callers:
 *     _RtlpInitializeUCRIndex@4 @ 0x4B37079C (_RtlpInitializeUCRIndex@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_DWORD *__fastcall RtlpAllocateListLookup(PVOID HeapHandle, int a2, int a3, int a4)
{
  unsigned int v5; // esi
  _DWORD *result; // eax
  SIZE_T v7; // [esp-4h] [ebp-10h]

  v5 = (a3 + 31) & 0xFFFFFFE0;
  LODWORD(v7) = (v5 >> 3) + 4 * (v5 + 9);
  result = RtlAllocateHeap(HeapHandle, 0x80000Au, v7);
  if ( result )
  {
    *((_BYTE *)result - 1) = 1;
    result[7] = result + 9;
    result[1] = v5;
    result[8] = (char *)result + (v5 >> 3) + 36;
    result[6] = a2;
  }
  return result;
}
