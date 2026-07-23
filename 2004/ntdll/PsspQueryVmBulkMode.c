/*
 * XREFs of PsspQueryVmBulkMode @ 0x180115670
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     NtPssCaptureVaSpaceBulk @ 0x18009F580 (NtPssCaptureVaSpaceBulk.c)
 */

int __fastcall PsspQueryVmBulkMode(
        __int64 a1,
        unsigned __int64 a2,
        MEMORY_INFORMATION_CLASS a3,
        _OWORD *a4,
        SIZE_T a5,
        PSIZE_T ReturnLength)
{
  _OWORD *v6; // rbx
  unsigned __int64 v7; // rbp
  int result; // eax
  _DWORD *v11; // rcx
  void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  ULONG_PTR *v16; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 )
    return ZwQueryVirtualMemory(*(HANDLE *)a1, (PVOID)a2, a3, a4, a5, ReturnLength);
  if ( a5 < 0x30 )
    return -1073741820;
  v11 = *(_DWORD **)(a1 + 8);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    v11[1] = 0;
    v12 = 0LL;
    v16 = ReturnLength;
    return ZwQueryVirtualMemory(*(HANDLE *)a1, v12, MemoryBasicInformation, a4, a5, v16);
  }
  if ( *(_DWORD *)(a1 + 24) == v11[1] )
  {
    *v11 = 3;
    result = NtPssCaptureVaSpaceBulk(
               *(HANDLE *)a1,
               (PVOID)a2,
               *(PNTPSS_MEMORY_BULK_INFORMATION *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               ReturnLength);
    if ( result == -1073741503 || result == -1073741822 )
    {
      v16 = ReturnLength;
      a4 = v6;
      v12 = (void *)a2;
      return ZwQueryVirtualMemory(*(HANDLE *)a1, v12, MemoryBasicInformation, a4, a5, v16);
    }
    if ( result < 0 )
      return result;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( ReturnLength )
    *ReturnLength = 0LL;
  v13 = *(_QWORD *)(a1 + 8);
  if ( !*(_DWORD *)(v13 + 4) )
    return -2147483622;
  v14 = *(unsigned int *)(a1 + 24);
  if ( a2 >= *(_QWORD *)(v13 + 48 * v14 + 16) )
  {
    if ( v7 != *(_QWORD *)(v13 + 48 * v14 + 16) )
      return -1073741503;
    *v6 = *(_OWORD *)(v13 + 48 * v14 + 16);
    v6[1] = *(_OWORD *)(v13 + 48 * v14 + 32);
    v6[2] = *(_OWORD *)(v13 + 48 * v14 + 48);
    ++*(_DWORD *)(a1 + 24);
  }
  else
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    *(_QWORD *)v6 = v7;
    v15 = *(_QWORD *)(v13 + 48 * v14 + 16) - v7;
    *((_DWORD *)v6 + 8) = 0x10000;
    *((_DWORD *)v6 + 10) = 0;
    *((_QWORD *)v6 + 3) = v15;
    *((_DWORD *)v6 + 9) = 1;
  }
  if ( ReturnLength )
    *ReturnLength = 48LL;
  return 0;
}
