/*
 * XREFs of MmChangeImageProtection @ 0x140658F80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x140253184 (MiSetImageProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MiSessionReferenceImage @ 0x1403A70B4 (MiSessionReferenceImage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
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
  unsigned int v17; // r12d
  _QWORD *v18; // r15
  _QWORD *v19; // r13
  ULONG_PTR v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rsi

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
        while ( !MI_PFN_IS_PROTO(48LL * *v19 - 0x58000000000LL) )
        {
          if ( (MiGetPagePrivilege(v20, 0, 0LL) & 0x40) != 0 )
          {
            v16 = -1073741755;
            goto LABEL_44;
          }
          ++v17;
          ++v19;
          if ( v17 >= v8 )
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
          v21 = *(_QWORD *)(v11 + 112);
          if ( v21
            && (v22 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v21) + 96) + 40LL), (v22 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
          {
            v23 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v23 = 0LL;
          }
          if ( qword_140C1D9D0 )
          {
            v16 = qword_140C1D9D0(v23, a1, v5, a3, v5 - *(_QWORD *)(v11 + 48));
            if ( v16 >= 0 )
            {
              v24 = 3;
              if ( (MiFlags & 0x10000) != 0 && v16 == 300 )
                v24 = 19;
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), v24);
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
          v25 = v8;
          do
          {
            MiClearPfnImageVerified(48LL * *v18++ - 0x58000000000LL, 24);
            --v25;
          }
          while ( v25 );
        }
      }
    }
LABEL_44:
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v11 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(Lock);
    MiUnloadSystemImage(v11);
    MmReleaseLoadLock(Lock);
  }
  KeLeaveCriticalRegionThread(Lock);
  return (unsigned int)v16;
}
