/*
 * XREFs of _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360
 * Callers:
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _LdrUnloadAlternateResourceModule@4 @ 0x4B2DA340 (_LdrUnloadAlternateResourceModule@4.c)
 *     _LdrResRelease@12 @ 0x4B342E00 (_LdrResRelease@12.c)
 * Callees:
 *     _LdrpRemoveAlternateModuleCacheItem@4 @ 0x4B2AB60E (_LdrpRemoveAlternateModuleCacheItem@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v2; // bl
  unsigned int v3; // esi
  int v4; // edi
  PVOID *Heap; // eax
  int v7; // ebx
  int v8; // eax
  PVOID *v9; // ebx
  SIZE_T v10; // [esp-4h] [ebp-44h]
  void *v11; // [esp-4h] [ebp-44h]
  int v12; // [esp+1Ch] [ebp-24h]
  PVOID *v13; // [esp+20h] [ebp-20h]

  v2 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v4 = AlternateResourceModuleCount;
    v12 = AlternateResourceModuleCount;
    Heap = (PVOID *)AlternateResourceModules;
    v13 = (PVOID *)AlternateResourceModules;
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_7;
      if ( Heap[8 * v4 - 7] == DllHandle )
        break;
LABEL_6:
      v12 = --v4;
    }
    v7 = (int)&Heap[8 * v4 - 8];
    v8 = *(_DWORD *)(v7 + 16);
    if ( !v8 || (_WORD)Flags && (_WORD)Flags != *(_WORD *)v7 || v8 == -1 )
    {
      v9 = v13;
    }
    else
    {
      v11 = (void *)(v8 & 0xFFFFFFFC);
      if ( *(_DWORD *)(v7 + 28) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v4 = v12;
      }
      else
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v11);
      }
      if ( *(_DWORD *)(v7 + 20) )
      {
        NtClose(*(HANDLE *)(v7 + 20));
        *(_DWORD *)(v7 + 20) = 0;
      }
      *(_DWORD *)(v7 + 16) = 0;
      v3 = AlternateResourceModuleCount;
      v9 = (PVOID *)AlternateResourceModules;
      v13 = (PVOID *)AlternateResourceModules;
    }
    if ( v4 != v3 )
      LdrpRemoveAlternateModuleCacheItem(v4 - 1);
    AlternateResourceModuleCount = --v3;
    if ( v3 )
    {
      if ( v3 >= AltResMemBlockCount - 32 )
      {
        Heap = v13;
LABEL_21:
        v2 = 1;
        goto LABEL_6;
      }
      LODWORD(v10) = 32 * (AltResMemBlockCount - 32);
      Heap = (PVOID *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v9, v10);
      v13 = Heap;
      if ( !Heap )
      {
        v2 = 0;
        goto LABEL_7;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      Heap = 0;
      v13 = 0;
      AlternateResourceModules = 0;
      AltResMemBlockCount = 0;
    }
    v4 = v12;
    v3 = AlternateResourceModuleCount;
    goto LABEL_21;
  }
  v2 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v2;
}
