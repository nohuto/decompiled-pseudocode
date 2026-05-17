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

int __stdcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _DWORD *a3, int a4)
{
  wchar_t *v4; // edi
  wchar_t *v5; // ebx
  int v6; // esi
  unsigned int v7; // ecx
  int v8; // edx
  unsigned int i; // edi
  int v10; // eax
  volatile signed __int32 *v11; // eax
  unsigned int v13; // edi
  const wchar_t *v14; // eax
  int Heap; // eax
  int v16; // [esp+18h] [ebp-28h]
  wchar_t *v17; // [esp+20h] [ebp-20h]

  v4 = String2;
  if ( !String2 )
    return -1073741811;
  v5 = 0;
  v17 = 0;
  v6 = -1073741511;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v7 = LoadAsDataTableCount;
  if ( !LoadAsDataTableCount )
    goto LABEL_18;
  if ( (a4 & 0xE00) == 0 )
  {
    v8 = LoadAsDataTable;
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  *a2 = 0;
  v13 = v7;
  v8 = LoadAsDataTable;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_32;
    if ( (a4 & 0x800) != 0 )
    {
      if ( *(wchar_t **)(24 * v13 + v8 - 12) == String2 )
      {
        v5 = *(wchar_t **)(24 * v13 + v8 - 24);
LABEL_31:
        v17 = v5;
        goto LABEL_32;
      }
      goto LABEL_47;
    }
    if ( (a4 & 0x400) != 0 )
    {
      v14 = *(const wchar_t **)(24 * v13 + v8 - 20);
      if ( v14 )
        break;
    }
    if ( (a4 & 0x200) != 0 && *(wchar_t **)(24 * v13 + v8 - 24) == String2 )
    {
      v5 = *(wchar_t **)(24 * v13 + v8 - 24);
      goto LABEL_31;
    }
LABEL_47:
    --v13;
  }
  if ( _wcsicmp(v14, String2) )
  {
    v8 = LoadAsDataTable;
    goto LABEL_47;
  }
  v8 = LoadAsDataTable;
  v5 = *(wchar_t **)(24 * v13 + LoadAsDataTable - 24);
  v17 = v5;
LABEL_32:
  if ( v5 )
    *a2 = v5;
  if ( (a4 & 0x200000) != 0 )
  {
    if ( v5 && a3 )
    {
      *a3 = *(_DWORD *)(24 * v13 + v8 - 16);
      if ( (a4 & 0x40000) != 0 )
        ++*(_DWORD *)(24 * v13 + v8 - 8);
      v6 = 0;
    }
    goto LABEL_18;
  }
  if ( v5 )
  {
    if ( (int)--*(_DWORD *)(24 * v13 + v8 - 8) > 0 )
    {
      v6 = -1073740024;
      goto LABEL_18;
    }
  }
  v4 = String2;
  v7 = LoadAsDataTableCount;
LABEL_5:
  if ( !v5 )
  {
    v5 = v4;
    v17 = v4;
  }
  for ( i = v7; i; --i )
  {
    v10 = 24 * i;
    v16 = 24 * i;
    if ( *(wchar_t **)(24 * i + v8 - 24) == v5 )
    {
      if ( *(_DWORD *)(v10 + v8 - 20) )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v10 + v8 - 20));
        v8 = LoadAsDataTable;
        v10 = 24 * i;
        *(_DWORD *)(v16 + LoadAsDataTable - 20) = 0;
        v5 = v17;
        v7 = LoadAsDataTableCount;
      }
      v11 = *(volatile signed __int32 **)(v10 + v8 - 4);
      if ( v11 && v11 != (volatile signed __int32 *)-1 )
      {
        RtlReleaseActivationContext(v11);
        v8 = LoadAsDataTable;
        *(_DWORD *)(v16 + LoadAsDataTable - 4) = 0;
        v7 = LoadAsDataTableCount;
      }
      if ( i != v7 )
      {
        qmemcpy((void *)(v8 + v16 - 24), (const void *)(24 * v7 + v8 - 24), 0x18u);
        v7 = LoadAsDataTableCount;
      }
      LoadAsDataTableCount = --v7;
      if ( v7 < LoadAsDataTableBlockCount - 32 )
      {
        Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8, 24 * (LoadAsDataTableBlockCount - 32));
        v8 = Heap;
        if ( !Heap )
        {
          v6 = -1073741801;
          break;
        }
        LoadAsDataTable = Heap;
        LoadAsDataTableBlockCount -= 32;
        v5 = v17;
        v7 = LoadAsDataTableCount;
      }
      v6 = 0;
    }
  }
LABEL_18:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v6;
}
