/*
 * XREFs of NtMapCMFModule @ 0x1409564E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403407D0 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x14065DF80 (MmMapViewOfSection.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     MmMapViewInSystemSpace @ 0x14070D350 (MmMapViewInSystemSpace.c)
 *     MUIInitializeResourceLock @ 0x1407BD01C (MUIInitializeResourceLock.c)
 *     CMFCheckAccess @ 0x140954C34 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x140955B48 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x140956404 (CMFUnmapModules.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  struct _KTHREAD *v17; // rax
  ULONG v18; // ebx
  unsigned int v19; // r12d
  int v20; // ebx
  ACCESS_MASK v21; // r15d
  int v22; // edx
  bool v23; // r13
  PADAPTER_OBJECT *v24; // rsi
  PVOID PoolWithTag; // rax
  __int64 v26; // rax
  int v27; // r12d
  NTSTATUS v28; // eax
  signed __int64 v29; // rsi
  signed __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  NTSTATUS v36; // [rsp+50h] [rbp-128h]
  int v37; // [rsp+58h] [rbp-120h]
  PVOID MappedBase; // [rsp+60h] [rbp-118h] BYREF
  KPROCESSOR_MODE v39; // [rsp+68h] [rbp-110h]
  unsigned int v40; // [rsp+6Ch] [rbp-10Ch]
  int v41; // [rsp+70h] [rbp-108h]
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-100h] BYREF
  ACCESS_MASK v43; // [rsp+80h] [rbp-F8h]
  __int64 v44; // [rsp+88h] [rbp-F0h] BYREF
  __int64 *v45; // [rsp+90h] [rbp-E8h]
  unsigned int v46; // [rsp+98h] [rbp-E0h]
  HANDLE Handle; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-C0h]
  __int128 v50; // [rsp+C8h] [rbp-B0h]
  __int64 v51; // [rsp+D8h] [rbp-A0h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-80h] BYREF
  __int128 v54; // [rsp+108h] [rbp-70h]
  __int128 v55; // [rsp+118h] [rbp-60h]
  struct _KTHREAD *v57; // [rsp+130h] [rbp-48h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v44 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v37 = 0;
  v40 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v10 = -1073741823;
LABEL_3:
    v36 = v10;
    goto LABEL_118;
  }
  if ( (What & 0xFFE0FE81) != 0 )
  {
LABEL_6:
    v10 = -1073741811;
    goto LABEL_3;
  }
  v10 = MUIInitializeResourceLock((volatile signed __int64 *)&CMFLock);
  v36 = v10;
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
          v36 = -1073741637;
LABEL_31:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v10 = v36;
          goto LABEL_118;
        }
        if ( CMFDirectorySectionPointer )
        {
          v14 = 0x80000000;
          v46 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v14 = -1073741824;
          v46 = v14;
          v36 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v14, PreviousMode);
          if ( (v36 & 0xC0000000) == 0xC0000000 )
            goto LABEL_31;
        }
      }
      v15 = v12 | CMFFlagsCache & 0xFFE3FFFF;
      CMFFlagsCache = v15;
      if ( CMFDirectorySectionPointer && ((v15 & 0x80000) != 0 || (v15 & 0x100000) != 0) )
      {
        MappedBase = 0LL;
        ViewSize = 104LL;
        v44 = 0LL;
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
    v36 = 0;
    goto LABEL_31;
  }
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( !CMFFlagsCache )
  {
    v18 = What | 1;
LABEL_49:
    v19 = v18 & 0xFFFFFECF;
    v40 = v19;
    v20 = v18 & 0x130;
    v41 = (v19 & 0x40) != 0 ? 4 : 2;
    v21 = (v19 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v43 = v21;
    v37 = 10000;
    switch ( v20 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v37 = CMFCacheIndex;
LABEL_58:
          v23 = (v19 & 2) != 0;
          v24 = &CMFDirectorySectionPointer;
LABEL_69:
          v45 = (__int64 *)v24;
          v26 = (__int64)*v24;
          goto LABEL_73;
        }
        if ( v8 < 0x2710 )
        {
          v37 = v8;
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
          v37 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
            MappedBase = PoolWithTag;
            if ( !PoolWithTag )
            {
              v36 = -1073741801;
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
            v19 = v40;
          }
          v23 = (v19 & 4) != 0;
          v24 = (PADAPTER_OBJECT *)((char *)CMFSegmentSectionPointer + 8 * v8);
          goto LABEL_69;
        }
        break;
      case 256:
        v37 = CMFCacheIndex;
        v24 = &CMFHitsSectionPointer;
        v45 = (__int64 *)&CMFHitsSectionPointer;
        if ( CMFHitsSectionPointer )
          goto LABEL_87;
        CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
        v26 = 0LL;
        v23 = (v19 & 8) != 0;
        v19 = v40;
        v24 = (PADAPTER_OBJECT *)v45;
LABEL_73:
        if ( !v26 )
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((v19 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
          {
            v22 = -1073741823;
            goto LABEL_56;
          }
          v21 = v43;
          if ( *v24 )
          {
            v27 = v41;
          }
          else
          {
            LODWORD(v48) = 0x8000000;
            *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v43, v37);
            BYTE12(v48) = v23;
            *((_QWORD *)&v49 + 1) = __PAIR64__(Index, v19);
            v27 = v41;
            LODWORD(v50) = v41;
            *((_QWORD *)&v50 + 1) = v24;
            LODWORD(v51) = v20;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)&v49 = &Event;
            LODWORD(v53) = 48;
            *((_QWORD *)&v53 + 1) = 0LL;
            DWORD2(v54) = 512;
            *(_QWORD *)&v54 = 0LL;
            v55 = 0LL;
            v36 = PsCreateSystemThreadEx(
                    (__int64)&Handle,
                    0x1FFFFF,
                    &v53,
                    0LL,
                    0LL,
                    (__int64)CMFSystemThreadRoutine,
                    (__int64)&v48,
                    0LL,
                    0LL);
            if ( (v36 & 0xC0000000) == 0xC0000000 )
              goto LABEL_98;
            ZwClose(Handle);
            v28 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v36 = v28;
            if ( v28 )
            {
              if ( v28 >= 0 )
                v36 = -1073741823;
              goto LABEL_98;
            }
            v40 = DWORD2(v49);
            v36 = DWORD1(v50);
            if ( (DWORD1(v50) & 0xC0000000) == 0xC0000000 )
            {
LABEL_98:
              v7 = CacheIndexOut;
              goto LABEL_99;
            }
            if ( v20 == 16 )
              CMFRegisterEventTime(2u);
          }
          ExConvertExclusiveToSharedLite(CMFLock);
LABEL_88:
          MappedBase = 0LL;
          ViewSize = 0LL;
          v44 = 0LL;
          if ( BaseAddress )
          {
            if ( v20 == 256 || (v36 = CMFCheckAccess((__int64)*v24, v21, v39), (v36 & 0xC0000000) != 0xC0000000) )
            {
              v57 = KeGetCurrentThread();
              v36 = MmMapViewOfSection(
                      *v45,
                      (__int64)v57->ApcState.Process,
                      (__int64 *)&MappedBase,
                      0LL,
                      0LL,
                      &v44,
                      (__int64 *)&ViewSize,
                      1,
                      0x400000,
                      v27);
              if ( (v36 & 0xC0000000) == 0xC0000000 )
              {
                MappedBase = 0LL;
              }
              else if ( v20 == 256 )
              {
                v29 = CMFHitsLastFlushTime;
                v30 = MEMORY[0xFFFFF78000000014];
                if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                  && v29 == _InterlockedCompareExchange64(
                              &CMFHitsLastFlushTime,
                              MEMORY[0xFFFFF78000000014],
                              CMFHitsLastFlushTime)
                  && (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
                {
                  _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v29, v30);
                }
              }
            }
          }
          goto LABEL_98;
        }
LABEL_87:
        v27 = v41;
        goto LABEL_88;
    }
    v22 = -1073741811;
LABEL_56:
    v36 = v22;
    goto LABEL_98;
  }
  if ( (CMFFlagsCache & 0xF) != 0 )
    v18 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
  else
    v18 = What | 1;
  if ( (CMFFlagsCache & 0x100000) != 0 )
  {
    if ( (v18 & 0x10000) == 0 )
    {
      v36 = -1073741672;
      goto LABEL_100;
    }
    v18 |= 0x100000u;
    goto LABEL_47;
  }
  if ( (CMFFlagsCache & 0x80000) == 0 )
  {
    if ( (CMFFlagsCache & 0x40000) != 0 )
      v18 |= 0x40000u;
    goto LABEL_47;
  }
  if ( (v18 & 0x130) != 0x20 || (v18 & 0x10000) != 0 )
  {
    v18 |= 0x80000u;
LABEL_47:
    v8 = Index;
    goto LABEL_49;
  }
  v36 = -1073741672;
LABEL_99:
  v6 = CacheFlagsOut;
LABEL_100:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v10 = v36;
  if ( (v36 & 0xC0000000) != 0xC0000000 )
  {
    v31 = 0x7FFFFFFF0000LL;
    if ( BaseAddress )
    {
      v32 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
        v32 = (__int64)BaseAddress;
      *(_QWORD *)v32 = *(_QWORD *)v32;
      *BaseAddress = MappedBase;
      MappedBase = 0LL;
    }
    if ( ViewSizeOut )
    {
      v33 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
        v33 = (__int64)ViewSizeOut;
      *(_DWORD *)v33 = *(_DWORD *)v33;
      *ViewSizeOut = ViewSize;
    }
    if ( v7 )
    {
      v34 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v34 = (__int64)v7;
      *(_DWORD *)v34 = *(_DWORD *)v34;
      *v7 = v37;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v31 = (__int64)v6;
      *(_DWORD *)v31 = *(_DWORD *)v31;
      *v6 = v40;
    }
    goto LABEL_12;
  }
LABEL_118:
  if ( MappedBase )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (unsigned __int64)MappedBase, 0, 0);
    return v36;
  }
  return v10;
}
