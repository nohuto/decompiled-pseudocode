/*
 * XREFs of _RtlpHpLfhContextAllocate@16 @ 0x4B376407
 * Callers:
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpLfhBucketUpdateStats@12 @ 0x4B3763A4 (_RtlpHpLfhBucketUpdateStats@12.c)
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 */

int __fastcall RtlpHpLfhContextAllocate(int a1, size_t a2, int a3, int a4)
{
  int v5; // edx
  int v7; // esi
  void *v8; // esi
  unsigned __int8 v9; // al
  void *v10; // eax
  int v12; // [esp+Ch] [ebp-4h]

  v5 = a3;
  if ( a2 != a3 )
    v5 = a3 + 2;
  v7 = (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned int)(v5 + 7) >> 3];
  if ( (*(_DWORD *)(a1 + 4 * v7 + 128) & 1) != 0 && !RtlpHpLfhBucketUpdateStats(a1, v5, 1) )
    return -1;
  v12 = *(_DWORD *)(a1 + 4 * v7 + 128);
  if ( *(_BYTE *)(v12 + 2) == 1 )
    v9 = 0;
  else
    v9 = *(_BYTE *)((((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1) << 6) + BYTE1(NtCurrentTeb()->HeapData) + v12);
  v10 = (void *)RtlpHpLfhSlotAllocate(
                  *(_DWORD *)((((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1) << 6)
                            - ((*(_BYTE *)(a1 + 28) - 1) & 3)
                            + *(unsigned __int8 *)(a1 + 28)
                            + 3
                            + 4 * v9
                            + v12),
                  a2,
                  a4);
  v8 = v10;
  if ( v10 && (a4 & 2) != 0 )
    memset(v10, 0, a2);
  return (int)v8;
}
