/*
 * XREFs of MiMapPageFileHash @ 0x14023BDF8
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x140239338 (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1403366E8 (MiInitializePfnForOtherProcess.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiWritePageFileHash @ 0x140389874 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14038C940 (MiGetFileHashPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreePageFileHashPfn @ 0x14055BAAC (MiFreePageFileHashPfn.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  char v37; // di
  int v38; // esi
  unsigned __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned __int8 v45; // bl
  __int64 v46; // rsi
  __int64 v47; // rbx
  unsigned int v48; // r14d
  unsigned int v49; // edi
  unsigned int v50; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  char v56; // di
  int v57; // r14d
  unsigned __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  bool v63; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  __int64 v80; // rbx
  unsigned __int64 v81; // r8
  struct _KPRCB *v82; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v84; // eax
  char v85; // di
  int v86; // esi
  unsigned __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  bool v92; // zf
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  bool v97; // zf
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  unsigned __int8 v102; // al
  struct _KPRCB *v103; // r10
  _DWORD *v104; // r9
  int v105; // eax
  signed __int32 v106[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v107; // [rsp+30h] [rbp-40h]
  unsigned int v108; // [rsp+34h] [rbp-3Ch]
  int v109; // [rsp+38h] [rbp-38h]
  unsigned __int64 updated; // [rsp+40h] [rbp-30h] BYREF
  __int64 v111; // [rsp+48h] [rbp-28h]
  __int64 v112; // [rsp+50h] [rbp-20h]
  __int128 v113; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v116; // [rsp+C8h] [rbp+58h]

  v116 = a4;
  v63 = *(_QWORD *)(a1 + 216) == 0LL;
  v113 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v63 )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3LL);
  MiInitializePageColorBase(AnyMultiplexedVm, 0, (__int64)&v113);
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
  v111 = v10;
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
    v108 = v17;
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
          v52 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&updated >> 3) & 0x1FF));
          if ( (v52 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v52 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
        else
        {
          v18 = updated;
        }
      }
      v53 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v54 = *(_QWORD *)(v53 + 16);
      v55 = v54;
      if ( qword_140C4DDC0 && (v54 & 0x10) == 0 )
        v55 = v54 & ~qword_140C4DDC0;
      updated = MiUpdatePageFileHighInPte(v54, v108 + HIDWORD(v55));
      v56 = updated;
      v57 = 0;
      v58 = updated;
      if ( !MiPteInShadowRange(v53 + 16) )
        goto LABEL_66;
      if ( (unsigned int)MiPteHasShadow(v60, v59, v61, v62) )
      {
        v57 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v63 = (v56 & 1) == 0;
          goto LABEL_64;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v63 = (v56 & 1) == 0;
LABEL_64:
        if ( !v63 )
          v58 |= 0x8000000000000000uLL;
      }
LABEL_66:
      *(_QWORD *)(v53 + 16) = v58;
      if ( v57 )
        MiWritePteShadow(v53 + 16, v58);
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
            v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v63 = (v67 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v67;
            if ( v63 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      v46 = v111;
      v48 = v116;
      v49 = v108;
      MiWritePageFileHash(v8, v7, v111, v116, v108);
      v47 = a2;
      goto LABEL_35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v63 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v63 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v14);
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v113, 1u);
    FileHashPage = MiGetFileHashPage(a1, DWORD2(v113) & (unsigned int)v19 | HIDWORD(v113));
    v112 = FileHashPage;
    v21 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v22 = 0LL;
      v23 = 17;
    }
    else
    {
      v22 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v106, 0);
      MiSetPfnTbFlushStamp(v22, (unsigned int)KiTbFlushTimeStamp, 0LL);
      updated = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v21, v16, (updated >> 12) & 0xFFFFFFFFFLL, 2560LL);
      v23 = MiLockPageInline(v22);
    }
    v107 = v23;
    v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
    if ( v13 != *(_QWORD *)(a1 + 216) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v72 = KeGetCurrentIrql();
          if ( v72 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v72 >= 2u )
          {
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v63 = (v75 & v74[5]) == 0;
            v74[5] &= v75;
            if ( v63 )
              KiRemoveSystemWorkPriorityKick(v73);
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
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && v23 <= 0xFu && v76 >= 2u )
          {
            v77 = KeGetCurrentPrcb();
            v78 = v77->SchedulerAssist;
            v79 = ~(unsigned __int16)(-1LL << (v23 + 1));
            v63 = (v79 & v78[5]) == 0;
            v78[5] &= v79;
            if ( v63 )
              KiRemoveSystemWorkPriorityKick(v77);
          }
        }
      }
      __writecr8(v23);
      v80 = *(_QWORD *)(a1 + 248);
      MiReturnCommit(v80, 1LL);
      v81 = 1LL;
      if ( (ULONG_PTR *)v80 != &MiSystemPartition )
        goto LABEL_108;
      v82 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v82->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_108;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v84 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v82->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v63 = (_DWORD)CachedResidentAvailable == v84;
          LODWORD(CachedResidentAvailable) = v84;
          if ( v63 )
            goto LABEL_109;
        }
        while ( v84 != -1 && (unsigned __int64)(v84 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v82->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v81 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v81 )
LABEL_108:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v80 + 7168), v81);
LABEL_109:
      _InterlockedDecrement64(&qword_140C4F6A8);
LABEL_110:
      v50 = a5;
      v5 = v116;
      v8 = a1;
      v47 = a2;
      goto LABEL_38;
    }
    v25 = MI_READ_PTE_LOCK_FREE(v16);
    v26 = v25;
    if ( qword_140C4DDC0 )
    {
      if ( (v25 & 0x10) != 0 )
        v26 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v26 = v25 & ~qword_140C4DDC0;
    }
    v27 = HIDWORD(v26);
    v28 = (unsigned int)v27 + v108;
    if ( v21 == -1 )
    {
      updated = MiUpdatePageFileHighInPte(v25, v28);
      v85 = updated;
      v86 = 0;
      v87 = updated;
      if ( MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow(v89, v88, v90, v91) )
        {
          v86 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v92 = (v85 & 1) == 0;
            goto LABEL_118;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v92 = (v85 & 1) == 0;
LABEL_118:
          if ( !v92 )
            v87 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v16 = v87;
      if ( v86 )
        MiWritePteShadow(v16, v87);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v93 = KeGetCurrentIrql();
          if ( v93 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v93 >= 2u )
          {
            v94 = KeGetCurrentPrcb();
            v95 = v94->SchedulerAssist;
            v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v63 = (v96 & v95[5]) == 0;
            v95[5] &= v96;
            if ( v63 )
              KiRemoveSystemWorkPriorityKick(v94);
          }
        }
      }
      __writecr8(v24);
      v47 = a2;
      v49 = v108;
      v46 = v111;
      v48 = v116;
      goto LABEL_34;
    }
    v29 = MiUpdatePageFileHighInPte(*(_QWORD *)(v22 + 16), v28);
    v109 = 0;
    v30 = v29;
    updated = v29;
    v31 = v29;
    if ( !MiPteInShadowRange(v22 + 16) )
      goto LABEL_20;
    if ( !(unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v30 & 1) != 0 )
      {
        v31 |= 0x8000000000000000uLL;
      }
LABEL_20:
      v36 = v109;
      goto LABEL_21;
    }
    v36 = 1;
    if ( !HIBYTE(word_140C4DE88) && (v30 & 1) != 0 )
      v31 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)(v22 + 16) = v31;
    if ( v36 )
      MiWritePteShadow(v22 + 16, v31);
    if ( (_DWORD)v27 )
      *(_BYTE *)(v22 + 34) &= ~0x10u;
    updated = MiMakeValidPte(v16, v112, 2684354564LL);
    v37 = updated;
    v38 = 0;
    v39 = updated;
    if ( !MiPteInShadowRange(v16) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow(v41, v40, v42, v43) )
    {
      v38 = 1;
      if ( !HIBYTE(word_140C4DE88) )
      {
        v97 = (v37 & 1) == 0;
        goto LABEL_142;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v97 = (v37 & 1) == 0;
LABEL_142:
      if ( !v97 )
        v39 |= 0x8000000000000000uLL;
    }
LABEL_26:
    *(_QWORD *)v16 = v39;
    if ( v38 )
      MiWritePteShadow(v16, v39);
    v44 = ++*(_DWORD *)(a1 + 208);
    if ( v44 > *(_DWORD *)(a1 + 212) )
      *(_DWORD *)(a1 + 212) = v44;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v98 = KeGetCurrentIrql();
        if ( v98 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v98 >= 2u )
        {
          v99 = KeGetCurrentPrcb();
          v100 = v99->SchedulerAssist;
          v101 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v63 = (v101 & v100[5]) == 0;
          v100[5] &= v101;
          if ( v63 )
            KiRemoveSystemWorkPriorityKick(v99);
        }
      }
    }
    __writecr8(v24);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v102 = KeGetCurrentIrql(), v102 <= 0xFu) )
    {
      v45 = v107;
      if ( v107 <= 0xFu && v102 >= 2u )
      {
        v103 = KeGetCurrentPrcb();
        v104 = v103->SchedulerAssist;
        v105 = ~(unsigned __int16)(-1LL << (v107 + 1));
        v63 = (v105 & v104[5]) == 0;
        v104[5] &= v105;
        if ( v63 )
          KiRemoveSystemWorkPriorityKick(v103);
      }
    }
    else
    {
      v45 = v107;
    }
    __writecr8(v45);
    v46 = v111;
    v47 = a2;
    v48 = v116;
    v49 = v108;
    MiWritePageFileHash(a1, a2, v111, v116, v108);
LABEL_34:
    v8 = a1;
LABEL_35:
    if ( v46 )
      v111 = v46 + 8LL * v49;
    v5 = v49 + v48;
    v50 = a5 - v49;
    v116 = v5;
    a5 -= v49;
LABEL_38:
    v11 = (volatile LONG *)(v8 + 232);
    if ( !v50 )
      break;
    v7 = a2;
  }
  if ( v47 )
  {
    if ( (*(_BYTE *)(v47 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v47 + 24), (PMDL)v47);
  }
}
