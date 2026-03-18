/*
 * XREFs of MiMapPageFileHash @ 0x14037E338
 * Callers:
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14037E1B8 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiWritePageFileHash @ 0x14045D8D2 (MiWritePageFileHash.c)
 *     MiFreePageFileHashPfn @ 0x1405BC4A4 (MiFreePageFileHashPfn.c)
 *     MiGetFileHashPage @ 0x1405BC4E8 (MiGetFileHashPage.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r13
  __int64 v8; // r15
  char *AnyMultiplexedVm; // rax
  volatile LONG *v10; // rax
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int16 v14; // dx
  unsigned int v15; // r12d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // di
  int v21; // r15d
  __int64 v22; // rbx
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned int v28; // r14d
  __int64 v29; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  signed __int32 v34; // ecx
  __int64 FileHashPage; // rax
  __int64 v36; // rbx
  __int64 v37; // r13
  unsigned __int8 v38; // si
  unsigned __int64 v39; // r12
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // rbx
  unsigned __int64 v49; // r8
  struct _KPRCB *v50; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // rdx
  char v58; // di
  int v59; // esi
  __int64 v60; // rbx
  bool v61; // zf
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  __int64 updated; // rax
  char v67; // si
  __int64 v68; // rbx
  int v69; // eax
  char v70; // di
  int v71; // esi
  __int64 v72; // rbx
  bool v73; // zf
  unsigned int v74; // eax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  unsigned __int8 v79; // al
  unsigned __int8 v80; // bl
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  signed __int32 v84[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int8 v85; // [rsp+30h] [rbp-40h]
  int v86; // [rsp+34h] [rbp-3Ch]
  unsigned int v87; // [rsp+38h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+40h] [rbp-30h] BYREF
  __int64 v89; // [rsp+48h] [rbp-28h]
  PEX_SPIN_LOCK SpinLock; // [rsp+50h] [rbp-20h]
  __int64 v91; // [rsp+58h] [rbp-18h]
  __int128 v92; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v95; // [rsp+C8h] [rbp+58h]

  v95 = a4;
  v23 = *(_QWORD *)(a1 + 216) == 0LL;
  v92 = 0LL;
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( !v23 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
    MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v92);
    if ( (*(_BYTE *)(v7 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0xC0000010);
    v89 = v7 + 8 * a3 + 48;
    v10 = (volatile LONG *)(v8 + 232);
    SpinLock = (PEX_SPIN_LOCK)(v8 + 232);
    while ( 1 )
    {
      v11 = ExAcquireSpinLockExclusive(v10);
      v12 = *(_QWORD *)(v8 + 216);
      v13 = v11;
      v14 = v12 + v5 * dword_140C531CC;
      v15 = a5;
      v16 = (((v12 + (unsigned __int64)(v5 * dword_140C531CC)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (4096 - (v14 & 0xFFFu)) / dword_140C531CC <= a5 )
        v15 = (4096 - (v14 & 0xFFFu)) / dword_140C531CC;
      v87 = v15;
      ValidPte = MI_READ_PTE_LOCK_FREE(v16);
      if ( (ValidPte & 1) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v23 = (v33 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v33;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v92, 1u);
        FileHashPage = MiGetFileHashPage(v8, DWORD2(v92) & (unsigned int)v34 | HIDWORD(v92));
        v91 = FileHashPage;
        v36 = FileHashPage;
        if ( FileHashPage == -1 )
        {
          v37 = 0LL;
          v38 = 17;
        }
        else
        {
          v37 = 48 * FileHashPage - 0x220000000000LL;
          _InterlockedOr(v84, 0);
          MiSetPfnTbFlushStamp(v37, KiTbFlushTimeStamp, 0);
          ValidPte = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MiInitializePfnForOtherProcess(v36, v16, (ValidPte >> 12) & 0xFFFFFFFFFFLL, 2560);
          v38 = MiLockPageInline(v37);
        }
        v85 = v38;
        v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 232));
        if ( v12 != *(_QWORD *)(v8 + 216) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v40 = KeGetCurrentIrql();
              if ( v40 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v40 >= 2u )
              {
                v41 = KeGetCurrentPrcb();
                v42 = v41->SchedulerAssist;
                v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                v23 = (v43 & v42[5]) == 0;
                v42[5] &= v43;
                if ( v23 )
                  KiRemoveSystemWorkPriorityKick(v41);
              }
            }
          }
          __writecr8(v39);
          if ( v36 == -1 )
            goto LABEL_69;
          MiFreePageFileHashPfn(v36);
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v44 = KeGetCurrentIrql();
              if ( v44 <= 0xFu && v38 <= 0xFu && v44 >= 2u )
              {
                v45 = KeGetCurrentPrcb();
                v46 = v45->SchedulerAssist;
                v47 = ~(unsigned __int16)(-1LL << (v38 + 1));
                v23 = (v47 & v46[5]) == 0;
                v46[5] &= v47;
                if ( v23 )
                  KiRemoveSystemWorkPriorityKick(v45);
              }
            }
          }
          __writecr8(v38);
          v48 = *(_QWORD *)(v8 + 248);
          MiReturnCommit(v48, 1LL);
          v49 = 1LL;
          if ( (ULONG_PTR *)v48 == &MiSystemPartition )
          {
            v50 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v50->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                while ( 1 )
                {
                  v52 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v50->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v23 = (_DWORD)CachedResidentAvailable == v52;
                  LODWORD(CachedResidentAvailable) = v52;
                  if ( v23 )
                    break;
                  if ( v52 == -1 || (unsigned __int64)(v52 + 1LL) > 0x100 )
                    goto LABEL_63;
                }
LABEL_68:
                _InterlockedDecrement64(&qword_140C53DA8);
LABEL_69:
                v53 = a5;
                v5 = v95;
                v29 = a2;
                goto LABEL_70;
              }
LABEL_63:
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v50->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v49 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              if ( !v49 )
                goto LABEL_68;
            }
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 16960), v49);
          goto LABEL_68;
        }
        v54 = MI_READ_PTE_LOCK_FREE(v16);
        v55 = v54;
        if ( qword_140C50780 )
        {
          if ( (v54 & 0x10) != 0 )
            v55 = v54 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v55 = v54 & ~qword_140C50780;
        }
        v56 = HIDWORD(v55);
        v57 = (unsigned int)v56 + v87;
        if ( v36 != -1 )
        {
          ValidPte = *(_QWORD *)(v37 + 16);
          updated = MiUpdatePageFileHighInPte(ValidPte, v57);
          v86 = 0;
          v67 = updated;
          v68 = updated;
          if ( MiPteInShadowRange(v37 + 16) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v69 = 1;
              if ( !HIBYTE(word_140C51864) && (v67 & 1) != 0 )
                v68 |= 0x8000000000000000uLL;
LABEL_105:
              *(_QWORD *)(v37 + 16) = v68;
              if ( v69 )
                MiWritePteShadow(v37 + 16, v68);
              if ( (_DWORD)v56 )
                *(_BYTE *)(v37 + 34) &= ~0x10u;
              ValidPte = MiMakeValidPte(v16, v91, -1610612732);
              v70 = ValidPte;
              v71 = 0;
              v72 = ValidPte;
              if ( MiPteInShadowRange(v16) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v71 = 1;
                  if ( !HIBYTE(word_140C51864) )
                  {
                    v73 = (v70 & 1) == 0;
LABEL_115:
                    if ( !v73 )
                      v72 |= 0x8000000000000000uLL;
                  }
                }
                else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                {
                  v73 = (v70 & 1) == 0;
                  goto LABEL_115;
                }
              }
              *(_QWORD *)v16 = v72;
              if ( v71 )
                MiWritePteShadow(v16, v72);
              v8 = a1;
              v74 = ++*(_DWORD *)(a1 + 208);
              if ( v74 > *(_DWORD *)(a1 + 212) )
                *(_DWORD *)(a1 + 212) = v74;
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v75 = KeGetCurrentIrql();
                  if ( v75 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v75 >= 2u )
                  {
                    v76 = KeGetCurrentPrcb();
                    v77 = v76->SchedulerAssist;
                    v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
                    v23 = (v78 & v77[5]) == 0;
                    v77[5] &= v78;
                    if ( v23 )
                      KiRemoveSystemWorkPriorityKick(v76);
                  }
                }
              }
              __writecr8(v39);
              _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v79 = KeGetCurrentIrql(), v79 <= 0xFu) )
              {
                v80 = v85;
                if ( v85 <= 0xFu && v79 >= 2u )
                {
                  v81 = KeGetCurrentPrcb();
                  v82 = v81->SchedulerAssist;
                  v83 = ~(unsigned __int16)(-1LL << (v85 + 1));
                  v23 = (v83 & v82[5]) == 0;
                  v82[5] &= v83;
                  if ( v23 )
                    KiRemoveSystemWorkPriorityKick(v81);
                }
              }
              else
              {
                v80 = v85;
              }
              __writecr8(v80);
              v29 = a2;
              v28 = v95;
              v15 = v87;
              MiWritePageFileHash(a1, a2, v89, v95, v87);
              goto LABEL_137;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v67 & 1) != 0 )
            {
              v68 |= 0x8000000000000000uLL;
            }
          }
          v69 = v86;
          goto LABEL_105;
        }
        ValidPte = MiUpdatePageFileHighInPte(v54, v57);
        v58 = ValidPte;
        v59 = 0;
        v60 = ValidPte;
        if ( MiPteInShadowRange(v16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v59 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v61 = (v58 & 1) == 0;
LABEL_84:
              if ( !v61 )
                v60 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v61 = (v58 & 1) == 0;
            goto LABEL_84;
          }
        }
        *(_QWORD *)v16 = v60;
        if ( v59 )
          MiWritePteShadow(v16, v60);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 232));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
              v23 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(v63);
            }
          }
        }
        __writecr8(v39);
        v29 = a2;
        v15 = v87;
        v28 = v95;
        goto LABEL_137;
      }
      v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v18 = *(_QWORD *)(v17 + 16);
      v19 = v18;
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C50780;
      ValidPte = MiUpdatePageFileHighInPte(v18, v15 + HIDWORD(v19));
      v20 = ValidPte;
      v21 = 0;
      v22 = ValidPte;
      if ( MiPteInShadowRange(v17 + 16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v23 = (v20 & 1) == 0;
            goto LABEL_19;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v23 = (v20 & 1) == 0;
LABEL_19:
          if ( !v23 )
            v22 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)(v17 + 16) = v22;
      if ( v21 )
        MiWritePteShadow(v17 + 16, v22);
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v23 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      __writecr8(v13);
      v8 = a1;
      v28 = v95;
      MiWritePageFileHash(a1, v7, v89, v95, v15);
      v29 = a2;
LABEL_137:
      v5 = v15 + v28;
      v95 = v5;
      v53 = a5 - v15;
      v89 += 8LL * v15;
      a5 -= v15;
LABEL_70:
      v23 = v53 == 0;
      v10 = (volatile LONG *)(v8 + 232);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v29 + 10) & 1) != 0 )
          MmUnmapLockedPages(*(PVOID *)(v29 + 24), (PMDL)v29);
        return;
      }
      v7 = a2;
    }
  }
}
