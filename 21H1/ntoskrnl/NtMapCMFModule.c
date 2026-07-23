/*
 * XREFs of NtMapCMFModule @ 0x140954E10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x140303A00 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x1406FA5A0 (MmMapViewOfSection.c)
 *     MUIInitializeResourceLock @ 0x1407B9EAC (MUIInitializeResourceLock.c)
 *     CMFCheckAccess @ 0x140953564 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x140954478 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x140954D34 (CMFUnmapModules.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  PULONG v6; // r15
  PULONG v7; // r12
  ULONG v8; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v10; // edx
  ULONG v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ACCESS_MASK v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  ULONG v21; // ebx
  unsigned int v22; // r12d
  int v23; // ebx
  ACCESS_MASK v24; // r15d
  int v25; // edx
  bool v26; // r13
  PADAPTER_OBJECT *v27; // rsi
  PVOID PoolWithTag; // rax
  __int64 v29; // rax
  int v30; // r12d
  NTSTATUS v31; // eax
  signed __int64 v32; // rsi
  signed __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  NTSTATUS v42; // [rsp+50h] [rbp-128h]
  int v43; // [rsp+58h] [rbp-120h]
  PVOID MappedBase; // [rsp+60h] [rbp-118h] BYREF
  KPROCESSOR_MODE v45; // [rsp+68h] [rbp-110h]
  unsigned int v46; // [rsp+6Ch] [rbp-10Ch]
  int v47; // [rsp+70h] [rbp-108h]
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-100h] BYREF
  ACCESS_MASK v49; // [rsp+80h] [rbp-F8h]
  __int64 v50; // [rsp+88h] [rbp-F0h] BYREF
  __int64 *v51; // [rsp+90h] [rbp-E8h]
  unsigned int v52; // [rsp+98h] [rbp-E0h]
  HANDLE Handle; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-C0h]
  __int128 v56; // [rsp+C8h] [rbp-B0h]
  __int64 v57; // [rsp+D8h] [rbp-A0h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-80h] BYREF
  __int128 v60; // [rsp+108h] [rbp-70h]
  __int128 v61; // [rsp+118h] [rbp-60h]
  struct _KTHREAD *v63; // [rsp+130h] [rbp-48h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v50 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v43 = 0;
  v46 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v10 = -1073741823;
LABEL_3:
    v42 = v10;
    goto LABEL_118;
  }
  if ( (What & 0xFFE0FE81) != 0 )
  {
LABEL_6:
    v10 = -1073741811;
    goto LABEL_3;
  }
  v10 = MUIInitializeResourceLock((volatile signed __int64 *)&CMFLock);
  v42 = v10;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_118;
  if ( (What & 0x20000) != 0 )
  {
    if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
      goto LABEL_6;
    v12 = What & 0x1C0000;
    if ( v12 == (CMFFlagsCache & 0x1C0000) )
    {
LABEL_12:
      v10 = 0;
      goto LABEL_3;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( v12 != (CMFFlagsCache & 0x1C0000) )
    {
      if ( CMFDirectorySectionPointer )
      {
        if ( !v12 )
        {
          v42 = -1073741637;
LABEL_31:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
          v10 = v42;
          goto LABEL_118;
        }
        if ( CMFDirectorySectionPointer )
        {
          v14 = 0x80000000;
          v52 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v14 = -1073741824;
          v52 = v14;
          v42 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v14, PreviousMode);
          if ( (v42 & 0xC0000000) == 0xC0000000 )
            goto LABEL_31;
        }
      }
      v15 = v12 | CMFFlagsCache & 0xFFE3FFFF;
      CMFFlagsCache = v15;
      if ( CMFDirectorySectionPointer && ((v15 & 0x80000) != 0 || (v15 & 0x100000) != 0) )
      {
        MappedBase = 0LL;
        ViewSize = 104LL;
        v50 = 0LL;
        if ( MmMapViewInSystemSpace(CMFDirectorySectionPointer, &MappedBase, &ViewSize) >= 0 )
        {
          v16 = MappedBase;
          if ( MappedBase )
          {
            if ( ViewSize >= 0x68 )
            {
              *((_DWORD *)MappedBase + 12) &= 0xFFE3FFFF;
              v16[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
              v16 = MappedBase;
            }
            MmUnmapViewInSystemSpace(v16);
            MappedBase = 0LL;
          }
        }
        CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
        CMFRegisterEventTime(4u);
      }
    }
    v42 = 0;
    goto LABEL_31;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( !CMFFlagsCache )
  {
    v21 = What | 1;
LABEL_49:
    v22 = v21 & 0xFFFFFECF;
    v46 = v22;
    v23 = v21 & 0x130;
    v47 = (v22 & 0x40) != 0 ? 4 : 2;
    v24 = (v22 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v49 = v24;
    v43 = 10000;
    switch ( v23 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v43 = CMFCacheIndex;
LABEL_58:
          v26 = (v22 & 2) != 0;
          v27 = &CMFDirectorySectionPointer;
LABEL_69:
          v51 = (__int64 *)v27;
          v29 = (__int64)*v27;
          goto LABEL_73;
        }
        if ( v8 < 0x2710 )
        {
          v43 = v8;
          goto LABEL_58;
        }
        if ( CMFFirstAccess )
        {
          CMFRegisterEventTime(1u);
          CMFFirstAccess = 0;
        }
        break;
      case 32:
        if ( v8 < 0x1E && CMFCacheIndex != 10000 )
        {
          v43 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
            MappedBase = PoolWithTag;
            if ( !PoolWithTag )
            {
              v42 = -1073741801;
              goto LABEL_98;
            }
            memset(PoolWithTag, 0, 0xF0uLL);
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CMFSegmentSectionPointer,
                   (signed __int64)MappedBase,
                   0LL) )
            {
              ExFreePoolWithTag(MappedBase, 0);
            }
            MappedBase = 0LL;
            v22 = v46;
          }
          v26 = (v22 & 4) != 0;
          v27 = (PADAPTER_OBJECT *)((char *)CMFSegmentSectionPointer + 8 * v8);
          goto LABEL_69;
        }
        break;
      case 256:
        v43 = CMFCacheIndex;
        v27 = &CMFHitsSectionPointer;
        v51 = (__int64 *)&CMFHitsSectionPointer;
        if ( CMFHitsSectionPointer )
          goto LABEL_87;
        CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
        v29 = 0LL;
        v26 = (v22 & 8) != 0;
        v22 = v46;
        v27 = (PADAPTER_OBJECT *)v51;
LABEL_73:
        if ( !v29 )
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((v22 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
          {
            v25 = -1073741823;
            goto LABEL_56;
          }
          v24 = v49;
          if ( *v27 )
          {
            v30 = v47;
          }
          else
          {
            LODWORD(v54) = 0x8000000;
            *(_QWORD *)((char *)&v54 + 4) = __PAIR64__(v49, v43);
            BYTE12(v54) = v26;
            *((_QWORD *)&v55 + 1) = __PAIR64__(Index, v22);
            v30 = v47;
            LODWORD(v56) = v47;
            *((_QWORD *)&v56 + 1) = v27;
            LODWORD(v57) = v23;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)&v55 = &Event;
            LODWORD(v59) = 48;
            *((_QWORD *)&v59 + 1) = 0LL;
            DWORD2(v60) = 512;
            *(_QWORD *)&v60 = 0LL;
            v61 = 0LL;
            v42 = PsCreateSystemThreadEx(
                    (__int64)&Handle,
                    0x1FFFFFu,
                    &v59,
                    0LL,
                    0LL,
                    (__int64)CMFSystemThreadRoutine,
                    (__int64)&v54,
                    0LL,
                    0LL);
            if ( (v42 & 0xC0000000) == 0xC0000000 )
              goto LABEL_98;
            ZwClose(Handle);
            v31 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v42 = v31;
            if ( v31 )
            {
              if ( v31 >= 0 )
                v42 = -1073741823;
              goto LABEL_98;
            }
            v46 = DWORD2(v55);
            v42 = DWORD1(v56);
            if ( (DWORD1(v56) & 0xC0000000) == 0xC0000000 )
            {
LABEL_98:
              v7 = CacheIndexOut;
              goto LABEL_99;
            }
            if ( v23 == 16 )
              CMFRegisterEventTime(2u);
          }
          ExConvertExclusiveToSharedLite(CMFLock);
LABEL_88:
          MappedBase = 0LL;
          ViewSize = 0LL;
          v50 = 0LL;
          if ( BaseAddress )
          {
            if ( v23 == 256 || (v42 = CMFCheckAccess((__int64)*v27, v24, v45), (v42 & 0xC0000000) != 0xC0000000) )
            {
              v63 = KeGetCurrentThread();
              v42 = MmMapViewOfSection(
                      *v51,
                      (__int64)v63->ApcState.Process,
                      (__int64 *)&MappedBase,
                      0LL,
                      0LL,
                      &v50,
                      (__int64 *)&ViewSize,
                      1,
                      0x400000,
                      v30);
              if ( (v42 & 0xC0000000) == 0xC0000000 )
              {
                MappedBase = 0LL;
              }
              else if ( v23 == 256 )
              {
                v32 = CMFHitsLastFlushTime;
                v33 = MEMORY[0xFFFFF78000000014];
                if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                  && v32 == _InterlockedCompareExchange64(
                              &CMFHitsLastFlushTime,
                              MEMORY[0xFFFFF78000000014],
                              CMFHitsLastFlushTime)
                  && (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
                {
                  _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v32, v33);
                }
              }
            }
          }
          goto LABEL_98;
        }
LABEL_87:
        v30 = v47;
        goto LABEL_88;
    }
    v25 = -1073741811;
LABEL_56:
    v42 = v25;
    goto LABEL_98;
  }
  if ( (CMFFlagsCache & 0xF) != 0 )
    v21 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
  else
    v21 = What | 1;
  if ( (CMFFlagsCache & 0x100000) != 0 )
  {
    if ( (v21 & 0x10000) == 0 )
    {
      v42 = -1073741672;
      goto LABEL_100;
    }
    v21 |= 0x100000u;
    goto LABEL_47;
  }
  if ( (CMFFlagsCache & 0x80000) == 0 )
  {
    if ( (CMFFlagsCache & 0x40000) != 0 )
      v21 |= 0x40000u;
    goto LABEL_47;
  }
  if ( (v21 & 0x130) != 0x20 || (v21 & 0x10000) != 0 )
  {
    v21 |= 0x80000u;
LABEL_47:
    v8 = Index;
    goto LABEL_49;
  }
  v42 = -1073741672;
LABEL_99:
  v6 = CacheFlagsOut;
LABEL_100:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
  v10 = v42;
  if ( (v42 & 0xC0000000) != 0xC0000000 )
  {
    v37 = 0x7FFFFFFF0000LL;
    if ( BaseAddress )
    {
      v38 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
        v38 = (__int64)BaseAddress;
      *(_QWORD *)v38 = *(_QWORD *)v38;
      *BaseAddress = MappedBase;
      MappedBase = 0LL;
    }
    if ( ViewSizeOut )
    {
      v39 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
        v39 = (__int64)ViewSizeOut;
      *(_DWORD *)v39 = *(_DWORD *)v39;
      *ViewSizeOut = ViewSize;
    }
    if ( v7 )
    {
      v40 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v40 = (__int64)v7;
      *(_DWORD *)v40 = *(_DWORD *)v40;
      *v7 = v43;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v37 = (__int64)v6;
      *(_DWORD *)v37 = *(_DWORD *)v37;
      *v6 = v46;
    }
    goto LABEL_12;
  }
LABEL_118:
  if ( MappedBase )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (unsigned __int64)MappedBase, 0, 0LL);
    return v42;
  }
  return v10;
}
