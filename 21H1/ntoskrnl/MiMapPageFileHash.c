/*
 * XREFs of MiMapPageFileHash @ 0x140341CD8
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x1403449A0 (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiWritePageFileHash @ 0x140386744 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x140389630 (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x140557A8C (MiFreePageFileHashPfn.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r13
  __int64 v8; // r12
  char *AnyMultiplexedVm; // rax
  __int64 v10; // rax
  volatile LONG *v11; // rsi
  KIRQL v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  __int16 v15; // dx
  unsigned __int64 v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  signed __int32 v19; // ecx
  __int64 FileHashPage; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int8 v25; // si
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // si
  __int64 v33; // rbx
  __int64 v34; // r9
  int v35; // eax
  char v36; // di
  int v37; // esi
  __int64 v38; // rbx
  unsigned int v39; // eax
  unsigned __int8 v40; // bl
  __int64 v41; // rsi
  __int64 v42; // rbx
  unsigned int v43; // r14d
  unsigned int v44; // edi
  unsigned int v45; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  char v51; // di
  int v52; // r14d
  __int64 v53; // rbx
  bool v54; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int8 v63; // cl
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  __int64 v71; // rbx
  unsigned __int64 v72; // r8
  struct _KPRCB *v73; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v75; // eax
  char v76; // di
  int v77; // esi
  __int64 v78; // rbx
  bool v79; // zf
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  bool v84; // zf
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  signed __int32 v93[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v94; // [rsp+30h] [rbp-40h]
  unsigned int v95; // [rsp+34h] [rbp-3Ch]
  int v96; // [rsp+38h] [rbp-38h]
  unsigned __int64 updated; // [rsp+40h] [rbp-30h] BYREF
  __int64 v98; // [rsp+48h] [rbp-28h]
  __int64 v99; // [rsp+50h] [rbp-20h]
  __int128 v100; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v103; // [rsp+C8h] [rbp+58h]

  v103 = a4;
  v54 = *(_QWORD *)(a1 + 216) == 0LL;
  v100 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v54 )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v100);
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
  v98 = v10;
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
    v95 = v17;
    updated = MI_READ_PTE_LOCK_FREE(v16);
    v18 = updated;
    if ( (updated & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&updated)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v47 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
          if ( (v47 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v47 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        else
        {
          v18 = updated;
        }
      }
      v48 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v49 = *(_QWORD *)(v48 + 16);
      v50 = v49;
      if ( qword_140C4DE80 && (v49 & 0x10) == 0 )
        v50 = v49 & ~qword_140C4DE80;
      updated = MiUpdatePageFileHighInPte(v49, v95 + HIDWORD(v50));
      v51 = updated;
      v52 = 0;
      v53 = updated;
      if ( !MiPteInShadowRange(v48 + 16) )
        goto LABEL_66;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v52 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v54 = (v51 & 1) == 0;
          goto LABEL_64;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v54 = (v51 & 1) == 0;
LABEL_64:
        if ( !v54 )
          v53 |= 0x8000000000000000uLL;
      }
LABEL_66:
      *(_QWORD *)(v48 + 16) = v53;
      if ( v52 )
        MiWritePteShadow(v48 + 16, v53);
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
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v54 = (v58 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v58;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      v41 = v98;
      v43 = v103;
      v44 = v95;
      MiWritePageFileHash(v8, v7, v98, v103, v95);
      v42 = a2;
      goto LABEL_35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v54 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v14);
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v100, 1u);
    FileHashPage = MiGetFileHashPage(a1, DWORD2(v100) & (unsigned int)v19 | HIDWORD(v100));
    v99 = FileHashPage;
    v21 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v22 = 0LL;
      v25 = 17;
    }
    else
    {
      v22 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v93, 0);
      MiSetPfnTbFlushStamp(v22, KiTbFlushTimeStamp, 0);
      updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v21, v16, (updated >> 12) & 0xFFFFFFFFFLL, 2560LL);
      v25 = MiLockPageInline(v22, v23, v24);
    }
    v94 = v25;
    v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    if ( v13 != *(_QWORD *)(a1 + 216) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v63 = KeGetCurrentIrql();
          if ( v63 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = v64->SchedulerAssist;
            v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
            v54 = (v66 & v65[5]) == 0;
            v65[5] &= v66;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v64);
          }
        }
      }
      __writecr8(v26);
      if ( v21 == -1 )
        goto LABEL_110;
      MiFreePageFileHashPfn(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && v25 <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = v68->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << (v25 + 1));
            v54 = (v70 & v69[5]) == 0;
            v69[5] &= v70;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v68);
          }
        }
      }
      __writecr8(v25);
      v71 = *(_QWORD *)(a1 + 248);
      MiReturnCommit(v71, 1LL);
      v72 = 1LL;
      if ( (ULONG_PTR *)v71 != &MiSystemPartition )
        goto LABEL_108;
      v73 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v73->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_108;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v75 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v73->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v54 = (_DWORD)CachedResidentAvailable == v75;
          LODWORD(CachedResidentAvailable) = v75;
          if ( v54 )
            goto LABEL_109;
        }
        while ( v75 != -1 && (unsigned __int64)(v75 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v73->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v72 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v72 )
LABEL_108:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 7168), v72);
LABEL_109:
      _InterlockedDecrement64(&qword_140C4F768);
LABEL_110:
      v45 = a5;
      v5 = v103;
      v8 = a1;
      v42 = a2;
      goto LABEL_38;
    }
    v27 = MI_READ_PTE_LOCK_FREE(v16);
    v28 = v27;
    if ( qword_140C4DE80 )
    {
      if ( (v27 & 0x10) != 0 )
        v28 = v27 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v28 = v27 & ~qword_140C4DE80;
    }
    v29 = HIDWORD(v28);
    v30 = (unsigned int)v29 + v95;
    if ( v21 == -1 )
    {
      updated = MiUpdatePageFileHighInPte(v27, v30);
      v76 = updated;
      v77 = 0;
      v78 = updated;
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v77 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v79 = (v76 & 1) == 0;
            goto LABEL_118;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v79 = (v76 & 1) == 0;
LABEL_118:
          if ( !v79 )
            v78 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v78;
      if ( v77 )
        MiWritePteShadow(v16, v78);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v80 = KeGetCurrentIrql();
          if ( v80 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v80 >= 2u )
          {
            v81 = KeGetCurrentPrcb();
            v82 = v81->SchedulerAssist;
            v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
            v54 = (v83 & v82[5]) == 0;
            v82[5] &= v83;
            if ( v54 )
              KiRemoveSystemWorkPriorityKick(v81);
          }
        }
      }
      __writecr8(v26);
      v42 = a2;
      v44 = v95;
      v41 = v98;
      v43 = v103;
      goto LABEL_34;
    }
    v31 = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), v30);
    v96 = 0;
    v32 = v31;
    updated = v31;
    v33 = v31;
    if ( !MiPteInShadowRange(v22 + 16) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v32 & 1) != 0 )
      {
        v33 |= 0x8000000000000000uLL;
      }
LABEL_20:
      v35 = v96;
      goto LABEL_21;
    }
    v35 = 1;
    if ( !HIBYTE(word_140C4DF48) && (v32 & 1) != 0 )
      v33 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)(v22 + 16) = v33;
    if ( v35 )
      MiWritePteShadow(v22 + 16, v33);
    if ( (_DWORD)v29 )
      *(_BYTE *)(v22 + 34) &= ~0x10u;
    updated = MiMakeValidPte(v16, v99, 2684354564LL, v34);
    v36 = updated;
    v37 = 0;
    v38 = updated;
    if ( !MiPteInShadowRange(v16) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v37 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v84 = (v36 & 1) == 0;
        goto LABEL_142;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v84 = (v36 & 1) == 0;
LABEL_142:
      if ( !v84 )
        v38 |= 0x8000000000000000uLL;
    }
LABEL_26:
    *(_QWORD *)v16 = v38;
    if ( v37 )
      MiWritePteShadow(v16, v38);
    v39 = ++*(_DWORD *)(a1 + 208);
    if ( v39 > *(_DWORD *)(a1 + 212) )
      *(_DWORD *)(a1 + 212) = v39;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v85 = KeGetCurrentIrql();
        if ( v85 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v54 = (v88 & v87[5]) == 0;
          v87[5] &= v88;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v86);
        }
      }
    }
    __writecr8(v26);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v89 = KeGetCurrentIrql(), v89 <= 0xFu) )
    {
      v40 = v94;
      if ( v94 <= 0xFu && v89 >= 2u )
      {
        v90 = KeGetCurrentPrcb();
        v91 = v90->SchedulerAssist;
        v92 = ~(unsigned __int16)(-1LL << (v94 + 1));
        v54 = (v92 & v91[5]) == 0;
        v91[5] &= v92;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v90);
      }
    }
    else
    {
      v40 = v94;
    }
    __writecr8(v40);
    v41 = v98;
    v42 = a2;
    v43 = v103;
    v44 = v95;
    MiWritePageFileHash(a1, a2, v98, v103, v95);
LABEL_34:
    v8 = a1;
LABEL_35:
    if ( v41 )
      v98 = v41 + 8LL * v44;
    v5 = v44 + v43;
    v45 = a5 - v44;
    v103 = v5;
    a5 -= v44;
LABEL_38:
    v11 = (volatile LONG *)(v8 + 232);
    if ( !v45 )
      break;
    v7 = a2;
  }
  if ( v42 )
  {
    if ( (*(_BYTE *)(v42 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v42 + 24), (PMDL)v42);
  }
}
