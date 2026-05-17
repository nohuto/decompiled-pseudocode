/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC
 * Callers:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18008C5E0 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E1698 (LdrpSpecialCacheTypeHandle.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        _QWORD *a2,
        HANDLE *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v11; // edi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned int j; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  HANDLE v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  HANDLE v26; // rax
  __int64 v27; // rcx
  __int64 Heap; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  unsigned int i; // [rsp+20h] [rbp-38h]

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v11 = 0;
  for ( i = 0; ; i = v11 )
  {
    if ( v11 >= AlternateResourceModuleCount )
      goto LABEL_10;
    v12 = (unsigned __int64)v11 << 6;
    v13 = v12 + AlternateResourceModules;
    if ( *(_QWORD *)(v12 + AlternateResourceModules + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0 && gMUICacheType && (unsigned __int64)(*(_QWORD *)(v13 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        LdrpSpecialCacheTypeHandle(v13, 0LL);
      goto LABEL_9;
    }
    if ( (a6 & 2) != 0 && *(_QWORD *)(v13 + 16) )
      goto LABEL_73;
    if ( (a6 & 1) != 0 && *(_QWORD *)(v13 + 32) && a5 && *(_WORD *)v13 == a5 )
      break;
LABEL_9:
    ++v11;
  }
  if ( *a2 == -1LL )
  {
LABEL_50:
    v27 = AlternateResourceModules;
    *a2 = *(_QWORD *)(v12 + AlternateResourceModules + 32);
    if ( a3 )
      *a3 = *(HANDLE *)(v12 + v27 + 40);
    goto LABEL_73;
  }
  if ( (a6 & 0x20) == 0 )
  {
    NtUnmapViewOfSection(-1LL, *a2 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( a3 )
      NtClose(*a3);
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v13 + 32) == -1LL )
    *(_QWORD *)(v13 + 32) = 0LL;
LABEL_10:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_73;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8LL,
               AlternateResourceModules,
               (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6,
               i);
      if ( !Heap )
        goto LABEL_73;
      AlternateResourceModules = Heap;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 2048LL);
    if ( !v24 )
      goto LABEL_73;
    AlternateResourceModules = v24;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    v15 = (unsigned __int64)j << 6;
    v16 = AlternateResourceModules;
    if ( *(_QWORD *)(v15 + AlternateResourceModules + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)(v15 + AlternateResourceModules + 16) )
      {
        *(_QWORD *)(v15 + AlternateResourceModules + 16) = a4;
        *(_DWORD *)(v15 + v16 + 56) = a7;
        goto LABEL_73;
      }
      if ( (a6 & 1) != 0 )
      {
        v21 = (unsigned __int64)j << 6;
        v22 = v21 + AlternateResourceModules;
        if ( !*(_QWORD *)(v21 + AlternateResourceModules + 32) && (!*(_WORD *)v22 || *(_WORD *)v22 == a5) )
        {
          *(_QWORD *)(v22 + 32) = *a2;
          if ( a3 )
            v23 = *a3;
          else
            v23 = 0LL;
          *(_QWORD *)(v22 + 40) = v23;
          *(_WORD *)v22 = a5;
          *(_DWORD *)(v22 + 56) = a7;
          *(_QWORD *)(v22 + 48) = a8;
          if ( gMUICacheType )
          {
            LOBYTE(v16) = 1;
            if ( (int)LdrpSpecialCacheTypeHandle(v22, v16) >= 0
              && (gMUICacheType & 2) != 0
              && *(_DWORD *)(v21 + AlternateResourceModules + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)(v21 + AlternateResourceModules + 32);
            }
          }
          goto LABEL_73;
        }
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 88);
    v19 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v20 = AlternateResourceModules;
    *(_QWORD *)(v19 + AlternateResourceModules + 8) = a1;
    *(_QWORD *)(v19 + v20 + 16) = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v25 = *a2;
      else
        v25 = 0LL;
      *(_QWORD *)(v19 + v20 + 32) = v25;
      if ( a3 )
        v26 = *a3;
      else
        v26 = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = v26;
      *(_QWORD *)(v19 + v20 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v19 + v20 + 32) = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = 0LL;
      *(_QWORD *)(v19 + v20 + 48) = 0LL;
    }
    *(_WORD *)(v19 + v20) = a5;
    *(_DWORD *)(v19 + v20 + 24) = v18;
    *(_DWORD *)(v19 + v20 + 56) = a7;
    if ( gMUICacheType )
    {
      if ( (a6 & 1) != 0 )
      {
        v29 = (unsigned __int64)j << 6;
        v30 = v29 + v20;
        LOBYTE(v20) = 1;
        if ( (int)LdrpSpecialCacheTypeHandle(v30, v20) >= 0
          && (gMUICacheType & 2) != 0
          && *(_DWORD *)(v29 + AlternateResourceModules + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)(v29 + AlternateResourceModules + 32);
        }
      }
    }
    ++AlternateResourceModuleCount;
  }
LABEL_73:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return 1;
}
