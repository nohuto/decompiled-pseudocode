/*
 * XREFs of MiCopyPage @ 0x1402E4A70
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiAllocateHyperSpace @ 0x1402E195C (MiAllocateHyperSpace.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x140513010 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int128 *a3, int a4)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // rsi
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int8 v14; // dl
  int v15; // ebp
  unsigned __int8 v16; // r14
  char v17; // r12
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  __int128 *v30; // rax
  __int64 v31; // rdx
  unsigned __int8 v32; // r10
  _DWORD *v33; // r9
  unsigned __int64 HyperSpace; // rax
  unsigned __int64 PteFromCopyList; // rbx
  __int64 v36; // rdx
  unsigned __int64 v37; // r11
  __int64 v38; // rdx
  __int64 *v39; // rbx
  unsigned __int8 v40; // bl
  _QWORD *MmInternal; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  int v47; // [rsp+30h] [rbp-88h]
  ULONG_PTR v48; // [rsp+38h] [rbp-80h]
  __int128 v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+50h] [rbp-68h] BYREF
  __int128 v51; // [rsp+60h] [rbp-58h] BYREF
  __int64 v52; // [rsp+70h] [rbp-48h]
  int v55; // [rsp+D8h] [rbp+20h]

  v52 = 0LL;
  v6 = 0;
  v51 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  v48 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v55 = a4 & 4;
  v47 = v55 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7);
  v13 = 2LL;
  v14 = PagePrivilege;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
      v15 = a4 & 2;
    }
    else if ( (MiFlags & 0x10000) == 0 || (a4 & 8) != 0 || (PagePrivilege & 1) == 0 || (unsigned int)MI_PFN_IS_PROTO(v7) )
    {
      if ( (MiFlags & 0x40000) == 0 || (a4 & 8) != 0 || (v6 = v13, (v14 & (unsigned __int8)v13) == 0) )
        v6 = 4;
      v15 = v13 & a4;
    }
    else
    {
      v6 = v13;
      v15 = v13 & a4;
    }
  }
  else
  {
    v15 = a4 & 2;
    if ( (a4 & 2) == 0 )
      v6 = 4;
  }
  if ( ((unsigned __int8)v6 & (unsigned __int8)v13) != 0 )
  {
    v16 = 17;
    v17 = v15 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v11, 0xFFFFF68000000000uLL, v13, v12);
      if ( (a4 & 0x100) != 0 )
        v17 |= 0x80u;
    }
    v18 = 0LL;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_40;
    if ( v15 )
    {
      v49 = v50;
    }
    else
    {
      *(_QWORD *)&v49 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v49 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v49 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v55 )
          v16 = MiLockPageInline(v8);
        MiMarkPfnVerified(v8, 4);
        MiAbortCombineScan(v8);
        v19 = v55;
        if ( v55 )
          goto LABEL_36;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v16 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)(-1LL << (v16 + 1));
              v24 = (v23 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v23;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v16);
        v16 = 17;
      }
    }
    v19 = v55;
LABEL_36:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v19 )
        v16 = MiLockPageInline(v8);
      v18 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_40:
    v25 = KeCopyPrivilegedPage(a1, (unsigned int)&v49, a2, (unsigned int)&v50, v18, v17);
    v9 = v25;
    if ( v25 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v25);
    if ( v16 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && v16 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v16 + 1));
            v24 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v16);
    }
    if ( (MiFlags & 0x40000) != 0 && !v15 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v49, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v30) = (*(_QWORD *)(v48 + 40) >> 60) & 7;
  if ( (_BYTE)v30 == 3 )
  {
    if ( v15 )
      LOBYTE(v30) = MiClearPfnImageVerified(v48, v47);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v30) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v30 != 3 )
        LOBYTE(v30) = MiMarkPfnVerified(v8, v47);
    }
  }
  if ( v9 < 0 )
  {
    v31 = *(unsigned __int8 *)(v48 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v31 )
      MiChangePageAttribute(v8, v31, 0LL);
    if ( !a3 )
    {
      a3 = &v51;
      if ( (a4 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v51), !DWORD1(v51)) )
      {
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
        {
          v33 = KeGetCurrentPrcb()->SchedulerAssist;
          v33[5] |= (-1 << (v32 + 1)) & 4;
        }
        BYTE8(v51) = v32;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        *(_QWORD *)&v51 = 0x200000000LL;
        v52 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE9(v51) = 1;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v36 = ZeroPte;
    v37 = 0xFFFFF6FB7DBED7F8uLL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v36 & 1) != 0 )
          v36 |= 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v36;
        MiWritePteShadow(PteFromCopyList, v36);
LABEL_82:
        v38 = ZeroPte;
        v39 = (__int64 *)(PteFromCopyList + 8);
        if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v39 <= v37 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v38 & 1) != 0 )
              v38 |= 0x8000000000000000uLL;
            *v39 = v38;
            MiWritePteShadow((__int64)v39, v38);
            goto LABEL_93;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v38 & 1) != 0 )
          {
            v38 |= 0x8000000000000000uLL;
          }
        }
        *v39 = v38;
LABEL_93:
        v30 = &v51;
        if ( a3 == &v51 )
        {
          v40 = *((_BYTE *)a3 + 8);
          if ( v40 == 17 )
          {
            LOBYTE(v30) = MiReleasePtes(&qword_140C4EF80, *((_QWORD *)a3 + 2), 2LL);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v40 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v42 = KeGetCurrentIrql();
                if ( v42 <= 0xFu && v40 <= 0xFu && v42 >= 2u )
                {
                  v43 = KeGetCurrentPrcb();
                  v44 = v43->SchedulerAssist;
                  v45 = ~(unsigned __int16)(-1LL << (v40 + 1));
                  v24 = (v45 & v44[5]) == 0;
                  v44[5] &= v45;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(v43);
                }
              }
            }
            LOBYTE(v30) = v40;
            __writecr8(v40);
          }
        }
        return (char)v30;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v36 & 1) != 0 )
      {
        v36 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteFromCopyList = v36;
    goto LABEL_82;
  }
  return (char)v30;
}
