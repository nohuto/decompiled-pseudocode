/*
 * XREFs of MmChangeImageProtection @ 0x1406D0DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiSetImageProtection @ 0x1402E67C8 (MiSetImageProtection.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     MiSessionReferenceImage @ 0x1403A7974 (MiSessionReferenceImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r13
  unsigned int v7; // r14d
  unsigned int v8; // r14d
  __int64 Lock; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  unsigned int v19; // r12d
  _QWORD *v20; // r15
  _QWORD *v21; // r13
  ULONG_PTR v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rsi

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
  v12 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 0LL, v10, v11);
  v13 = v12;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 48);
    v15 = a3 + v5;
    v16 = v14 + *(unsigned int *)(v12 + 64);
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v16
      || v5 < v14
      || v15 > v16
      || v15 - 1 < v5 )
    {
      v18 = -1073741800;
    }
    else
    {
      v17 = *(_DWORD *)(v13 + 104);
      if ( (v17 & 0x80000) != 0 )
      {
        v18 = -1073741757;
      }
      else
      {
        v18 = 0;
        *(_DWORD *)(v13 + 104) = v17 | 0x80000;
        if ( (unsigned int)MiGetSystemRegionType(v14) == 1 )
          MiSessionReferenceImage(v14);
        else
          ++*(_WORD *)(v13 + 108);
      }
    }
  }
  else
  {
    v18 = -1073741275;
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread(Lock);
  MmReleaseLoadLock(Lock);
  if ( v18 >= 0 )
  {
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v13 + 48)) )
    {
      v18 = -1073741800;
    }
    else
    {
      v19 = 0;
      v20 = (_QWORD *)(a1 + 48);
      if ( v8 )
      {
        v21 = (_QWORD *)(a1 + 48);
        while ( !MI_PFN_IS_PROTO(48LL * *v21 - 0x58000000000LL) )
        {
          if ( (MiGetPagePrivilege(v22, 0, 0LL) & 0x40) != 0 )
          {
            v18 = -1073741755;
            goto LABEL_41;
          }
          ++v19;
          ++v21;
          if ( v19 >= v8 )
          {
            v5 = a2;
            goto LABEL_26;
          }
        }
        v18 = -1073741800;
      }
      else
      {
LABEL_26:
        MiSetImageProtection(v13, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
        if ( a4 == 1 )
        {
          v24 = *(_QWORD *)(v13 + 112);
          if ( v24
            && (v25 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v24) + 96) + 40LL), (v25 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v26 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v26 = 0LL;
          }
          if ( qword_140C1DB50 )
          {
            v18 = qword_140C1DB50(v26, a1, v5, a3, v5 - *(_QWORD *)(v13 + 48));
            if ( v18 >= 0 )
            {
              MiSetImageProtection(v13, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
              v18 = 0;
            }
          }
          else
          {
            v18 = -1073741822;
          }
        }
        else if ( (MiFlags & 0x10000) != 0 && v8 )
        {
          v27 = v8;
          do
          {
            MiClearPfnImageVerified(48LL * *v20++ - 0x58000000000LL, 24LL, v23);
            --v27;
          }
          while ( v27 );
        }
      }
    }
LABEL_41:
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v13 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock);
    MiUnloadSystemImage(v13);
    MmReleaseLoadLock(Lock);
  }
  KeLeaveCriticalRegionThread(Lock);
  return (unsigned int)v18;
}
