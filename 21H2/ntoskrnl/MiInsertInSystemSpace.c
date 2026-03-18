/*
 * XREFs of MiInsertInSystemSpace @ 0x14026D460
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiReferenceDataSubsections @ 0x14026CF88 (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MiControlAreaRequiresCharge @ 0x140287380 (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiUnmapLargePages @ 0x1403A111C (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403C736C (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDereferenceDataSubsections @ 0x1405C48E0 (MiDereferenceDataSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DDB48 (MiCreatePerSessionProtos.c)
 *     MiAddMappedPtes @ 0x1406F40E0 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x1406FC03C (MiReferenceFileObjectForMap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  int active; // ebx
  __int64 v19; // rax
  __int64 Pool; // rax
  _DWORD *v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  unsigned int SessionId; // r12d
  __int64 v27; // rsi
  ULONG_PTR v28; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v30; // r13
  __int64 SharedVm; // rbx
  KIRQL v32; // al
  ULONG_PTR v33; // r8
  KIRQL v34; // si
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  struct _KTHREAD *v37; // rsi
  char *p_Process; // rbx
  int v39; // r13d
  __int64 v40; // rdx
  int v41; // r8d
  bool v42; // zf
  ULONG_PTR v43; // r12
  int v44; // r15d
  unsigned int v45; // edi
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 *v48; // rsi
  char v50; // r12
  ULONG_PTR PageTablesForLargeMap; // rax
  __int64 v52; // r14
  volatile LONG *v53; // rbx
  KIRQL v54; // al
  unsigned __int64 v55; // r8
  _QWORD *v56; // rdx
  unsigned __int64 v57; // rsi
  _QWORD *v58; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v62; // edx
  int v63; // ebp
  __int64 v64; // rdi
  unsigned __int64 v65; // r14
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // r15
  __int64 v69; // r8
  int v70; // r12d
  unsigned __int64 v71; // rax
  unsigned int v72; // [rsp+40h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-120h]
  int v74; // [rsp+50h] [rbp-118h]
  __int64 v75; // [rsp+58h] [rbp-110h]
  __int64 v76; // [rsp+60h] [rbp-108h]
  __int64 v77; // [rsp+68h] [rbp-100h]
  unsigned __int64 v78; // [rsp+70h] [rbp-F8h]
  __int64 v79; // [rsp+78h] [rbp-F0h]
  __int64 v80; // [rsp+80h] [rbp-E8h] BYREF
  __int64 AnyMultiplexedVm; // [rsp+88h] [rbp-E0h]
  _QWORD v82[27]; // [rsp+90h] [rbp-D8h] BYREF
  char v83; // [rsp+170h] [rbp+8h]

  v9 = 0LL;
  v80 = 0LL;
  memset(v82, 0, 0x98uLL);
  v10 = 0LL;
  v11 = 3;
  BugCheckParameter1 = 0LL;
  v76 = 0LL;
  v12 = 0LL;
  v74 = 0x7FFFF;
  *a6 = 0LL;
  v83 = 0;
  v72 = 3;
  v75 = MiSectionControlArea(a2);
  v13 = (a1 >> 16) + ((_WORD)a1 != 0);
  if ( v13 >= 0x10000 )
  {
    ++dword_140C52F60;
    return (unsigned int)-1073741793;
  }
  v77 = MiOffsetToProtos(v75, *a3, &v80);
  if ( !v77 )
  {
    ++dword_140C52F60;
    return (unsigned int)-1073741801;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  LOBYTE(v9) = (a1 & 0xFFF) != 0;
  v14 = (a1 >> 12) + v9;
  v15 = 16 * v13;
  v16 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v78 = v15;
  v79 = v16;
  if ( (*(_DWORD *)(v75 + 56) & 0x420) != 0 )
    goto LABEL_6;
  v17 = MiReferenceDataSubsections(v75, a3, v14, &v72);
  v11 = v72;
  active = v17;
  if ( v17 < 0 )
  {
    v27 = 0LL;
    v50 = 0;
    goto LABEL_89;
  }
  v83 = 1;
  if ( v72 >= 3 )
  {
LABEL_6:
    v19 = MiReservePtes(&unk_140C52F40, (unsigned int)v15);
    v12 = v19;
    if ( !v19 )
    {
      ++dword_140C52F60;
      active = -1073741670;
      v50 = 0;
      v27 = 0LL;
      goto LABEL_93;
    }
    BugCheckParameter1 = v19 << 25 >> 16;
  }
  else
  {
    PageTablesForLargeMap = MiGetPageTablesForLargeMap(v15, 9LL, v72);
    BugCheckParameter1 = PageTablesForLargeMap;
    if ( !PageTablesForLargeMap )
    {
      ++dword_140C52F60;
      active = -1073741670;
      v50 = 0;
      v27 = 0LL;
      goto LABEL_73;
    }
    v12 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  Pool = MiAllocatePool(64LL, 104LL, 2002151757LL);
  v10 = Pool;
  if ( !Pool )
  {
    v27 = v76;
    active = -1073741670;
    v50 = 0;
    goto LABEL_89;
  }
  v21 = (_DWORD *)v75;
  v22 = v75;
  *(_DWORD *)(Pool + 56) ^= (*(_DWORD *)(Pool + 56) ^ (8 * v11)) & 0x18;
  v23 = MiControlAreaRequiresCharge(v22, (unsigned int)((a5 & 8) != 0) + 3);
  v24 = v23;
  if ( !v23 )
  {
    v27 = v76;
    active = -1073740277;
    v50 = 0;
    goto LABEL_89;
  }
  if ( v23 == 2 )
    *(_DWORD *)(v10 + 56) |= 4u;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000000) != 0 )
    *(_DWORD *)(v10 + 56) |= 1u;
  if ( (a4 & 1) != 0 )
    *(_DWORD *)(v10 + 56) |= 2u;
  v25 = v21[14];
  SessionId = -1;
  if ( (v25 & 0x20) == 0 )
  {
    v27 = v76;
    goto LABEL_18;
  }
  if ( (v25 & 0x8000000) != 0 )
  {
    v74 = -1;
    if ( (int)MiCreatePerSessionProtos(v21, 0xFFFFFFFFLL) < 0 )
    {
      v27 = v76;
      active = -1073741801;
      v50 = 0;
      goto LABEL_89;
    }
    v50 = 1;
  }
  else
  {
    v50 = 0;
  }
  v27 = *(_QWORD *)(*(_QWORD *)v21 + 48LL);
  if ( v27 && !(unsigned int)MiChargeCommit(v79, v27, 0LL) )
  {
    v27 = 0LL;
    active = -1073741523;
    goto LABEL_89;
  }
  if ( v24 == 2 )
  {
    v77 = v75 + 128;
    active = MiReferenceActiveSubsection(v75 + 128);
    if ( active < 0 )
    {
LABEL_89:
      ++dword_140C52F60;
      if ( v12 )
      {
        if ( v11 >= 3 )
          MiReleasePtes(&unk_140C52F40, v12, (unsigned int)v78);
        else
          MiUnmapLargePages(BugCheckParameter1, v78 << 12, 9LL);
      }
LABEL_93:
      if ( !v83 )
      {
        v52 = v75;
        goto LABEL_74;
      }
LABEL_73:
      v52 = v75;
      MiDereferenceDataSubsections(v75, (_DWORD)a3, v14, v11 < 3, 1);
LABEL_74:
      if ( v50 )
        MiDereferencePerSessionProtos(v52);
      if ( v27 )
        MiReturnCommit(v79, v27);
      if ( v10 )
        ExFreePoolWithTag((PVOID)v10, 0);
      return (unsigned int)active;
    }
  }
  SessionId = -1;
LABEL_18:
  *(_QWORD *)(v10 + 32) = v14 << 12;
  *(_QWORD *)(v10 + 48) = v77;
  *(_QWORD *)(v10 + 24) = (unsigned __int64)*a3 >> 12;
  v28 = BugCheckParameter1 | 2;
  *(_QWORD *)(v10 + 40) = v27;
  *(_QWORD *)(v10 + 88) = v28;
  *(_DWORD *)(v10 + 96) = v74;
  *(_QWORD *)(v10 + 64) = MiReferenceFileObjectForMap(a2);
  CurrentThread = KeGetCurrentThread();
  if ( v72 || (*(_DWORD *)(v75 + 56) & 0x400) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F5E8, 0LL);
    v30 = AnyMultiplexedVm;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v33) = 0;
    ++dword_140C4F5F8;
    v34 = v32;
    v35 = P;
    if ( P )
    {
      while ( 1 )
      {
        v33 = v35[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( BugCheckParameter1 < v33 + v35[4] && BugCheckParameter1 < v33 )
        {
          v36 = (_QWORD *)*v35;
          if ( !*v35 )
          {
            LOBYTE(v33) = 0;
            break;
          }
        }
        else
        {
          v36 = (_QWORD *)v35[1];
          if ( !v36 )
          {
            LOBYTE(v33) = 1;
            break;
          }
        }
        v35 = v36;
      }
    }
    RtlAvlInsertNodeEx(&P, v35, v33, v10);
    MiUnlockWorkingSetExclusive(v30, v34);
    if ( (*(_DWORD *)(v75 + 56) & 0x400) == 0 )
    {
      v82[0] = v75;
      MiManageSubsectionView(v82, v10 + 72, 3LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F5E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F5E8);
    v37 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C4F5E8 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v37->ApcState.Process);
    _disable();
    p_Process = (char *)&v37[1].Process;
    v39 = 0;
    v40 = 0LL;
    do
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C4F5E8 & 0x7FFFFFFFFFFFFFFCLL)
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == SessionId )
      {
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, v40, 0x7FFFFFFFFFFFFFFCLL);
          _disable();
        }
        v41 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        v37->AbEntrySummary |= 1 << p_Process[16];
        _enable();
        if ( v41 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)v37, (__int64)&qword_140C4F5E8, v41);
        goto LABEL_39;
      }
      v40 = (unsigned int)(v40 + 1);
      p_Process += 96;
    }
    while ( (unsigned int)v40 < 6 );
    if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&qword_140C4F5E8, SessionId, 0LL);
    _enable();
LABEL_39:
    v42 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v42 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v43 = BugCheckParameter1;
  }
  else
  {
    v43 = BugCheckParameter1;
    v53 = (volatile LONG *)((char *)&unk_140C4F618 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
    v54 = ExAcquireSpinLockExclusive(v53 + 3);
    ++*((_DWORD *)v53 + 2);
    LOBYTE(v55) = 0;
    v56 = *(_QWORD **)v53;
    v57 = v54;
    if ( *(_QWORD *)v53 )
    {
      while ( 1 )
      {
        v55 = v56[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v43 >= v55 + v56[4] || v43 >= v55 )
        {
          v58 = (_QWORD *)v56[1];
          if ( !v58 )
          {
            LOBYTE(v55) = 1;
            break;
          }
        }
        else
        {
          v58 = (_QWORD *)*v56;
          if ( !*v56 )
          {
            LOBYTE(v55) = 0;
            break;
          }
        }
        v56 = v58;
      }
    }
    RtlAvlInsertNodeEx(v53, v56, v55, v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v53 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v57 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
          v42 = (v62 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v62;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v57);
    v39 = 0;
  }
  v44 = v75;
  if ( (*(_DWORD *)(v10 + 56) & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v75 + 92));
  if ( v72 < 3 )
  {
    v63 = v43;
    v64 = MiLargePageSizes[v72];
    v65 = 0LL;
    v66 = *(_QWORD *)(v77 + 8);
    v67 = v66 + 8 * v80;
    v68 = v66 + 8LL * *(unsigned int *)(v77 + 44);
    if ( v78 )
    {
      v70 = MiGetAnyMultiplexedVm(3LL);
      do
      {
        if ( v67 == v68 )
        {
          v77 = *(_QWORD *)(v69 + 16);
          v67 = *(_QWORD *)(v77 + 8);
          v68 = v67 + 8LL * *(unsigned int *)(v77 + 44);
        }
        v71 = MI_READ_PTE_LOCK_FREE(v67);
        MiMapWithLargePages(v70, v63, v71 >> 12, v64, v72, 4, 1);
        v69 = v77;
        v63 += (_DWORD)v64 << 12;
        v67 += 8 * v64;
        v65 += v64;
      }
      while ( v65 < v78 );
      v43 = BugCheckParameter1;
      v39 = 0;
    }
    goto LABEL_53;
  }
  v45 = 0;
  if ( !v14 )
    goto LABEL_52;
  v46 = 0LL;
  do
  {
    v47 = ZeroPte;
    v48 = (unsigned __int64 *)(v12 + 8 * v46);
    if ( !(unsigned int)MiPteInShadowRange(v48) )
      goto LABEL_49;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v47 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_49:
      *v48 = v47;
      goto LABEL_50;
    }
    if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
      v47 = ZeroPte | 0x8000000000000000uLL;
    *v48 = v47;
    MiWritePteShadow((__int64)v48, v47);
LABEL_50:
    v46 = ++v45;
  }
  while ( v45 < v14 );
  v43 = BugCheckParameter1;
LABEL_52:
  v39 = MiAddMappedPtes(v12, v14, v44, (_DWORD)a3, v74, 0);
  if ( v39 < 0 )
  {
    ++dword_140C52F60;
    MiRemoveFromSystemSpace(v43, 0);
  }
  else
  {
LABEL_53:
    *a6 = v43;
  }
  return (unsigned int)v39;
}
