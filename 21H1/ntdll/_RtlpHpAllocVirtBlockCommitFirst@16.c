/*
 * XREFs of _RtlpHpAllocVirtBlockCommitFirst@16 @ 0x4B307828
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

char *__fastcall RtlpHpAllocVirtBlockCommitFirst(_DWORD *a1, _DWORD *a2, ULONG_PTR a3)
{
  char *v4; // edi
  ULONG HeapProtection; // eax
  int v6; // ecx
  int v7; // edx
  ULONG_PTR v9; // [esp-10h] [ebp-30h]
  ULONG v10; // [esp+0h] [ebp-20h]
  char *v11; // [esp+10h] [ebp-10h] BYREF
  ULONG_PTR v12; // [esp+14h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  HIDWORD(v12) = *a2 + a3 + 4096;
  BaseAddress = 0;
  HeapProtection = RtlpGetHeapProtection(a1, 1);
  HIDWORD(v9) = (char *)&v12 + 4;
  LODWORD(v9) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v9, (PSIZE_T)0x1000, HeapProtection, v10) >= 0 )
  {
    if ( (_DWORD)a3 )
      RtlpSecMemFreeVirtualMemory(v6, &BaseAddress, &a3, 0x4000u);
    LODWORD(v12) = 4096;
    v11 = (char *)BaseAddress + HIDWORD(v12) - 4096;
    RtlpSecMemFreeVirtualMemory(HIDWORD(v12) - 4096, (PVOID *)&v11, &v12, 0x4000u);
    v7 = HIDWORD(v12);
    v4 = (char *)BaseAddress + a3;
    *a2 = HIDWORD(v12) - v12 - a3;
    *(_DWORD *)HIDWORD(a3) = v7;
  }
  return v4;
}
