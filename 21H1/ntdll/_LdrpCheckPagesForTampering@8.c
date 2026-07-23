/*
 * XREFs of _LdrpCheckPagesForTampering@8 @ 0x4B334478
 * Callers:
 *     _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD (_LdrpGetImportDescriptorForSnap@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

char __fastcall LdrpCheckPagesForTampering(int a1, int a2)
{
  char v2; // bl
  unsigned int v3; // esi
  _DWORD *Heap; // edi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  SIZE_T v10; // [esp-4h] [ebp-14h]
  ULONG_PTR *v11; // [esp+0h] [ebp-10h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v12 = a1 & 0xFFFFF000;
  v2 = 0;
  v3 = ((a1 & 0xFFFu) + a2 + 4095) >> 12;
  LODWORD(v10) = 8 * v3;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, v10);
  if ( Heap )
  {
    v5 = 0;
    if ( v3 )
    {
      v6 = v12;
      do
      {
        Heap[2 * v5] = v6;
        v6 += 4096;
        ++v5;
      }
      while ( v5 < v3 );
    }
    if ( NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, 0, MemoryWorkingSetExInformation, Heap, 8 * v3, v11) >= 0 )
    {
      v7 = 0;
      if ( !v3 )
      {
LABEL_13:
        RtlFreeHeap(LdrpHeap, 0, Heap);
        return v2;
      }
      v8 = Heap + 1;
      while ( (*v8 & 0x40000000) != 0 )
      {
        ++v7;
        v8 += 2;
        if ( v7 >= v3 )
          goto LABEL_13;
      }
    }
    v2 = 1;
    goto LABEL_13;
  }
  return 1;
}
