/*
 * XREFs of _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366
 * Callers:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrSetMUICacheType@4 @ 0x4B33F2D0 (_LdrSetMUICacheType@4.c)
 * Callees:
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpSpecialCacheTypeHandle@8 @ 0x4B33FA35 (_LdrpSpecialCacheTypeHandle@8.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        int a1,
        _DWORD *a2,
        HANDLE *a3,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edx
  HANDLE v9; // edi
  unsigned int i; // esi
  char *v11; // ecx
  unsigned int v12; // esi
  int v13; // edx
  char *v14; // ecx
  PIMAGE_NT_HEADERS v15; // eax
  int v16; // edx
  char *v17; // ecx
  PVOID v19; // eax
  int v20; // eax
  char *v21; // edx
  PVOID Heap; // eax
  int v23; // esi
  SIZE_T v24; // [esp-4h] [ebp-44h]
  int v25; // [esp+14h] [ebp-2Ch]
  int v26; // [esp+14h] [ebp-2Ch]
  DWORD CheckSum; // [esp+14h] [ebp-2Ch]

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= AlternateResourceModuleCount )
      goto LABEL_10;
    v25 = 32 * i;
    v11 = (char *)AlternateResourceModules + 32 * i;
    if ( *((_DWORD *)v11 + 1) != a1 )
    {
      if ( (a6 & 0x10) != 0 && gMUICacheType && *((_DWORD *)v11 + 5) && *((_DWORD *)v11 + 5) != -1 )
      {
        LOBYTE(v8) = 0;
        LdrpSpecialCacheTypeHandle(v11, v8);
      }
      continue;
    }
    if ( (a6 & 2) != 0 && *((_DWORD *)v11 + 2) )
      goto LABEL_22;
    if ( (a6 & 1) != 0 && *((_DWORD *)v11 + 4) && a5 && *(_WORD *)v11 == a5 )
      break;
  }
  if ( *a2 == -1 )
  {
LABEL_57:
    v21 = (char *)AlternateResourceModules;
    *a2 = *(_DWORD *)((char *)AlternateResourceModules + v25 + 16);
    if ( a3 )
      *a3 = *(HANDLE *)&v21[v25 + 20];
    goto LABEL_22;
  }
  if ( (a6 & 0x20) == 0 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)(*a2 & 0xFFFFFFFC));
    if ( a3 )
      NtClose(*a3);
    goto LABEL_57;
  }
  if ( *((_DWORD *)v11 + 4) == -1 )
    *((_DWORD *)v11 + 4) = 0;
LABEL_10:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_22;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      LODWORD(v24) = 32 * (AltResMemBlockCount + 32);
      Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, AlternateResourceModules, v24);
      if ( !Heap )
        goto LABEL_22;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    LODWORD(v24) = 1024;
    v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v24);
    if ( !v19 )
      goto LABEL_22;
    AlternateResourceModules = v19;
    AltResMemBlockCount = 32;
  }
  v12 = 0;
  v13 = a1;
  while ( v12 < AlternateResourceModuleCount )
  {
    v26 = 32 * v12;
    v14 = (char *)AlternateResourceModules + 32 * v12;
    if ( *((_DWORD *)v14 + 1) == a1 )
    {
      if ( (a6 & 2) != 0 && !*((_DWORD *)v14 + 2) )
      {
        *((_DWORD *)v14 + 2) = a4;
        *((_DWORD *)v14 + 7) = a7;
        goto LABEL_22;
      }
      if ( (a6 & 1) != 0 && !*((_DWORD *)v14 + 4) && (*(_WORD *)v14 == a5 || !*(_WORD *)v14) )
      {
        *((_DWORD *)v14 + 4) = *a2;
        if ( a3 )
          v9 = *a3;
        *((_DWORD *)v14 + 5) = v9;
        *(_WORD *)v14 = a5;
        *((_DWORD *)v14 + 7) = a7;
        *((_DWORD *)v14 + 6) = a8;
        if ( gMUICacheType )
        {
          LOBYTE(v13) = 1;
          if ( LdrpSpecialCacheTypeHandle(v14, v13) >= 0
            && (gMUICacheType & 2) != 0
            && *(_DWORD *)((char *)AlternateResourceModules + v26 + 28) == -1073741799 )
          {
            *a2 = *(_DWORD *)((char *)AlternateResourceModules + v26 + 16);
          }
        }
        goto LABEL_22;
      }
    }
    ++v12;
  }
  v15 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFC));
  if ( v15 )
  {
    CheckSum = v15->OptionalHeader.CheckSum;
    v16 = 32 * AlternateResourceModuleCount;
    v17 = (char *)AlternateResourceModules;
    *(_DWORD *)((char *)AlternateResourceModules + v16 + 4) = a1;
    *(_DWORD *)&v17[v16 + 8] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v20 = *a2;
      else
        v20 = 0;
      *(_DWORD *)&v17[v16 + 16] = v20;
      if ( a3 )
        v9 = *a3;
      *(_DWORD *)&v17[v16 + 20] = v9;
      *(_DWORD *)&v17[v16 + 24] = a8;
    }
    else
    {
      *(_DWORD *)&v17[v16 + 16] = 0;
      *(_DWORD *)&v17[v16 + 20] = 0;
      *(_DWORD *)&v17[v16 + 24] = 0;
    }
    *(_WORD *)&v17[v16] = a5;
    *(_DWORD *)&v17[v16 + 12] = CheckSum;
    *(_DWORD *)&v17[v16 + 28] = a7;
    if ( gMUICacheType )
    {
      if ( (a6 & 1) != 0 )
      {
        v23 = 32 * v12;
        LOBYTE(v16) = 1;
        if ( LdrpSpecialCacheTypeHandle(&v17[v23], v16) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)((char *)AlternateResourceModules + v23 + 28) == -1073741799 )
        {
          *a2 = *(_DWORD *)((char *)AlternateResourceModules + v23 + 16);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_22:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
