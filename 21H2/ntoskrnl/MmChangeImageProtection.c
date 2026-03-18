/*
 * XREFs of MmChangeImageProtection @ 0x1406F5800
 * Callers:
 *     <none>
 * Callees:
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiSetImageProtection @ 0x14027E128 (MiSetImageProtection.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     MiSessionReferenceImage @ 0x1402DC164 (MiSessionReferenceImage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_PFN_IS_PROTO @ 0x14033FA90 (MI_PFN_IS_PROTO.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 Lock; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // r12d
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 BugCheckParameter2; // [rsp+30h] [rbp-48h]

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
  v11 = (__int64)v10;
  if ( v10 )
  {
    v12 = v10[6];
    v13 = a3 + v5;
    v14 = v12 + *((unsigned int *)v10 + 16);
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
  KeLeaveCriticalRegionThread(Lock);
  MmReleaseLoadLock(Lock);
  if ( v16 >= 0 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
    {
      v16 = -1073741800;
    }
    else
    {
      v17 = 0;
      v18 = (_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v19 = (_QWORD *)(a1 + 48);
        while ( 1 )
        {
          BugCheckParameter2 = 48LL * *v19 - 0x220000000000LL;
          if ( MI_PFN_IS_PROTO(BugCheckParameter2) )
            break;
          if ( (MiGetPagePrivilege(BugCheckParameter2, 0, 0LL) & 0x40) != 0 )
          {
            v16 = -1073741755;
            goto LABEL_23;
          }
          ++v17;
          ++v19;
          if ( v17 >= v8 )
          {
            v5 = a2;
            goto LABEL_21;
          }
        }
        v16 = -1073741800;
      }
      else
      {
LABEL_21:
        MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 1LL);
        if ( a4 == 1 )
        {
          v21 = *(_QWORD *)(v11 + 112);
          if ( v21
            && (v24 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v21) + 96) + 40LL), (v24 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v22 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v22 = 0LL;
          }
          if ( qword_140C1B930 )
          {
            v16 = qword_140C1B930(v22, a1, v5, a3, v5 - *(_QWORD *)(v11 + 48));
            if ( v16 >= 0 )
            {
              v23 = 3LL;
              if ( (MiFlags & 0x8000) != 0 && v16 == 300 )
                v23 = 19LL;
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), v23);
              v16 = 0;
            }
          }
          else
          {
            v16 = -1073741822;
          }
        }
        else if ( (MiFlags & 0x8000) != 0 && v8 )
        {
          v25 = v8;
          do
          {
            MiClearPfnImageVerified(48LL * *v18++ - 0x220000000000LL, 24);
            --v25;
          }
          while ( v25 );
        }
      }
    }
LABEL_23:
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v11 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock);
    MiUnloadSystemImage(v11, -1);
    MmReleaseLoadLock(Lock);
  }
  KiLeaveCriticalRegionUnsafe(Lock);
  return (unsigned int)v16;
}
