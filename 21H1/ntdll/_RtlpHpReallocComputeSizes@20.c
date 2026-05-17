/*
 * XREFs of _RtlpHpReallocComputeSizes@20 @ 0x4B3797A5
 * Callers:
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlpHpCalculateAllocSize@8 @ 0x4B378261 (_RtlpHpCalculateAllocSize@8.c)
 *     _RtlpHpComputeSizeInfo@20 @ 0x4B3782D4 (_RtlpHpComputeSizeInfo@20.c)
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 */

int __fastcall RtlpHpReallocComputeSizes(int a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int v5; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v12 = a2;
  *a5 = 0;
  a5[1] = 0;
  a5[2] = 0;
  a5[3] = 0;
  a5[4] = 0;
  a5[3] = a3;
  v5 = RtlpHpSizeHeapInternal(a4, a5 + 2);
  *a5 = v5;
  if ( v5 == -1 )
    return 0;
  v7 = a5[2];
  v8 = RtlpHpComputeSizeInfo(v12, v5, v7, &v11, a4);
  v9 = a5[3];
  a5[1] = v8;
  v10 = RtlpHpCalculateAllocSize(v9, a4 & 0xDFFFF0F7 | (v7 != 0 ? 8 : 0));
  a5[4] = v11 + v10;
  return 1;
}
