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

int __stdcall LdrAddLoadAsDataTable(wchar_t *String2, const unsigned __int16 *Src, int a3, int a4, int a5)
{
  void *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  const unsigned __int16 *v8; // edi
  unsigned int v9; // kr00_4
  void *v10; // eax
  int v11; // ecx
  int Heap; // eax
  int v14; // eax
  int v15; // [esp+18h] [ebp-1Ch]

  v5 = 0;
  v15 = 0;
  if ( !String2 )
    return -1073741811;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v6 = 0;
  v7 = LoadAsDataTable;
  while ( v6 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(24 * v6 + v7) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2, 0, 0, 0);
      v7 = LoadAsDataTable;
    }
    ++v6;
  }
  if ( !v7 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, 768);
    v7 = Heap;
    if ( Heap )
    {
      LoadAsDataTable = Heap;
      LoadAsDataTableBlockCount = 32;
      goto LABEL_6;
    }
LABEL_20:
    v15 = -1073741801;
    v8 = Src;
    goto LABEL_10;
  }
  if ( LoadAsDataTableCount >= (unsigned int)LoadAsDataTableBlockCount )
  {
    v14 = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7, 24 * (LoadAsDataTableBlockCount + 32));
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
  v8 = Src;
  if ( Src )
  {
    v9 = wcslen(Src);
    v10 = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, 2 * v9 + 2);
    v5 = v10;
    if ( !v10 )
    {
      v15 = -1073741801;
      goto LABEL_10;
    }
    memcpy(v10, Src, 2 * v9);
    v7 = LoadAsDataTable;
  }
  v11 = 24 * LoadAsDataTableCount;
  *(_DWORD *)(v11 + v7) = String2;
  *(_DWORD *)(v11 + v7 + 4) = v5;
  *(_DWORD *)(v11 + v7 + 8) = a3;
  *(_DWORD *)(v11 + v7 + 12) = a4;
  *(_DWORD *)(v11 + v7 + 16) = 1;
  *(_DWORD *)(v11 + v7 + 20) = a5;
  ++LoadAsDataTableCount;
LABEL_10:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v15 >= 0 )
  {
    if ( v8 )
      LdrLogNewDataDllLoad(String2, v8);
  }
  return v15;
}
