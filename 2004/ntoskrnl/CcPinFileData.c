/*
 * XREFs of CcPinFileData @ 0x14022DAD0
 * Callers:
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     CcPinRead @ 0x1405FC400 (CcPinRead.c)
 *     CcPinMappedData @ 0x1405FC940 (CcPinMappedData.c)
 *     CcMapData @ 0x1405FCDD0 (CcMapData.c)
 *     CcPreparePinWrite @ 0x1406E3B40 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406E3D14 (CcMapDataCommon.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExAcquireSharedStarveExclusive @ 0x14022A8A0 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14022C3E0 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x14022F3B0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14022F880 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1402C4F3C (CcAllocateInitializeBcb.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1404E5F28 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E60F4 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405AF3BC (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r13
  _QWORD *v13; // rbx
  volatile signed __int32 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v17; // rcx
  int SessionId; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v21; // r15
  __int64 v22; // rsi
  unsigned int v23; // r9d
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  char *v29; // rdi
  __int16 v30; // ax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  char v33; // al
  __int64 v34; // rax
  _QWORD *v35; // r15
  volatile signed __int32 *v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int32 v38; // eax
  struct _ERESOURCE *v39; // rdi
  __int16 v40; // cx
  __int64 v41; // rsi
  struct _KTHREAD *v42; // rdi
  NTSTATUS v43; // r8d
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  unsigned int v46; // r15d
  struct _KTHREAD *v47; // rdi
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // eax
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v53; // di
  unsigned __int64 v54; // rdi
  unsigned __int32 v55; // eax
  __int64 v56; // rbx
  struct _KEVENT *v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  struct _ERESOURCE *v60; // rcx
  int v61; // edx
  __int64 v62; // rbx
  unsigned int v63; // r8d
  __int16 v64; // ax
  unsigned int v65; // r15d
  unsigned int v66; // ebx
  __int64 v67; // rax
  struct _ERESOURCE *v68; // rcx
  __int64 v69; // r8
  unsigned __int8 v70; // dl
  struct _KTHREAD *v71; // r8
  unsigned __int8 v72; // al
  __int64 v73; // rax
  unsigned __int8 v74; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v77; // edx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v83; // rbx
  struct _KEVENT *v84; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v86; // [rsp+30h] [rbp-D8h]
  int v87; // [rsp+34h] [rbp-D4h]
  char *P; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h] BYREF
  int v90; // [rsp+48h] [rbp-C0h] BYREF
  int v91; // [rsp+4Ch] [rbp-BCh]
  __int64 v92; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-B0h] BYREF
  int v94; // [rsp+60h] [rbp-A8h]
  int v95; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v96; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+70h] [rbp-98h]
  int v98; // [rsp+78h] [rbp-90h]
  int v99; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v100; // [rsp+80h] [rbp-88h]
  NTSTATUS v101; // [rsp+84h] [rbp-84h]
  int v102; // [rsp+88h] [rbp-80h]
  char *v103; // [rsp+90h] [rbp-78h]
  __int64 v104; // [rsp+98h] [rbp-70h]
  __int64 v105; // [rsp+A0h] [rbp-68h]
  __int64 v106; // [rsp+A8h] [rbp-60h]
  int v107; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v108; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v109; // [rsp+C0h] [rbp-48h]
  char v110; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v111; // [rsp+118h] [rbp+10h]
  unsigned int v112; // [rsp+120h] [rbp+18h]
  char v113; // [rsp+128h] [rbp+20h]

  v113 = a4;
  v112 = a3;
  v111 = a2;
  v10 = a6;
  v11 = 0LL;
  v96 = 0LL;
  v91 = 0;
  v90 = 0;
  v89 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v106 = v12;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x128uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  if ( (v10 & 4) != 0 )
  {
    v90 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v12, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v12, *a2, (unsigned int)&v89, (unsigned int)&v90, (v10 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v12 + 280);
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v12 + 280, KeGetCurrentIrql(), 0LL);
  v98 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v17, AbEntrySummary);
    v98 = v17;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    v11 = (__int64)&CurrentThread->LockEntries[v17];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v12 + 280);
LABEL_7:
  if ( v11 )
  {
    if ( (unsigned __int64)v14 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v14 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v12 + 280, &v99);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v12 + 280);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_QWORD *)(v12 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v12 + 328) = CurrentIrql;
  v87 = 1;
  v93 = 0LL;
  v92 = 0LL;
  v21 = *a2;
  v22 = HIDWORD(*a2);
  v23 = v112;
  v24 = *a2 + v112;
  v96 = v24;
  v103 = 0LL;
  v25 = v21 + 0x80000;
  v26 = *(_QWORD *)(v12 + 32);
  v27 = HIDWORD(v21);
  if ( v26 <= 0x200000 || (LODWORD(v27) = v22, (*(_DWORD *)(v12 + 152) & 0x200) == 0) )
  {
    LODWORD(v22) = v27;
    goto LABEL_115;
  }
  if ( v26 <= 0x2000000 )
  {
    if ( v25 < v26 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v12 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v26 >> 18)
                                        + 16 * (v25 >> 19));
      goto LABEL_23;
    }
LABEL_115:
    BcbListHeadLargeOffset = (_QWORD *)(v12 + 16);
    goto LABEL_23;
  }
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v12, v21 + 0x80000, 1);
  v23 = v112;
LABEL_23:
  v29 = (char *)(*BcbListHeadLargeOffset - 16LL);
  v103 = v29;
  if ( (_DWORD)v22 || (v30 = *(_WORD *)v29, *(_WORD *)v29 != 765) || *((_DWORD *)v29 + 9) )
  {
    while ( *(_WORD *)v29 == 765 && v21 < *((_QWORD *)v29 + 4) )
    {
      v73 = *((_QWORD *)v29 + 1);
      if ( v21 >= v73 )
      {
        v33 = 1;
        goto LABEL_34;
      }
      if ( v24 >= v73 )
        v24 = *((_QWORD *)v29 + 1);
      v96 = v24;
      v29 = (char *)(*((_QWORD *)v29 + 2) - 16LL);
      v103 = v29;
    }
  }
  else
  {
    v31 = v96;
    while ( v30 == 765 && (unsigned int)v21 < *((_DWORD *)v29 + 8) )
    {
      v32 = *((_DWORD *)v29 + 2);
      if ( (unsigned int)v21 >= v32 )
      {
        v33 = 1;
        goto LABEL_34;
      }
      if ( v31 >= v32 )
      {
        v31 = *((_DWORD *)v29 + 2);
        LODWORD(v96) = v31;
        v24 = v96;
      }
      v29 = (char *)(*((_QWORD *)v29 + 2) - 16LL);
      v103 = v29;
      v30 = *(_WORD *)v29;
    }
  }
  v33 = 0;
LABEL_34:
  P = v29;
  if ( !v33 )
  {
    if ( (v10 & 8) != 0 )
    {
      v29 = 0LL;
      P = 0LL;
      v86 = 0;
      v35 = a8;
      goto LABEL_74;
    }
    v93 = v21;
    v62 = v24 - v21;
    v61 = v21 & 0xFFF;
    LODWORD(v62) = v61 + v62;
    v92 = v62;
    v63 = v61 + v90;
    v90 += v61;
    if ( (v113 || (*(_DWORD *)(v12 + 152) & 4) != 0) && (v64 = v21, !a5) )
    {
      v65 = v91;
    }
    else
    {
      v64 = v21;
      v65 = 2;
      v91 = 2;
      if ( !v61 )
      {
        if ( v23 >= 0x1000 )
          v65 = 3;
        v91 = v65;
      }
      if ( (v62 & 0xFFF) == 0 )
      {
        v65 |= 4u;
        v91 = v65;
      }
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
      v113 = 1;
    v66 = (v62 + 4095) & 0xFFFFF000;
    LODWORD(v92) = v66;
    *a8 -= v64 & 0xFFF;
    LODWORD(v93) = v93 & 0xFFFFF000;
    if ( v66 > v63 )
    {
      v66 = v63;
      LODWORD(v92) = v63;
    }
    v67 = CcAllocateInitializeBcb(v12, v29, &v93, &v92);
    v29 = (char *)v67;
    P = (char *)v67;
    if ( (v10 & 1) != 0 )
    {
      if ( !v67 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v113 )
      {
        v68 = (struct _ERESOURCE *)(v67 + 72);
        if ( (v10 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v68, 0) )
            KeBugCheckEx(0x34u, 0x201F6uLL, (ULONG_PTR)v29, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v68, 0) )
        {
          KeBugCheckEx(0x34u, 0x201FDuLL, (ULONG_PTR)v29, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v87 = 0;
      if ( (v10 & 4) == 0 )
      {
        LOBYTE(v69) = 1;
        CcMapAndRead(v66, v65, v69, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
        if ( !*((_QWORD *)v29 + 23) )
        {
          *((_QWORD *)v29 + 23) = *a8;
          *((_QWORD *)v29 + 7) = v89;
          v89 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        *a8 = *((_QWORD *)v29 + 23) + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)v29 + 2));
      }
      v35 = a8;
      goto LABEL_73;
    }
    if ( !v67 )
    {
      v86 = 0;
      v35 = a8;
      goto LABEL_74;
    }
    if ( !v113 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v67 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2025DuLL, (ULONG_PTR)v29, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v66, v65, 0LL, *a8) )
    {
      v86 = 0;
      v35 = a8;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    v35 = a8;
    if ( !*((_QWORD *)v29 + 23) )
    {
      *((_QWORD *)v29 + 23) = *a8;
      *((_QWORD *)v29 + 7) = v89;
      v89 = 0LL;
    }
    goto LABEL_134;
  }
  if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
    v113 = 1;
  if ( *((_QWORD *)v29 + 23) )
  {
    if ( (v10 & 1) != 0 )
    {
      ++*((_DWORD *)v29 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v87 = 0;
      if ( !v113 )
      {
        v60 = (struct _ERESOURCE *)(v29 + 72);
        if ( (v10 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v60, 1u);
        else
          ExAcquireSharedStarveExclusive(v60, 1u);
      }
    }
    else
    {
      if ( !v113 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
      {
        v29 = 0LL;
        P = 0LL;
        v86 = 0;
        v35 = a8;
        goto LABEL_74;
      }
      ++*((_DWORD *)v29 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v87 = 0;
    }
    v35 = a8;
    *a8 = *((_QWORD *)v29 + 23) + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)v29 + 2));
    goto LABEL_73;
  }
  v34 = (unsigned int)(v21 - *((_DWORD *)v29 + 2));
  v35 = a8;
  *a8 -= v34;
  v93 = *((_QWORD *)v29 + 1);
  v92 = *((unsigned int *)v29 + 1);
  if ( (v10 & 1) == 0 )
  {
    if ( !v113 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
    {
      v29 = 0LL;
      P = 0LL;
      v86 = 0;
      goto LABEL_74;
    }
    ++*((_DWORD *)v29 + 16);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*((unsigned int *)v29 + 1), 0LL, 0LL, *v35) )
    {
      v86 = 0;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    if ( !*((_QWORD *)v29 + 23) )
    {
      *((_QWORD *)v29 + 23) = *v35;
      *((_QWORD *)v29 + 7) = v89;
      v89 = 0LL;
    }
LABEL_134:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    *v35 = *((_QWORD *)v29 + 23) + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)v29 + 2));
    goto LABEL_73;
  }
  ++*((_DWORD *)v29 + 16);
  v36 = (volatile signed __int32 *)(v12 + 280);
  *(_QWORD *)(v12 + 288) = 0LL;
  v37 = *(unsigned __int8 *)(v12 + 328);
  v38 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 280), 1, 0);
  if ( v38 )
    ExpReleaseFastMutexContended(v12 + 280, v38);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v37 <= 0xFu && v74 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
        v19 = (v77 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v77;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v37);
  KeAbPostRelease(v12 + 280);
  v87 = 0;
  if ( !v113 )
  {
    v39 = (struct _ERESOURCE *)(v29 + 72);
    if ( (v10 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v39, 1u);
    }
    else
    {
      if ( (v39->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v39, 0LL, 0LL);
      v40 = v39->Flag & 1;
      if ( v40 )
      {
        v70 = KeGetCurrentIrql();
        v71 = KeGetCurrentThread();
        if ( v70 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v70, 1uLL, 0LL);
        if ( (v71->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v70 && (v71->MiscFlags & 0x400) == 0 && !v71->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v40 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v39);
      else
        ExpAcquireSharedStarveExclusive((__int64)v39, 1);
    }
  }
  if ( (v10 & 4) == 0 )
  {
    v41 = *a8;
    v42 = KeGetCurrentThread();
    v108 = v42;
    v100 = 0;
    v107 = 0;
    v43 = 0;
    v101 = 0;
    v110 = 1;
    v44 = ((v41 & 0xFFF) + (unsigned __int64)(unsigned int)v92 + 4095) >> 12;
    v94 = v44;
    v45 = v41 & 0xFFFFFFFFFFFFF000uLL;
    v97 = v45;
    v46 = BYTE4(v42[1].Queue) + 4 * LODWORD(v42[1].WaitListEntry.Flink);
    while ( (_DWORD)v44 )
    {
      BYTE4(v42[1].Queue) = 1;
      v58 = v44 - 1;
      if ( (unsigned int)(v44 - 1) > LODWORD(v42[1].WaitListEntry.Flink) )
      {
        if ( v58 > 0xF )
          v58 = 15;
        LODWORD(v42[1].WaitListEntry.Flink) = v58;
      }
      v100 = 0;
      v59 = (unsigned int)((_DWORD)v44 << 12);
      v97 = (unsigned int)v59;
      v43 = MmCheckCachedPageStates(v45, v59, 0LL, &v110);
      v101 = v43;
      if ( v43 < 0 )
        break;
      v45 += v97;
      v97 = v45;
      LODWORD(v44) = 0;
      v94 = 0;
    }
    BYTE4(v42[1].Queue) = v46 & 3;
    LODWORD(v42[1].WaitListEntry.Flink) = v46 >> 2;
    if ( v43 < 0 )
      RtlRaiseStatus(v43);
    v105 = 0LL;
    v95 = 0;
    v47 = KeGetCurrentThread();
    --v47->SpecialApcDisable;
    if ( ++v47->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v47, v12 + 280, KeGetCurrentIrql(), 0LL);
    v105 = 0LL;
    v104 = 0LL;
    v102 = 0;
    v48 = v47->AbEntrySummary;
    if ( !v48 )
    {
      if ( !v47->AbOrphanedEntrySummary )
      {
        v50 = 0LL;
        v104 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v47, v12 + 280);
        goto LABEL_55;
      }
      v72 = v47->AbOrphanedEntrySummary;
      v47->AbOrphanedEntrySummary = 0;
      v47->AbEntrySummary |= v72;
      v48 = v47->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v49, v48);
    v102 = v49;
    v47->AbEntrySummary = v48 & ~(1 << v49);
    v50 = (__int64)&v47->LockEntries[v49];
    v104 = v50;
LABEL_55:
    v105 = v50;
    if ( v50 )
    {
      if ( (unsigned __int64)v36 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v36 >> 39) & 0x1FF)) == 1 )
      {
        v51 = MmGetSessionIdEx((__int64)v47->ApcState.Process);
      }
      else
      {
        v51 = -1;
      }
      *(_DWORD *)(v50 + 40) = v51;
      *(_QWORD *)(v50 + 32) = (unsigned __int64)v36 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v47->116 + 1, 0x10u);
    }
    --v47->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v47, v12 + 280, &v95);
    SpecialApcDisable = v47->SpecialApcDisable;
    v47->SpecialApcDisable = SpecialApcDisable + 1;
    if ( SpecialApcDisable == -1 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery();
    v53 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v36, 0) )
      ExpAcquireFastMutexContended(v12 + 280);
    if ( v50 )
      *(_BYTE *)(v50 + 26) |= 1u;
    v109 = KeGetCurrentThread();
    *(_QWORD *)(v12 + 288) = v109;
    *(_DWORD *)(v12 + 328) = v53;
    if ( !*((_QWORD *)P + 23) )
    {
      *((_QWORD *)P + 23) = *a8;
      *((_QWORD *)P + 7) = v89;
      v89 = 0LL;
    }
    *(_QWORD *)(v12 + 288) = 0LL;
    v54 = *(unsigned __int8 *)(v12 + 328);
    v55 = _InterlockedCompareExchange(v36, 1, 0);
    if ( v55 )
      ExpReleaseFastMutexContended(v12 + 280, v55);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v78 >= 2u )
        {
          v79 = KeGetCurrentPrcb();
          v80 = v79->SchedulerAssist;
          v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
          v19 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v79);
        }
      }
    }
    __writecr8(v54);
    KeAbPostRelease(v12 + 280);
    v29 = P;
    v35 = a8;
    *a8 = *((_QWORD *)P + 23) + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    goto LABEL_73;
  }
  v29 = P;
  v35 = a8;
LABEL_73:
  v86 = 1;
LABEL_74:
  if ( (v10 & 6) == 6 && v29 && *((_QWORD *)v29 + 23) )
  {
    v56 = *(_QWORD *)(*((_QWORD *)v29 + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v29 + 7) + 16LL)) )
    {
      v57 = *(struct _KEVENT **)(v56 + 184);
      if ( v57 )
        KeSetEvent(v57, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v56 + 544));
    }
    *((_QWORD *)v29 + 23) = 0LL;
    *((_QWORD *)v29 + 7) = 0LL;
    v29 = P;
  }
  if ( v87 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
  if ( v89 )
  {
    v83 = *(_QWORD *)(v89 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v89 + 16)) )
    {
      v84 = *(struct _KEVENT **)(v83 + 184);
      if ( v84 )
        KeSetEvent(v84, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v83 + 544));
    }
    v29 = P;
  }
  if ( (v10 & 4) != 0 )
    CcDereferenceFileOffset(v12, *a2);
  if ( v86 )
  {
    *a7 = v29;
    *a9 = *((_QWORD *)v29 + 4);
  }
  else
  {
    *v35 = 0LL;
    if ( v29 )
      CcUnpinFileDataEx(v29);
  }
  return v86;
}
