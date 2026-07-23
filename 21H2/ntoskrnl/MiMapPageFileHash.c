/*
 * XREFs of MiMapPageFileHash @ 0x14024C338
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14025C420 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWritePageFileHash @ 0x14038A114 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14038D1B0 (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x14055D7BC (MiFreePageFileHashPfn.c)
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
  unsigned __int64 v18; // rbx
  signed __int32 v19; // ecx
  __int64 FileHashPage; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned __int8 v23; // si
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // si
  __int64 v31; // rbx
  int v32; // eax
  char v33; // di
  int v34; // esi
  __int64 v35; // rbx
  unsigned int v36; // eax
  unsigned __int8 v37; // bl
  __int64 v38; // rsi
  __int64 v39; // rbx
  unsigned int v40; // r14d
  unsigned int v41; // edi
  unsigned int v42; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  char v48; // di
  int v49; // r14d
  __int64 v50; // rbx
  bool v51; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int8 v60; // cl
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  __int64 v64; // r8
  _DWORD *v65; // r9
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  int v68; // eax
  __int64 v69; // rbx
  unsigned __int64 v70; // r8
  struct _KPRCB *v71; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v73; // eax
  char v74; // di
  int v75; // esi
  __int64 v76; // rbx
  bool v77; // zf
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  bool v82; // zf
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  signed __int32 v91[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v92; // [rsp+30h] [rbp-40h]
  unsigned int v93; // [rsp+34h] [rbp-3Ch]
  int v94; // [rsp+38h] [rbp-38h]
  unsigned __int64 updated; // [rsp+40h] [rbp-30h] BYREF
  __int64 v96; // [rsp+48h] [rbp-28h]
  __int64 v97; // [rsp+50h] [rbp-20h]
  __int128 v98; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v101; // [rsp+C8h] [rbp+58h]

  v101 = a4;
  v51 = *(_QWORD *)(a1 + 216) == 0LL;
  v98 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v51 )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3LL);
  MiInitializePageColorBase(AnyMultiplexedVm, 0LL, &v98);
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
  v96 = v10;
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
    v93 = v17;
    updated = MI_READ_PTE_LOCK_FREE(v16);
    v18 = updated;
    if ( (updated & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&updated)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v44 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
          if ( (v44 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v44 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        else
        {
          v18 = updated;
        }
      }
      v45 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v46 = *(_QWORD *)(v45 + 16);
      v47 = v46;
      if ( qword_140C4DF80 && (v46 & 0x10) == 0 )
        v47 = v46 & ~qword_140C4DF80;
      updated = MiUpdatePageFileHighInPte(v46, v93 + HIDWORD(v47));
      v48 = updated;
      v49 = 0;
      v50 = updated;
      if ( !(unsigned int)MiPteInShadowRange(v45 + 16) )
        goto LABEL_66;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v49 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v51 = (v48 & 1) == 0;
          goto LABEL_64;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v51 = (v48 & 1) == 0;
LABEL_64:
        if ( !v51 )
          v50 |= 0x8000000000000000uLL;
      }
LABEL_66:
      *(_QWORD *)(v45 + 16) = v50;
      if ( v49 )
        MiWritePteShadow(v45 + 16, v50);
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
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v51 = (v55 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v55;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      v38 = v96;
      v40 = v101;
      v41 = v93;
      MiWritePageFileHash(v8, v7, v96, v101, v93);
      v39 = a2;
      goto LABEL_35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v51 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
    }
    __writecr8(v14);
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v98, 1u);
    FileHashPage = MiGetFileHashPage(a1, DWORD2(v98) & (unsigned int)v19 | HIDWORD(v98));
    v97 = FileHashPage;
    v21 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v22 = 0LL;
      v23 = 17;
    }
    else
    {
      v22 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v91, 0);
      MiSetPfnTbFlushStamp(v22, (unsigned int)KiTbFlushTimeStamp, 0LL);
      updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v21, v16, (updated >> 12) & 0xFFFFFFFFFLL, 2560LL);
      v23 = MiLockPageInline(v22);
    }
    v92 = v23;
    v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    if ( v13 != *(_QWORD *)(a1 + 216) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v60 = KeGetCurrentIrql();
          if ( v60 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v60 >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v62 = v61->SchedulerAssist;
            v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v51 = (v63 & v62[5]) == 0;
            v62[5] &= v63;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
      }
      __writecr8(v24);
      if ( v21 == -1 )
        goto LABEL_110;
      MiFreePageFileHashPfn(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && v23 <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v65 = v67->SchedulerAssist;
            v68 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v51 = (v68 & v65[5]) == 0;
            v64 = (unsigned int)v68 & v65[5];
            v65[5] = v64;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
      }
      __writecr8(v23);
      v69 = *(_QWORD *)(a1 + 248);
      MiReturnCommit(v69, 1LL, v64, v65);
      v70 = 1LL;
      if ( (ULONG_PTR *)v69 != &MiSystemPartition )
        goto LABEL_108;
      v71 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v71->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_108;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v73 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v71->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v51 = (_DWORD)CachedResidentAvailable == v73;
          LODWORD(CachedResidentAvailable) = v73;
          if ( v51 )
            goto LABEL_109;
        }
        while ( v73 != -1 && (unsigned __int64)(v73 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v71->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v70 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v70 )
LABEL_108:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 7168), v70);
LABEL_109:
      _InterlockedDecrement64(&qword_140C4F868);
LABEL_110:
      v42 = a5;
      v5 = v101;
      v8 = a1;
      v39 = a2;
      goto LABEL_38;
    }
    v25 = MI_READ_PTE_LOCK_FREE(v16);
    v26 = v25;
    if ( qword_140C4DF80 )
    {
      if ( (v25 & 0x10) != 0 )
        v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v26 = v25 & ~qword_140C4DF80;
    }
    v27 = HIDWORD(v26);
    v28 = (unsigned int)v27 + v93;
    if ( v21 == -1 )
    {
      updated = MiUpdatePageFileHighInPte(v25, v28);
      v74 = updated;
      v75 = 0;
      v76 = updated;
      if ( (unsigned int)MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v75 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v77 = (v74 & 1) == 0;
            goto LABEL_118;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v77 = (v74 & 1) == 0;
LABEL_118:
          if ( !v77 )
            v76 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v76;
      if ( v75 )
        MiWritePteShadow(v16, v76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = v79->SchedulerAssist;
            v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v51 = (v81 & v80[5]) == 0;
            v80[5] &= v81;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(v79);
          }
        }
      }
      __writecr8(v24);
      v39 = a2;
      v41 = v93;
      v38 = v96;
      v40 = v101;
      goto LABEL_34;
    }
    v29 = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), v28);
    v94 = 0;
    v30 = v29;
    updated = v29;
    v31 = v29;
    if ( !(unsigned int)MiPteInShadowRange(v22 + 16) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v30 & 1) != 0 )
      {
        v31 |= 0x8000000000000000uLL;
      }
LABEL_20:
      v32 = v94;
      goto LABEL_21;
    }
    v32 = 1;
    if ( !HIBYTE(word_140C4E048) && (v30 & 1) != 0 )
      v31 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)(v22 + 16) = v31;
    if ( v32 )
      MiWritePteShadow(v22 + 16, v31);
    if ( (_DWORD)v27 )
      *(_BYTE *)(v22 + 34) &= ~0x10u;
    updated = MiMakeValidPte(v16, v97, 2684354564LL);
    v33 = updated;
    v34 = 0;
    v35 = updated;
    if ( !(unsigned int)MiPteInShadowRange(v16) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v34 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v82 = (v33 & 1) == 0;
        goto LABEL_142;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v82 = (v33 & 1) == 0;
LABEL_142:
      if ( !v82 )
        v35 |= 0x8000000000000000uLL;
    }
LABEL_26:
    *(_QWORD *)v16 = v35;
    if ( v34 )
      MiWritePteShadow(v16, v35);
    v36 = ++*(_DWORD *)(a1 + 208);
    if ( v36 > *(_DWORD *)(a1 + 212) )
      *(_DWORD *)(a1 + 212) = v36;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v83 = KeGetCurrentIrql();
        if ( v83 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v83 >= 2u )
        {
          v84 = KeGetCurrentPrcb();
          v85 = v84->SchedulerAssist;
          v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v51 = (v86 & v85[5]) == 0;
          v85[5] &= v86;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
    }
    __writecr8(v24);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v87 = KeGetCurrentIrql(), v87 <= 0xFu) )
    {
      v37 = v92;
      if ( v92 <= 0xFu && v87 >= 2u )
      {
        v88 = KeGetCurrentPrcb();
        v89 = v88->SchedulerAssist;
        v90 = ~(unsigned __int16)(-1LL << (v92 + 1));
        v51 = (v90 & v89[5]) == 0;
        v89[5] &= v90;
        if ( v51 )
          KiRemoveSystemWorkPriorityKick(v88);
      }
    }
    else
    {
      v37 = v92;
    }
    __writecr8(v37);
    v38 = v96;
    v39 = a2;
    v40 = v101;
    v41 = v93;
    MiWritePageFileHash(a1, a2, v96, v101, v93);
LABEL_34:
    v8 = a1;
LABEL_35:
    if ( v38 )
      v96 = v38 + 8LL * v41;
    v5 = v41 + v40;
    v42 = a5 - v41;
    v101 = v5;
    a5 -= v41;
LABEL_38:
    v11 = (volatile LONG *)(v8 + 232);
    if ( !v42 )
      break;
    v7 = a2;
  }
  if ( v39 )
  {
    if ( (*(_BYTE *)(v39 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v39 + 24), (PMDL)v39);
  }
}
