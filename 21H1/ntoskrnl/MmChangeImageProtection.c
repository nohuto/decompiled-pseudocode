/*
 * XREFs of MmChangeImageProtection @ 0x1406EF580
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x140324C48 (MiSetImageProtection.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiSessionReferenceImage @ 0x1403A4534 (MiSessionReferenceImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 Lock; // rbp
  __int64 v10; // rax
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  _QWORD *v24; // r15
  _QWORD *v25; // r13
  ULONG_PTR v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9

  v5 = a2;
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v7 = *(_DWORD *)(a1 + 40);
  if ( (v7 & 0xFFF) != 0 )
    return 3221225485LL;
  v8 = v7 >> 12;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v10 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = a3 + v5;
    v14 = v12 + *(unsigned int *)(v10 + 64);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v14
      || v5 < v12
      || v13 > v14
      || v13 - 1 < v5 )
    {
      v16 = -1073741800;
    }
    else
    {
      v15 = *(_DWORD *)(v11 + 104);
      if ( (v15 & 0x80000) != 0 )
      {
        v16 = -1073741757;
      }
      else
      {
        v16 = 0;
        *(_DWORD *)(v11 + 104) = v15 | 0x80000;
        if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
          MiSessionReferenceImage(v12);
        else
          ++*(_WORD *)(v11 + 108);
      }
    }
  }
  else
  {
    v16 = -1073741275;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock, v17, v18, v19);
  MmReleaseLoadLock(Lock);
  if ( v16 >= 0 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
    {
      v16 = -1073741800;
    }
    else
    {
      v23 = 0;
      v24 = (_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v25 = (_QWORD *)(a1 + 48);
        while ( !MI_PFN_IS_PROTO(48LL * *v25 - 0x58000000000LL) )
        {
          if ( (MiGetPagePrivilege(v26, 0, 0LL) & 0x40) != 0 )
          {
            v16 = -1073741755;
            goto LABEL_44;
          }
          ++v23;
          ++v25;
          if ( v23 >= v8 )
          {
            v5 = a2;
            goto LABEL_26;
          }
        }
        v16 = -1073741800;
      }
      else
      {
LABEL_26:
        MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 1u);
        if ( a4 == 1 )
        {
          v29 = *(_QWORD *)(v11 + 112);
          if ( v29
            && (v30 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v29) + 96) + 40LL), (v30 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v31 = v30 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v31 = 0LL;
          }
          if ( qword_140C1DAF0 )
          {
            v16 = qword_140C1DAF0(v31, a1, v5, a3, v5 - *(_QWORD *)(v11 + 48));
            if ( v16 >= 0 )
            {
              v32 = 3;
              if ( (MiFlags & 0x10000) != 0 && v16 == 300 )
                v32 = 19;
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), v32);
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741822;
          }
        }
        else if ( (MiFlags & 0x10000) != 0 && v8 )
        {
          v33 = v8;
          do
          {
            MiClearPfnImageVerified(48LL * *v24++ - 0x58000000000LL, 24LL, v27, v28);
            --v33;
          }
          while ( v33 );
        }
      }
    }
LABEL_44:
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v11 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock, v34, v35, v36);
    MiUnloadSystemImage(v11);
    MmReleaseLoadLock(Lock);
  }
  KeLeaveCriticalRegionThread(Lock, v20, v21, v22);
  return (unsigned int)v16;
}
