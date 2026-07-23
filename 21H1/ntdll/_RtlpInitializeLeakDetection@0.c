/*
 * XREFs of _RtlpInitializeLeakDetection@0 @ 0x4B35E7F3
 * Callers:
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeMap@8 @ 0x4B35E872 (_RtlpInitializeMap@8.c)
 */

bool __stdcall RtlpInitializeLeakDetection()
{
  unsigned int *Heap; // eax
  unsigned int *v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  PVOID v5; // [esp-Ch] [ebp-10h]
  SIZE_T v6; // [esp-4h] [ebp-8h]
  SIZE_T v7; // [esp-4h] [ebp-8h]

  LODWORD(v6) = 1072;
  Heap = (unsigned int *)RtlAllocateHeap(RtlpLeakHeap, 0, v6);
  v1 = Heap;
  RtlpProcessMemoryMap = (int)Heap;
  if ( !Heap )
    return 0;
  RtlpInitializeMap(Heap);
  dword_4B3A47E4 = (int)&RtlpBusyList;
  RtlpBusyList = (int)&RtlpBusyList;
  dword_4B3A47EC = (int)&RtlpLeakList;
  RtlpLeakList = (int)&RtlpLeakList;
  v2 = 0x100000;
  do
  {
    v3 = v2;
    v2 <<= 8;
  }
  while ( v2 >= v3 );
  v1[2] = -1;
  LODWORD(v7) = 81920;
  v5 = RtlpLeakHeap;
  *v1 = v3;
  RtlpTempBlocks = RtlAllocateHeap(v5, 0, v7);
  return RtlpTempBlocks != 0;
}
