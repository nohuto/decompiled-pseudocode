/*
 * XREFs of CcPinFileData @ 0x1402A2D80
 * Callers:
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     CcPreparePinWrite @ 0x14064A370 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x14064A544 (CcMapDataCommon.c)
 *     CcPinRead @ 0x140680620 (CcPinRead.c)
 *     CcPinMappedData @ 0x140680800 (CcPinMappedData.c)
 *     CcMapData @ 0x140680C90 (CcMapData.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140242CEC (ExpReleaseFastMutexContended.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1402A04D4 (CcAllocateInitializeBcb.c)
 *     ExAcquireSharedStarveExclusive @ 0x1402A1C70 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1402A1D30 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402A1EA0 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402A4B30 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1404E94B8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E9684 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B2F1C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 *a7,
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v25; // r15
  __int64 v26; // rsi
  unsigned int v27; // r9d
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v33; // rdi
  __int16 v34; // ax
  unsigned int v35; // r8d
  unsigned int v36; // ecx
  char v37; // al
  __int64 v38; // rax
  _QWORD *v39; // r15
  volatile signed __int32 *v40; // rbx
  unsigned __int64 v41; // rsi
  signed __int32 v42; // eax
  struct _ERESOURCE *v43; // rdi
  __int16 v44; // cx
  __int64 v45; // rsi
  struct _KTHREAD *v46; // rdi
  NTSTATUS v47; // r8d
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  unsigned int v50; // r15d
  struct _KTHREAD *v51; // rdi
  unsigned __int8 v52; // al
  __int64 v53; // rcx
  __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v61; // di
  unsigned __int64 v62; // rdi
  signed __int32 v63; // eax
  __int64 v64; // rbx
  struct _KEVENT *v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  struct _ERESOURCE *v68; // rcx
  int v69; // edx
  __int64 v70; // rbx
  unsigned int v71; // r8d
  __int16 v72; // ax
  unsigned int v73; // r15d
  unsigned int v74; // ebx
  char *v75; // rax
  struct _ERESOURCE *v76; // rcx
  __int64 v77; // r8
  unsigned __int8 v78; // dl
  struct _KTHREAD *v79; // r8
  unsigned __int8 v80; // al
  __int64 v81; // rax
  unsigned __int8 v82; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v85; // edx
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  _DWORD *v88; // r9
  int v89; // eax
  __int64 v91; // rbx
  struct _KEVENT *v92; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v94; // [rsp+30h] [rbp-D8h]
  int v95; // [rsp+34h] [rbp-D4h]
  _QWORD *P; // [rsp+38h] [rbp-D0h]
  __int64 v97; // [rsp+40h] [rbp-C8h] BYREF
  int v98; // [rsp+48h] [rbp-C0h] BYREF
  int v99; // [rsp+4Ch] [rbp-BCh]
  __int64 v100; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+58h] [rbp-B0h] BYREF
  int v102; // [rsp+60h] [rbp-A8h]
  int v103; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v104; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+70h] [rbp-98h]
  int v106; // [rsp+78h] [rbp-90h]
  int v107; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v108; // [rsp+80h] [rbp-88h]
  NTSTATUS v109; // [rsp+84h] [rbp-84h]
  int v110; // [rsp+88h] [rbp-80h]
  __int64 v111; // [rsp+90h] [rbp-78h]
  __int64 v112; // [rsp+98h] [rbp-70h]
  __int64 v113; // [rsp+A0h] [rbp-68h]
  __int64 v114; // [rsp+A8h] [rbp-60h]
  int v115; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v116; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v117; // [rsp+C0h] [rbp-48h]
  char v118; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v119; // [rsp+118h] [rbp+10h]
  unsigned int v120; // [rsp+120h] [rbp+18h]
  char v121; // [rsp+128h] [rbp+20h]

  v121 = a4;
  v120 = a3;
  v119 = a2;
  v10 = a6;
  v11 = 0LL;
  v104 = 0LL;
  v99 = 0;
  v98 = 0;
  v97 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v114 = v12;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x128uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  if ( (v10 & 4) != 0 )
  {
    v98 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v12, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v12, *a2, (unsigned int)&v97, (unsigned int)&v98, (v10 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v12 + 280);
  v107 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v12 + 280, KeGetCurrentIrql(), 0LL);
  v106 = 0;
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
    v106 = v17;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v12 + 280, &v107);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v20, v19, v21, v22);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v12 + 280, v11);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_QWORD *)(v12 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v12 + 328) = CurrentIrql;
  v95 = 1;
  v101 = 0LL;
  v100 = 0LL;
  v25 = *a2;
  v26 = HIDWORD(*a2);
  v27 = v120;
  v28 = *a2 + v120;
  v104 = v28;
  v111 = 0LL;
  v29 = v25 + 0x80000;
  v30 = *(_QWORD *)(v12 + 32);
  v31 = HIDWORD(v25);
  if ( v30 <= 0x200000 || (LODWORD(v31) = v26, (*(_DWORD *)(v12 + 152) & 0x200) == 0) )
  {
    LODWORD(v26) = v31;
    goto LABEL_115;
  }
  if ( v30 <= 0x2000000 )
  {
    if ( v29 < v30 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v12 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v30 >> 18)
                                        + 16 * (v29 >> 19));
      goto LABEL_23;
    }
LABEL_115:
    BcbListHeadLargeOffset = (_QWORD *)(v12 + 16);
    goto LABEL_23;
  }
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v12, v25 + 0x80000, 1);
  v27 = v120;
LABEL_23:
  v33 = *BcbListHeadLargeOffset - 16LL;
  v111 = v33;
  if ( (_DWORD)v26 || (v34 = *(_WORD *)v33, *(_WORD *)v33 != 765) || *(_DWORD *)(v33 + 36) )
  {
    while ( *(_WORD *)v33 == 765 && v25 < *(_QWORD *)(v33 + 32) )
    {
      v81 = *(_QWORD *)(v33 + 8);
      if ( v25 >= v81 )
      {
        v37 = 1;
        goto LABEL_34;
      }
      if ( v28 >= v81 )
        v28 = *(_QWORD *)(v33 + 8);
      v104 = v28;
      v33 = *(_QWORD *)(v33 + 16) - 16LL;
      v111 = v33;
    }
  }
  else
  {
    v35 = v104;
    while ( v34 == 765 && (unsigned int)v25 < *(_DWORD *)(v33 + 32) )
    {
      v36 = *(_DWORD *)(v33 + 8);
      if ( (unsigned int)v25 >= v36 )
      {
        v37 = 1;
        goto LABEL_34;
      }
      if ( v35 >= v36 )
      {
        v35 = *(_DWORD *)(v33 + 8);
        LODWORD(v104) = v35;
        v28 = v104;
      }
      v33 = *(_QWORD *)(v33 + 16) - 16LL;
      v111 = v33;
      v34 = *(_WORD *)v33;
    }
  }
  v37 = 0;
LABEL_34:
  P = (_QWORD *)v33;
  if ( !v37 )
  {
    if ( (v10 & 8) != 0 )
    {
      v33 = 0LL;
      P = 0LL;
      v94 = 0;
      v39 = a8;
      goto LABEL_74;
    }
    v101 = v25;
    v70 = v28 - v25;
    v69 = v25 & 0xFFF;
    LODWORD(v70) = v69 + v70;
    v100 = v70;
    v71 = v69 + v98;
    v98 += v69;
    if ( (v121 || (*(_DWORD *)(v12 + 152) & 4) != 0) && (v72 = v25, !a5) )
    {
      v73 = v99;
    }
    else
    {
      v72 = v25;
      v73 = 2;
      v99 = 2;
      if ( !v69 )
      {
        if ( v27 >= 0x1000 )
          v73 = 3;
        v99 = v73;
      }
      if ( (v70 & 0xFFF) == 0 )
      {
        v73 |= 4u;
        v99 = v73;
      }
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
      v121 = 1;
    v74 = (v70 + 4095) & 0xFFFFF000;
    LODWORD(v100) = v74;
    *a8 -= v72 & 0xFFF;
    LODWORD(v101) = v101 & 0xFFFFF000;
    if ( v74 > v71 )
    {
      v74 = v71;
      LODWORD(v100) = v71;
    }
    v75 = CcAllocateInitializeBcb(v12, v33, &v101, &v100);
    v33 = (__int64)v75;
    P = v75;
    if ( (v10 & 1) != 0 )
    {
      if ( !v75 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v121 )
      {
        v76 = (struct _ERESOURCE *)(v75 + 72);
        if ( (v10 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v76, 0) )
            KeBugCheckEx(0x34u, 0x201F6uLL, v33, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v76, 0) )
        {
          KeBugCheckEx(0x34u, 0x201FDuLL, v33, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v95 = 0;
      if ( (v10 & 4) == 0 )
      {
        LOBYTE(v77) = 1;
        CcMapAndRead(v74, v73, v77, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
        if ( !*(_QWORD *)(v33 + 184) )
        {
          *(_QWORD *)(v33 + 184) = *a8;
          *(_QWORD *)(v33 + 56) = v97;
          v97 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        *a8 = *(_QWORD *)(v33 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v33 + 8));
      }
      v39 = a8;
      goto LABEL_73;
    }
    if ( !v75 )
    {
      v94 = 0;
      v39 = a8;
      goto LABEL_74;
    }
    if ( !v121 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v75 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2025DuLL, v33, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v95 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v74, v73, 0LL, *a8) )
    {
      v94 = 0;
      v39 = a8;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    v39 = a8;
    if ( !*(_QWORD *)(v33 + 184) )
    {
      *(_QWORD *)(v33 + 184) = *a8;
      *(_QWORD *)(v33 + 56) = v97;
      v97 = 0LL;
    }
    goto LABEL_134;
  }
  if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
    v121 = 1;
  if ( *(_QWORD *)(v33 + 184) )
  {
    if ( (v10 & 1) != 0 )
    {
      ++*(_DWORD *)(v33 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v95 = 0;
      if ( !v121 )
      {
        v68 = (struct _ERESOURCE *)(v33 + 72);
        if ( (v10 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v68, 1u);
        else
          ExAcquireSharedStarveExclusive(v68, 1u);
      }
    }
    else
    {
      if ( !v121 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v33 + 72), 0) )
      {
        v33 = 0LL;
        P = 0LL;
        v94 = 0;
        v39 = a8;
        goto LABEL_74;
      }
      ++*(_DWORD *)(v33 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v95 = 0;
    }
    v39 = a8;
    *a8 = *(_QWORD *)(v33 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v33 + 8));
    goto LABEL_73;
  }
  v38 = (unsigned int)(v25 - *(_DWORD *)(v33 + 8));
  v39 = a8;
  *a8 -= v38;
  v101 = *(_QWORD *)(v33 + 8);
  v100 = *(unsigned int *)(v33 + 4);
  if ( (v10 & 1) == 0 )
  {
    if ( !v121 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v33 + 72), 0) )
    {
      v33 = 0LL;
      P = 0LL;
      v94 = 0;
      goto LABEL_74;
    }
    ++*(_DWORD *)(v33 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v95 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v33 + 4), 0LL, 0LL, *v39) )
    {
      v94 = 0;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    if ( !*(_QWORD *)(v33 + 184) )
    {
      *(_QWORD *)(v33 + 184) = *v39;
      *(_QWORD *)(v33 + 56) = v97;
      v97 = 0LL;
    }
LABEL_134:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    *v39 = *(_QWORD *)(v33 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v33 + 8));
    goto LABEL_73;
  }
  ++*(_DWORD *)(v33 + 64);
  v40 = (volatile signed __int32 *)(v12 + 280);
  *(_QWORD *)(v12 + 288) = 0LL;
  v41 = *(unsigned __int8 *)(v12 + 328);
  v42 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 280), 1, 0);
  if ( v42 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v12 + 280), v42);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v82 = KeGetCurrentIrql();
      if ( v82 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v82 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v85 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
        v23 = (v85 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v85;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v41);
  KeAbPostRelease(v12 + 280);
  v95 = 0;
  if ( !v121 )
  {
    v43 = (struct _ERESOURCE *)(v33 + 72);
    if ( (v10 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v43, 1u);
    }
    else
    {
      if ( (v43->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v43, 0LL, 0LL);
      v44 = v43->Flag & 1;
      if ( v44 )
      {
        v78 = KeGetCurrentIrql();
        v79 = KeGetCurrentThread();
        if ( v78 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v78, 1uLL, 0LL);
        if ( (v79->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v78 && (v79->MiscFlags & 0x400) == 0 && !v79->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v44 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v43);
      else
        ExpAcquireSharedStarveExclusive((__int64)v43, 1);
    }
  }
  if ( (v10 & 4) == 0 )
  {
    v45 = *a8;
    v46 = KeGetCurrentThread();
    v116 = v46;
    v108 = 0;
    v115 = 0;
    v47 = 0;
    v109 = 0;
    v118 = 1;
    v48 = ((v45 & 0xFFF) + (unsigned __int64)(unsigned int)v100 + 4095) >> 12;
    v102 = v48;
    v49 = v45 & 0xFFFFFFFFFFFFF000uLL;
    v105 = v49;
    v50 = BYTE4(v46[1].Queue) + 4 * LODWORD(v46[1].WaitListEntry.Flink);
    while ( (_DWORD)v48 )
    {
      BYTE4(v46[1].Queue) = 1;
      v66 = v48 - 1;
      if ( (unsigned int)(v48 - 1) > LODWORD(v46[1].WaitListEntry.Flink) )
      {
        if ( v66 > 0xF )
          v66 = 15;
        LODWORD(v46[1].WaitListEntry.Flink) = v66;
      }
      v108 = 0;
      v67 = (unsigned int)((_DWORD)v48 << 12);
      v105 = (unsigned int)v67;
      v47 = MmCheckCachedPageStates(v49, v67, 0LL, &v118);
      v109 = v47;
      if ( v47 < 0 )
        break;
      v49 += v105;
      v105 = v49;
      LODWORD(v48) = 0;
      v102 = 0;
    }
    BYTE4(v46[1].Queue) = v50 & 3;
    LODWORD(v46[1].WaitListEntry.Flink) = v50 >> 2;
    if ( v47 < 0 )
      RtlRaiseStatus(v47);
    v113 = 0LL;
    v103 = 0;
    v51 = KeGetCurrentThread();
    --v51->SpecialApcDisable;
    if ( ++v51->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v51, v12 + 280, KeGetCurrentIrql(), 0LL);
    v113 = 0LL;
    v112 = 0LL;
    v110 = 0;
    v52 = v51->AbEntrySummary;
    if ( !v52 )
    {
      if ( !v51->AbOrphanedEntrySummary )
      {
        v54 = 0LL;
        v112 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v51, v12 + 280);
        goto LABEL_55;
      }
      v80 = v51->AbOrphanedEntrySummary;
      v51->AbOrphanedEntrySummary = 0;
      v51->AbEntrySummary |= v80;
      v52 = v51->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v53, v52);
    v110 = v53;
    v51->AbEntrySummary = v52 & ~(1 << v53);
    v54 = (__int64)&v51->LockEntries[v53];
    v112 = v54;
LABEL_55:
    v113 = v54;
    if ( v54 )
    {
      if ( (unsigned __int64)v40 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v40 >> 39) & 0x1FF)) == 1 )
      {
        v55 = MmGetSessionIdEx((__int64)v51->ApcState.Process);
      }
      else
      {
        v55 = -1;
      }
      *(_DWORD *)(v54 + 40) = v55;
      *(_QWORD *)(v54 + 32) = (unsigned __int64)v40 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v51->116 + 1, 0x10u);
    }
    --v51->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v51, v12 + 280, &v103);
    SpecialApcDisable = v51->SpecialApcDisable;
    v51->SpecialApcDisable = SpecialApcDisable + 1;
    if ( SpecialApcDisable == -1 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
      KiCheckForKernelApcDelivery(v57, v56, v58, v59);
    v61 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v40, 0) )
      ExpAcquireFastMutexContended(v12 + 280, v54);
    if ( v54 )
      *(_BYTE *)(v54 + 26) |= 1u;
    v117 = KeGetCurrentThread();
    *(_QWORD *)(v12 + 288) = v117;
    *(_DWORD *)(v12 + 328) = v61;
    if ( !P[23] )
    {
      P[23] = *a8;
      P[7] = v97;
      v97 = 0LL;
    }
    *(_QWORD *)(v12 + 288) = 0LL;
    v62 = *(unsigned __int8 *)(v12 + 328);
    v63 = _InterlockedCompareExchange(v40, 1, 0);
    if ( v63 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v12 + 280), v63);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v86 = KeGetCurrentIrql();
        if ( v86 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v86 >= 2u )
        {
          v87 = KeGetCurrentPrcb();
          v88 = v87->SchedulerAssist;
          v89 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
          v23 = (v89 & v88[5]) == 0;
          v88[5] &= v89;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
    }
    __writecr8(v62);
    KeAbPostRelease(v12 + 280);
    v33 = (__int64)P;
    v39 = a8;
    *a8 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    goto LABEL_73;
  }
  v33 = (__int64)P;
  v39 = a8;
LABEL_73:
  v94 = 1;
LABEL_74:
  if ( (v10 & 6) == 6 && v33 && *(_QWORD *)(v33 + 184) )
  {
    v64 = *(_QWORD *)(*(_QWORD *)(v33 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v33 + 56) + 16LL)) )
    {
      v65 = *(struct _KEVENT **)(v64 + 184);
      if ( v65 )
        KeSetEvent(v65, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v64 + 544));
    }
    *(_QWORD *)(v33 + 184) = 0LL;
    *(_QWORD *)(v33 + 56) = 0LL;
    v33 = (__int64)P;
  }
  if ( v95 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
  if ( v97 )
  {
    v91 = *(_QWORD *)(v97 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v97 + 16)) )
    {
      v92 = *(struct _KEVENT **)(v91 + 184);
      if ( v92 )
        KeSetEvent(v92, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v91 + 544));
    }
    v33 = (__int64)P;
  }
  if ( (v10 & 4) != 0 )
    CcDereferenceFileOffset(v12, *a2);
  if ( v94 )
  {
    *a7 = v33;
    *a9 = *(_QWORD *)(v33 + 32);
  }
  else
  {
    *v39 = 0LL;
    if ( v33 )
      CcUnpinFileDataEx((char *)v33, v121, 0);
  }
  return v94;
}
