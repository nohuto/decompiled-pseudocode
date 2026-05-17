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

int __fastcall RtlAddSIDToBoundaryDescriptorEx(int a1, unsigned __int8 *a2, char a3)
{
  int v5; // eax
  _DWORD *v6; // ebx
  unsigned int v7; // edi
  _DWORD *Heap; // eax
  _DWORD *v9; // esi
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v14; // [esp-8h] [ebp-18h]

  if ( !(unsigned __int8)RtlValidSid(a2) )
    return -1073741811;
  v5 = a2[1];
  v6 = *(_DWORD **)a1;
  v7 = (4 * v5 + 23) & 0xFFFFFFF8;
  if ( v7 + *(_DWORD *)(*(_DWORD *)a1 + 8) < v7 )
    return -1073741453;
  Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v7 + v6[2]);
  v9 = Heap;
  if ( !Heap )
    return -1073741670;
  memcpy(Heap, v6, v6[2]);
  v9[2] = v7 + v6[2];
  v9[1] = v6[1] + 1;
  v10 = v6[2];
  *(_DWORD *)((char *)v9 + v10) = (a3 != 0) + 2;
  *(_DWORD *)((char *)v9 + v10 + 4) = v7;
  memcpy((char *)v9 + v10 + 8, a2, 4 * a2[1] + 8);
  v12 = RtlEnumerateBoundaryDescriptorEntries(v9, v11, v14);
  if ( v12 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v12;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    *(_DWORD *)a1 = v9;
    return 0;
  }
}
