/*
 * XREFs of MiMapPageFileHash @ 0x1402CDE38
 * Callers:
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14026E480 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiWritePageFileHash @ 0x140389FC4 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14038D060 (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x14055D57C (MiFreePageFileHashPfn.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 AnyMultiplexedVm; // rax
  __int64 v10; // rax
  volatile LONG *v11; // rsi
  KIRQL v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int16 v15; // dx
  unsigned __int64 v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  signed __int32 v20; // ecx
  __int64 FileHashPage; // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int8 v26; // si
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // si
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  char v38; // di
  int v39; // esi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // eax
  unsigned __int8 v44; // bl
  __int64 v45; // rsi
  __int64 v46; // rbx
  unsigned int v47; // r14d
  unsigned int v48; // edi
  unsigned int v49; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  char v55; // di
  int v56; // r14d
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  bool v60; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  unsigned __int8 v69; // cl
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  __int64 v77; // rbx
  unsigned __int64 v78; // r8
  struct _KPRCB *v79; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v81; // eax
  char v82; // di
  int v83; // esi
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // r8
  bool v87; // zf
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  bool v92; // zf
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  signed __int32 v101[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v102; // [rsp+30h] [rbp-40h]
  unsigned int v103; // [rsp+34h] [rbp-3Ch]
  int v104; // [rsp+38h] [rbp-38h]
  unsigned __int64 updated; // [rsp+40h] [rbp-30h] BYREF
  __int64 v106; // [rsp+48h] [rbp-28h]
  __int64 v107; // [rsp+50h] [rbp-20h]
  __int128 v108; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v111; // [rsp+C8h] [rbp+58h]

  v111 = a4;
  v60 = *(_QWORD *)(a1 + 216) == 0LL;
  v108 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v60 )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3LL);
  MiInitializePageColorBase(AnyMultiplexedVm, 0, (__int64)&v108);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0xC0000010);
    v10 = v7 + 8 * a3 + 48;
  }
  else
  {
    v10 = 0LL;
  }
  v106 = v10;
  v11 = (volatile LONG *)(v8 + 232);
  while ( 1 )
  {
    v12 = ExAcquireSpinLockExclusive(v11);
    v13 = *(_QWORD *)(v8 + 216);
    v14 = v12;
    v15 = v13 + 4 * v5;
    v16 = (((v13 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = a5;
    if ( (4096 - (v15 & 0xFFFu)) >> 2 <= a5 )
      v17 = (4096 - (v15 & 0xFFFu)) >> 2;
    v103 = v17;
    updated = MI_READ_PTE_LOCK_FREE(v16);
    v19 = updated;
    if ( (updated & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&updated, v18)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v51 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
          if ( (v51 & 0x20) != 0 )
            v19 |= 0x20uLL;
          if ( (v51 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
        else
        {
          v19 = updated;
        }
      }
      v52 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v53 = *(_QWORD *)(v52 + 16);
      v54 = v53;
      if ( qword_140C4DF40 && (v53 & 0x10) == 0 )
        v54 = v53 & ~qword_140C4DF40;
      updated = MiUpdatePageFileHighInPte(v53, v103 + HIDWORD(v54));
      v55 = updated;
      v56 = 0;
      v57 = updated;
      if ( !(unsigned int)MiPteInShadowRange(v52 + 16, v58) )
        goto LABEL_66;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v56 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v60 = (v55 & 1) == 0;
          goto LABEL_64;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v60 = (v55 & 1) == 0;
LABEL_64:
        if ( !v60 )
          v57 |= 0x8000000000000000uLL;
      }
LABEL_66:
      *(_QWORD *)(v52 + 16) = v57;
      if ( v56 )
        MiWritePteShadow(v52 + 16, v57, v59);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v60 = (v64 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v64;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      v45 = v106;
      v47 = v111;
      v48 = v103;
      MiWritePageFileHash(v8, v7, v106, v111, v103);
      v46 = a2;
      goto LABEL_35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v60 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v60 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
    }
    __writecr8(v14);
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v108, 1u);
    FileHashPage = MiGetFileHashPage(a1, DWORD2(v108) & (unsigned int)v20 | HIDWORD(v108));
    v107 = FileHashPage;
    v22 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v23 = 0LL;
      v26 = 17;
    }
    else
    {
      v23 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v101, 0);
      MiSetPfnTbFlushStamp(v23, KiTbFlushTimeStamp, 0);
      updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v22, v16, (updated >> 12) & 0xFFFFFFFFFLL, 2560LL);
      v26 = MiLockPageInline(v23, v24, v25);
    }
    v102 = v26;
    v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    if ( v13 != *(_QWORD *)(a1 + 216) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v69 = KeGetCurrentIrql();
          if ( v69 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v69 >= 2u )
          {
            v70 = KeGetCurrentPrcb();
            v71 = v70->SchedulerAssist;
            v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v60 = (v72 & v71[5]) == 0;
            v71[5] &= v72;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
      }
      __writecr8(v27);
      if ( v22 == -1 )
        goto LABEL_110;
      MiFreePageFileHashPfn(v22);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && v26 <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            v75 = v74->SchedulerAssist;
            v76 = ~(unsigned __int16)(-1LL << (v26 + 1));
            v60 = (v76 & v75[5]) == 0;
            v75[5] &= v76;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
      }
      __writecr8(v26);
      v77 = *(_QWORD *)(a1 + 248);
      MiReturnCommit(v77, 1LL);
      v78 = 1LL;
      if ( (ULONG_PTR *)v77 != &MiSystemPartition )
        goto LABEL_108;
      v79 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v79->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_108;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v81 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v79->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v60 = (_DWORD)CachedResidentAvailable == v81;
          LODWORD(CachedResidentAvailable) = v81;
          if ( v60 )
            goto LABEL_109;
        }
        while ( v81 != -1 && (unsigned __int64)(v81 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v79->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v78 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v78 )
LABEL_108:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 7168), v78);
LABEL_109:
      _InterlockedDecrement64(&qword_140C4F828);
LABEL_110:
      v49 = a5;
      v5 = v111;
      v8 = a1;
      v46 = a2;
      goto LABEL_38;
    }
    v28 = MI_READ_PTE_LOCK_FREE(v16);
    v29 = v28;
    if ( qword_140C4DF40 )
    {
      if ( (v28 & 0x10) != 0 )
        v29 = v28 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v29 = v28 & ~qword_140C4DF40;
    }
    v30 = HIDWORD(v29);
    v31 = (unsigned int)v30 + v103;
    if ( v22 == -1 )
    {
      updated = MiUpdatePageFileHighInPte(v28, v31);
      v82 = updated;
      v83 = 0;
      v84 = updated;
      if ( (unsigned int)MiPteInShadowRange(v16, v85) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v83 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v87 = (v82 & 1) == 0;
            goto LABEL_118;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v87 = (v82 & 1) == 0;
LABEL_118:
          if ( !v87 )
            v84 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v84;
      if ( v83 )
        MiWritePteShadow(v16, v84, v86);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v88 = KeGetCurrentIrql();
          if ( v88 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v88 >= 2u )
          {
            v89 = KeGetCurrentPrcb();
            v90 = v89->SchedulerAssist;
            v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
            v60 = (v91 & v90[5]) == 0;
            v90[5] &= v91;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(v89);
          }
        }
      }
      __writecr8(v27);
      v46 = a2;
      v48 = v103;
      v45 = v106;
      v47 = v111;
      goto LABEL_34;
    }
    v32 = MiUpdatePageFileHighInPte(*(_QWORD *)(v23 + 16), v31);
    v104 = 0;
    v33 = v32;
    updated = v32;
    v34 = v32;
    if ( !(unsigned int)MiPteInShadowRange(v23 + 16, v35) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v33 & 1) != 0 )
      {
        v34 |= 0x8000000000000000uLL;
      }
LABEL_20:
      v37 = v104;
      goto LABEL_21;
    }
    v37 = 1;
    if ( !HIBYTE(word_140C4E008) && (v33 & 1) != 0 )
      v34 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)(v23 + 16) = v34;
    if ( v37 )
      MiWritePteShadow(v23 + 16, v34, v36);
    if ( (_DWORD)v30 )
      *(_BYTE *)(v23 + 34) &= ~0x10u;
    updated = MiMakeValidPte(v16, v107, 2684354564LL);
    v38 = updated;
    v39 = 0;
    v40 = updated;
    if ( !(unsigned int)MiPteInShadowRange(v16, v41) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v39 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v92 = (v38 & 1) == 0;
        goto LABEL_142;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v92 = (v38 & 1) == 0;
LABEL_142:
      if ( !v92 )
        v40 |= 0x8000000000000000uLL;
    }
LABEL_26:
    *(_QWORD *)v16 = v40;
    if ( v39 )
      MiWritePteShadow(v16, v40, v42);
    v43 = ++*(_DWORD *)(a1 + 208);
    if ( v43 > *(_DWORD *)(a1 + 212) )
      *(_DWORD *)(a1 + 212) = v43;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v93 = KeGetCurrentIrql();
        if ( v93 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->SchedulerAssist;
          v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v60 = (v96 & v95[5]) == 0;
          v95[5] &= v96;
          if ( v60 )
            KiRemoveSystemWorkPriorityKick(v94);
        }
      }
    }
    __writecr8(v27);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v97 = KeGetCurrentIrql(), v97 <= 0xFu) )
    {
      v44 = v102;
      if ( v102 <= 0xFu && v97 >= 2u )
      {
        v98 = KeGetCurrentPrcb();
        v99 = v98->SchedulerAssist;
        v100 = ~(unsigned __int16)(-1LL << (v102 + 1));
        v60 = (v100 & v99[5]) == 0;
        v99[5] &= v100;
        if ( v60 )
          KiRemoveSystemWorkPriorityKick(v98);
      }
    }
    else
    {
      v44 = v102;
    }
    __writecr8(v44);
    v45 = v106;
    v46 = a2;
    v47 = v111;
    v48 = v103;
    MiWritePageFileHash(a1, a2, v106, v111, v103);
LABEL_34:
    v8 = a1;
LABEL_35:
    if ( v45 )
      v106 = v45 + 8LL * v48;
    v5 = v48 + v47;
    v49 = a5 - v48;
    v111 = v5;
    a5 -= v48;
LABEL_38:
    v11 = (volatile LONG *)(v8 + 232);
    if ( !v49 )
      break;
    v7 = a2;
  }
  if ( v46 )
  {
    if ( (*(_BYTE *)(v46 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v46 + 24), (PMDL)v46);
  }
}
