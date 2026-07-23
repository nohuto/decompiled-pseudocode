/*
 * XREFs of _RtlSparseArrayElementAllocate@12 @ 0x4B37E34C
 * Callers:
 *     _RtlpHpVaMgrRangeCreate@12 @ 0x4B37B05E (_RtlpHpVaMgrRangeCreate@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(int a1, int a2, void *Src)
{
  int v3; // edi
  void *v4; // esi
  size_t v6; // [esp-4h] [ebp-20h]
  _BYTE v7[12]; // [esp+8h] [ebp-14h] BYREF
  _BYTE v8[8]; // [esp+14h] [ebp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  v4 = (void *)((a2 << v3) + *(_DWORD *)(a1 + 12));
  if ( (int)RtlpCSparseBitmapPageCommit(v7, v8) < 0 )
    return 0;
  LODWORD(v6) = 1 << v3;
  memcpy(v4, Src, v6);
  RtlpCSparseBitmapUnlock(v7);
  return v4;
}
