/*
 * XREFs of _RtlAddSIDToBoundaryDescriptorEx@12 @ 0x4B2A9D06
 * Callers:
 *     _RtlAddSIDToBoundaryDescriptor@8 @ 0x4B2A9CF0 (_RtlAddSIDToBoundaryDescriptor@8.c)
 *     _RtlAddIntegrityLabelToBoundaryDescriptor@8 @ 0x4B34D1A0 (_RtlAddIntegrityLabelToBoundaryDescriptor@8.c)
 * Callees:
 *     _RtlEnumerateBoundaryDescriptorEntries@12 @ 0x4B2A9488 (_RtlEnumerateBoundaryDescriptorEntries@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __userpurge RtlAddSIDToBoundaryDescriptorEx@<eax>(unsigned __int8 *a1@<edx>, int a2@<ecx>, int a3@<edi>, char a4)
{
  int v6; // eax
  _DWORD *v7; // ebx
  unsigned int v8; // edi
  _DWORD *Heap; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  size_t v15; // [esp-14h] [ebp-24h]
  SIZE_T v16; // [esp-8h] [ebp-18h]
  size_t v17; // [esp-8h] [ebp-18h]
  int v18; // [esp-8h] [ebp-18h]

  if ( !RtlValidSid(a1) )
    return -1073741811;
  v6 = a1[1];
  v7 = *(_DWORD **)a2;
  HIDWORD(v16) = a3;
  v8 = (4 * v6 + 23) & 0xFFFFFFF8;
  if ( v8 + *(_DWORD *)(*(_DWORD *)a2 + 8) < v8 )
    return -1073741453;
  LODWORD(v16) = v8 + v7[2];
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
  v10 = Heap;
  if ( !Heap )
    return -1073741670;
  LODWORD(v17) = v7[2];
  memcpy(Heap, v7, v17);
  v10[2] = v8 + v7[2];
  v10[1] = v7[1] + 1;
  v11 = v7[2];
  *(_DWORD *)((char *)v10 + v11) = (a4 != 0) + 2;
  *(_DWORD *)((char *)v10 + v11 + 4) = v8;
  LODWORD(v15) = 4 * a1[1] + 8;
  memcpy((char *)v10 + v11 + 8, a1, v15);
  v13 = RtlEnumerateBoundaryDescriptorEntries(v10, v12, v18);
  if ( v13 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v13;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    *(_DWORD *)a2 = v10;
    return 0;
  }
}
