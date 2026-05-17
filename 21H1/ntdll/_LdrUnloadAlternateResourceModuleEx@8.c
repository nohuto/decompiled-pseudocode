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

char __stdcall LdrUnloadAlternateResourceModuleEx(int a1, __int16 a2)
{
  char v2; // bl
  unsigned int v3; // esi
  int v4; // edi
  int Heap; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // [esp-4h] [ebp-44h]
  int v11; // [esp+1Ch] [ebp-24h]
  int v12; // [esp+20h] [ebp-20h]

  v2 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v4 = AlternateResourceModuleCount;
    v11 = AlternateResourceModuleCount;
    Heap = AlternateResourceModules;
    v12 = AlternateResourceModules;
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_7;
      if ( *(_DWORD *)(32 * v4 + Heap - 28) == a1 )
        break;
LABEL_6:
      v11 = --v4;
    }
    v7 = 32 * v4 + Heap - 32;
    v8 = *(_DWORD *)(v7 + 16);
    if ( !v8 || a2 && a2 != *(_WORD *)v7 || v8 == -1 )
    {
      v9 = v12;
    }
    else
    {
      v10 = v8 & 0xFFFFFFFC;
      if ( *(_DWORD *)(v7 + 28) == -1073741799 )
      {
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v10);
        v4 = v11;
      }
      else
      {
        NtUnmapViewOfSection(-1, v10);
      }
      if ( *(_DWORD *)(v7 + 20) )
      {
        NtClose(*(HANDLE *)(v7 + 20));
        *(_DWORD *)(v7 + 20) = 0;
      }
      *(_DWORD *)(v7 + 16) = 0;
      v3 = AlternateResourceModuleCount;
      v9 = AlternateResourceModules;
      v12 = AlternateResourceModules;
    }
    if ( v4 != v3 )
      LdrpRemoveAlternateModuleCacheItem(v4 - 1);
    AlternateResourceModuleCount = --v3;
    if ( v3 )
    {
      if ( v3 >= AltResMemBlockCount - 32 )
      {
        Heap = v12;
LABEL_21:
        v2 = 1;
        goto LABEL_6;
      }
      Heap = RtlReAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v9, 32 * (AltResMemBlockCount - 32));
      v12 = Heap;
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
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v9);
      Heap = 0;
      v12 = 0;
      AlternateResourceModules = 0;
      AltResMemBlockCount = 0;
    }
    v4 = v11;
    v3 = AlternateResourceModuleCount;
    goto LABEL_21;
  }
  v2 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v2;
}
