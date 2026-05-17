/*
 * XREFs of PsspQueryVmBulkMode @ 0x180115B80
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D510 (ZwQueryVirtualMemory.c)
 *     NtPssCaptureVaSpaceBulk @ 0x18009F820 (NtPssCaptureVaSpaceBulk.c)
 */

__int64 __fastcall PsspQueryVmBulkMode(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 )
    return ZwQueryVirtualMemory();
  if ( a5 < 0x30 )
    return 3221225476LL;
  v11 = *(_DWORD **)(a1 + 8);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    v11[1] = 0;
    return ZwQueryVirtualMemory();
  }
  if ( *(_DWORD *)(a1 + 24) == v11[1] )
  {
    *v11 = 3;
    result = NtPssCaptureVaSpaceBulk();
    if ( (_DWORD)result == -1073741503 || (_DWORD)result == -1073741822 )
      return ZwQueryVirtualMemory();
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( a6 )
    *a6 = 0LL;
  v12 = *(_QWORD *)(a1 + 8);
  if ( !*(_DWORD *)(v12 + 4) )
    return 2147483674LL;
  v13 = *(unsigned int *)(a1 + 24);
  if ( a2 >= *(_QWORD *)(v12 + 48 * v13 + 16) )
  {
    if ( v7 != *(_QWORD *)(v12 + 48 * v13 + 16) )
      return 3221225793LL;
    *(_OWORD *)a4 = *(_OWORD *)(v12 + 48 * v13 + 16);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(v12 + 48 * v13 + 32);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)(v12 + 48 * v13 + 48);
    ++*(_DWORD *)(a1 + 24);
  }
  else
  {
    *(_QWORD *)(a4 + 8) = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)a4 = v7;
    v14 = *(_QWORD *)(v12 + 48 * v13 + 16) - v7;
    *(_DWORD *)(a4 + 32) = 0x10000;
    *(_DWORD *)(a4 + 40) = 0;
    *(_QWORD *)(a4 + 24) = v14;
    *(_DWORD *)(a4 + 36) = 1;
  }
  if ( a6 )
    *a6 = 48LL;
  return 0LL;
}
