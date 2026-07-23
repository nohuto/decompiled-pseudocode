/*
 * XREFs of _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0
 * Callers:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 * Callees:
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrLogNewDataDllLoad@8 @ 0x4B2B8C39 (_LdrLogNewDataDllLoad@8.c)
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  PVOID v5; // esi
  unsigned int v6; // edi
  PVOID *v7; // edx
  PWSTR v8; // edi
  unsigned int v9; // kr00_4
  PVOID v10; // eax
  int v11; // ecx
  PVOID *Heap; // eax
  PVOID *v14; // eax
  SIZE_T v15; // [esp-4h] [ebp-38h]
  size_t v16; // [esp-4h] [ebp-38h]
  NTSTATUS v17; // [esp+18h] [ebp-1Ch]

  v5 = 0;
  v17 = 0;
  if ( !Module )
    return -1073741811;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v6 = 0;
  v7 = (PVOID *)LoadAsDataTable;
  while ( v6 < LoadAsDataTableCount )
  {
    if ( v7[6 * v6] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0, 0, 0);
      v7 = (PVOID *)LoadAsDataTable;
    }
    ++v6;
  }
  if ( !v7 )
  {
    LODWORD(v15) = 768;
    Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15);
    v7 = Heap;
    if ( Heap )
    {
      LoadAsDataTable = Heap;
      LoadAsDataTableBlockCount = 32;
      goto LABEL_6;
    }
LABEL_20:
    v17 = -1073741801;
    v8 = FilePath;
    goto LABEL_10;
  }
  if ( LoadAsDataTableCount >= (unsigned int)LoadAsDataTableBlockCount )
  {
    LODWORD(v15) = 24 * (LoadAsDataTableBlockCount + 32);
    v14 = (PVOID *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7, v15);
    v7 = v14;
    if ( v14 )
    {
      LoadAsDataTable = v14;
      LoadAsDataTableBlockCount += 32;
      goto LABEL_6;
    }
    goto LABEL_20;
  }
LABEL_6:
  v8 = FilePath;
  if ( FilePath )
  {
    v9 = wcslen((const unsigned __int16 *)FilePath);
    LODWORD(v15) = 2 * v9 + 2;
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v15);
    v5 = v10;
    if ( !v10 )
    {
      v17 = -1073741801;
      goto LABEL_10;
    }
    LODWORD(v16) = 2 * v9;
    memcpy(v10, FilePath, v16);
    v7 = (PVOID *)LoadAsDataTable;
  }
  v11 = 6 * LoadAsDataTableCount;
  v7[v11] = Module;
  v7[v11 + 1] = v5;
  *(_QWORD *)&v7[v11 + 2] = Size;
  v7[v11 + 4] = (PVOID)1;
  v7[v11 + 5] = Handle;
  ++LoadAsDataTableCount;
LABEL_10:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v17 >= 0 )
  {
    if ( v8 )
      LdrLogNewDataDllLoad(Module, v8);
  }
  return v17;
}
