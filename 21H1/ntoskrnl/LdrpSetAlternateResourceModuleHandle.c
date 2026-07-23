/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x14037C27C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14033A250 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x14033C1FC (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x14077748C (LdrResGetRCConfig.c)
 * Callees:
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     LdrpInitMuiCrits @ 0x14033A660 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        PVOID *a2,
        HANDLE *a3,
        _DWORD *a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  HANDLE v10; // rdi
  unsigned int i; // eax
  unsigned __int64 v12; // rbx
  char *v13; // rcx
  char *v14; // rsi
  unsigned int j; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int16 v18; // dx
  PIMAGE_NT_HEADERS v19; // rax
  unsigned int CheckSum; // r9d
  int v21; // r8d
  unsigned __int64 v22; // rcx
  char *v23; // rdx
  PVOID v24; // rax
  char *v25; // rax
  char *PoolWithTag; // rax
  unsigned int v27; // ebx

  v10 = 0LL;
  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  LdrpInitMuiCrits(a1, (__int64)a2, (__int64)a3, a4);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = 0; i < AlternateResourceModuleCount; ++i )
  {
    v12 = (unsigned __int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v12 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && *(_QWORD *)((char *)AlternateResourceModules + v12 + 16) )
        goto LABEL_53;
      if ( (a6 & 1) != 0
        && *((_QWORD *)AlternateResourceModules + 8 * (unsigned __int64)i + 4)
        && a5
        && *(_WORD *)((char *)AlternateResourceModules + v12) == a5 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v13 = (char *)AlternateResourceModules;
        *a2 = *(PVOID *)((char *)AlternateResourceModules + v12 + 32);
        if ( a3 )
          *a3 = *(HANDLE *)&v13[v12 + 40];
        goto LABEL_53;
      }
    }
  }
  if ( (a6 & 0x10) != 0 )
    goto LABEL_53;
  v14 = (char *)AlternateResourceModules;
  if ( AlternateResourceModules )
  {
    if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              PagedPool,
                              (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6,
                              0x69507472u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_53;
      v27 = AltResMemBlockCount;
      memset(PoolWithTag, 0, (unsigned __int64)(unsigned int)(AltResMemBlockCount + 32) << 6);
      memmove(v14, AlternateResourceModules, (unsigned __int64)v27 << 6);
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = v14;
      AltResMemBlockCount += 32;
    }
  }
  else
  {
    v25 = (char *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x69507472u);
    v14 = v25;
    if ( !v25 )
      goto LABEL_53;
    memset(v25, 0, 0x800uLL);
    AlternateResourceModules = v14;
    AltResMemBlockCount = 32;
  }
  for ( j = 0; j < AlternateResourceModuleCount; ++j )
  {
    v16 = (unsigned __int64)j << 6;
    if ( *(_QWORD *)&v14[v16 + 8] == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)&v14[v16 + 16] )
      {
        *(_QWORD *)&v14[v16 + 16] = a4;
        *(_DWORD *)&v14[v16 + 56] = a7;
        goto LABEL_53;
      }
      if ( (a6 & 1) != 0 )
      {
        v17 = (unsigned __int64)j << 6;
        if ( !*(_QWORD *)&v14[v17 + 32] )
        {
          v18 = *(_WORD *)&v14[v17];
          if ( v18 == a5 || !v18 )
          {
            *(_QWORD *)&v14[v17 + 32] = *a2;
            if ( a3 )
              v10 = *a3;
            *(_QWORD *)&v14[v17 + 40] = v10;
            *(_WORD *)&v14[v17] = a5;
            *(_DWORD *)&v14[v17 + 56] = a7;
            *(_QWORD *)&v14[v17 + 48] = a8;
            goto LABEL_53;
          }
        }
      }
    }
  }
  v19 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v19 )
  {
    CheckSum = v19->OptionalHeader.CheckSum;
    v21 = AlternateResourceModuleCount;
    v22 = (unsigned __int64)(unsigned int)AlternateResourceModuleCount << 6;
    v23 = (char *)AlternateResourceModules;
    *(_QWORD *)((char *)AlternateResourceModules + v22 + 8) = a1;
    *(_QWORD *)&v23[v22 + 16] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v24 = *a2;
      else
        v24 = 0LL;
      *(_QWORD *)&v23[v22 + 32] = v24;
      if ( a3 )
        v10 = *a3;
      *(_QWORD *)&v23[v22 + 40] = v10;
      *(_QWORD *)&v23[v22 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v23[v22 + 32] = 0LL;
      *(_QWORD *)&v23[v22 + 40] = 0LL;
      *(_QWORD *)&v23[v22 + 48] = 0LL;
    }
    *(_WORD *)&v23[v22] = a5;
    *(_DWORD *)&v23[v22 + 24] = CheckSum;
    *(_DWORD *)&v23[v22 + 56] = a7;
    AlternateResourceModuleCount = v21 + 1;
  }
LABEL_53:
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  return 1;
}
