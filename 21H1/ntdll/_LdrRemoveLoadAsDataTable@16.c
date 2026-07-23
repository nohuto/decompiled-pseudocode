/*
 * XREFs of _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980
 * Callers:
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrResRelease@12 @ 0x4B342E00 (_LdrResRelease@12.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrpInitMuiCrits@8 @ 0x4B2B8C84 (_LdrpInitMuiCrits@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl LdrRemoveLoadAsDataTable(PVOID InitModule, PVOID *BaseModule, PSIZE_T Size, ULONG Flags)
{
  PVOID v4; // edi
  void *v5; // ebx
  NTSTATUS v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // edx
  unsigned int i; // edi
  int v10; // eax
  _ACTIVATION_CONTEXT *v11; // eax
  unsigned int v13; // edi
  const wchar_t *v14; // eax
  _DWORD *Heap; // eax
  SIZE_T v16; // [esp-4h] [ebp-44h]
  int v17; // [esp+18h] [ebp-28h]
  PVOID v18; // [esp+20h] [ebp-20h]

  v4 = InitModule;
  if ( !InitModule )
    return -1073741811;
  v5 = 0;
  v18 = 0;
  v6 = -1073741511;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v7 = LoadAsDataTableCount;
  if ( !LoadAsDataTableCount )
    goto LABEL_18;
  if ( (Flags & 0xE00) == 0 )
  {
    v8 = LoadAsDataTable;
    goto LABEL_5;
  }
  if ( !BaseModule )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  *BaseModule = 0;
  v13 = v7;
  v8 = LoadAsDataTable;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_32;
    if ( (Flags & 0x800) != 0 )
    {
      if ( (PVOID)v8[6 * v13 - 3] == InitModule )
      {
        v5 = (void *)v8[6 * v13 - 6];
LABEL_31:
        v18 = v5;
        goto LABEL_32;
      }
      goto LABEL_47;
    }
    if ( (Flags & 0x400) != 0 )
    {
      v14 = (const wchar_t *)v8[6 * v13 - 5];
      if ( v14 )
        break;
    }
    if ( (Flags & 0x200) != 0 && (PVOID)v8[6 * v13 - 6] == InitModule )
    {
      v5 = (void *)v8[6 * v13 - 6];
      goto LABEL_31;
    }
LABEL_47:
    --v13;
  }
  if ( _wcsicmp(v14, (const wchar_t *)InitModule) )
  {
    v8 = LoadAsDataTable;
    goto LABEL_47;
  }
  v8 = LoadAsDataTable;
  v5 = (void *)*((_DWORD *)LoadAsDataTable + 6 * v13 - 6);
  v18 = v5;
LABEL_32:
  if ( v5 )
    *BaseModule = v5;
  if ( (Flags & 0x200000) != 0 )
  {
    if ( v5 && Size )
    {
      *(_DWORD *)Size = v8[6 * v13 - 4];
      if ( (Flags & 0x40000) != 0 )
        ++v8[6 * v13 - 2];
      v6 = 0;
    }
    goto LABEL_18;
  }
  if ( v5 )
  {
    if ( (int)--v8[6 * v13 - 2] > 0 )
    {
      v6 = -1073740024;
      goto LABEL_18;
    }
  }
  v4 = InitModule;
  v7 = LoadAsDataTableCount;
LABEL_5:
  if ( !v5 )
  {
    v5 = v4;
    v18 = v4;
  }
  for ( i = v7; i; --i )
  {
    v10 = 6 * i;
    v17 = 24 * i;
    if ( (void *)v8[6 * i - 6] == v5 )
    {
      if ( v8[v10 - 5] )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v8[v10 - 5]);
        v8 = LoadAsDataTable;
        v10 = 6 * i;
        *(_DWORD *)((char *)LoadAsDataTable + v17 - 20) = 0;
        v5 = v18;
        v7 = LoadAsDataTableCount;
      }
      v11 = (_ACTIVATION_CONTEXT *)v8[v10 - 1];
      if ( v11 && v11 != (_ACTIVATION_CONTEXT *)-1 )
      {
        RtlReleaseActivationContext(v11);
        v8 = LoadAsDataTable;
        *(_DWORD *)((char *)LoadAsDataTable + v17 - 4) = 0;
        v7 = LoadAsDataTableCount;
      }
      if ( i != v7 )
      {
        qmemcpy(&v8[v17 / 4u - 6], &v8[6 * v7 - 6], 0x18u);
        v7 = LoadAsDataTableCount;
      }
      LoadAsDataTableCount = --v7;
      if ( v7 < LoadAsDataTableBlockCount - 32 )
      {
        LODWORD(v16) = 24 * (LoadAsDataTableBlockCount - 32);
        Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8, v16);
        v8 = Heap;
        if ( !Heap )
        {
          v6 = -1073741801;
          break;
        }
        LoadAsDataTable = Heap;
        LoadAsDataTableBlockCount -= 32;
        v5 = v18;
        v7 = LoadAsDataTableCount;
      }
      v6 = 0;
    }
  }
LABEL_18:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}
