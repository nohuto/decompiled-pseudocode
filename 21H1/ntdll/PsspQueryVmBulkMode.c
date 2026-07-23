/*
 * XREFs of PsspQueryVmBulkMode @ 0x4B387BC0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwPssCaptureVaSpaceBulk@20 @ 0x4B2F3D40 (_ZwPssCaptureVaSpaceBulk@20.c)
 */

int __userpurge PsspQueryVmBulkMode@<eax>(
        ULONG_PTR *a1@<esi>,
        int a2,
        unsigned int BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        unsigned int *MemoryInformation,
        SIZE_T MemoryInformationLength)
{
  unsigned int v6; // edi
  int result; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  SIZE_T v13; // [esp-10h] [ebp-18h]
  ULONG_PTR *v14; // [esp-8h] [ebp-10h]
  ULONG_PTR *v15; // [esp+0h] [ebp-8h]

  v6 = BaseAddress & 0xFFFFF000;
  if ( MemoryInformationClass )
    return NtQueryVirtualMemory(
             *(HANDLE *)a2,
             (PVOID)BaseAddress,
             MemoryInformationClass,
             MemoryInformation,
             MemoryInformationLength,
             v15);
  if ( (unsigned int)MemoryInformationLength < 0x1C )
    return -1073741820;
  v8 = *(_DWORD **)(a2 + 4);
  if ( !BaseAddress )
  {
    *(_DWORD *)(a2 + 12) = 0;
    v8[1] = 0;
    return NtQueryVirtualMemory(
             *(HANDLE *)a2,
             0,
             MemoryBasicInformation,
             MemoryInformation,
             MemoryInformationLength,
             a1);
  }
  if ( *(_DWORD *)(a2 + 12) == v8[1] )
  {
    HIDWORD(v13) = HIDWORD(MemoryInformationLength);
    *v8 = 3;
    LODWORD(v13) = *(_DWORD *)(a2 + 8);
    result = ZwPssCaptureVaSpaceBulk(
               *(HANDLE *)a2,
               (PVOID)BaseAddress,
               *(PNTPSS_MEMORY_BULK_INFORMATION *)(a2 + 4),
               v13,
               a1);
    if ( result == -1073741503 || result == -1073741822 )
      return NtQueryVirtualMemory(
               *(HANDLE *)a2,
               (PVOID)BaseAddress,
               MemoryBasicInformation,
               MemoryInformation,
               MemoryInformationLength,
               v14);
    if ( result < 0 )
      return result;
    v6 = BaseAddress & 0xFFFFF000;
    *(_DWORD *)(a2 + 12) = 0;
  }
  if ( HIDWORD(MemoryInformationLength) )
    *(_DWORD *)HIDWORD(MemoryInformationLength) = 0;
  v9 = *(_DWORD *)(a2 + 4);
  if ( !*(_DWORD *)(v9 + 4) )
    return -2147483622;
  v10 = v9 + 28 * *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(v10 + 12);
  if ( BaseAddress >= v11 )
  {
    if ( v6 != v11 )
      return -1073741503;
    qmemcpy(MemoryInformation, (const void *)(v10 + 12), 0x1Cu);
    ++*(_DWORD *)(a2 + 12);
  }
  else
  {
    *MemoryInformation = v6;
    MemoryInformation[1] = 0;
    MemoryInformation[2] = 0;
    v12 = *(_DWORD *)(v10 + 12) - v6;
    MemoryInformation[4] = 0x10000;
    MemoryInformation[3] = v12;
    MemoryInformation[5] = 1;
    MemoryInformation[6] = 0;
  }
  if ( HIDWORD(MemoryInformationLength) )
    *(_DWORD *)HIDWORD(MemoryInformationLength) = 28;
  return 0;
}
