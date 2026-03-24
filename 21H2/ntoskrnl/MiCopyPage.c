/*
 * XREFs of MiCopyPage @ 0x140240220
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1402C6830 (MiSwapStackPageNoDpc.c)
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14054213C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14023D10C (MiAllocateHyperSpace.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140240B38 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1402B8A04 (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030438C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x140512DD0 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x140512E78 (KeSetPagePrivilege.c)
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
  __int64 v16; // rdx
  unsigned __int8 v17; // r14
  char v18; // r12
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int128 *v31; // rax
  __int64 v32; // rdx
  unsigned __int8 v33; // r10
  _DWORD *v34; // r9
  unsigned __int64 HyperSpace; // rax
  unsigned __int64 PteFromCopyList; // rbx
  _KPROCESS *Process; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // r11
  __int64 v42; // rdx
  __int64 *v43; // rbx
  unsigned __int8 v44; // bl
  _QWORD *MmInternal; // rcx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  ULONG_PTR v51; // [rsp+38h] [rbp-80h]
  __int128 v52; // [rsp+40h] [rbp-78h] BYREF
  __int128 v53; // [rsp+50h] [rbp-68h] BYREF
  __int128 v54; // [rsp+60h] [rbp-58h] BYREF
  __int64 v55; // [rsp+70h] [rbp-48h]
  int v58; // [rsp+D8h] [rbp+20h]

  v55 = 0LL;
  v6 = 0;
  v54 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  v51 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v58 = a4 & 4;
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
  v16 = 0xFFFFF68000000000uLL;
  if ( ((unsigned __int8)v6 & (unsigned __int8)v13) != 0 )
  {
    v17 = 17;
    v18 = v15 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v11, 0xFFFFF68000000000uLL, v13, v12);
      v16 = 0xFFFFF68000000000uLL;
      if ( (a4 & 0x100) != 0 )
        v18 |= 0x80u;
    }
    v19 = 0LL;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_40;
    if ( v15 )
    {
      v52 = v53;
    }
    else
    {
      *(_QWORD *)&v52 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v52 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v52 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v58 )
          v17 = MiLockPageInline(v8, 0xFFFFF68000000000uLL, v13);
        MiMarkPfnVerified(v8);
        MiAbortCombineScan(v8);
        v20 = v58;
        if ( v58 )
          goto LABEL_36;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v17 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = -1LL << (v17 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)v16;
              v25 = (v24 & SchedulerAssist[5]) == 0;
              v13 = (unsigned int)v24 & SchedulerAssist[5];
              SchedulerAssist[5] = v13;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v17);
        v17 = 17;
      }
    }
    v20 = v58;
LABEL_36:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v20 )
        v17 = MiLockPageInline(v8, v16, v13);
      v19 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_40:
    v26 = KeCopyPrivilegedPage(a1, (unsigned int)&v52, a2, (unsigned int)&v53, v19, v18);
    v9 = v26;
    if ( v26 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v26);
    if ( v17 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v17 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v17 + 1));
            v25 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v17);
    }
    if ( (MiFlags & 0x40000) != 0 && !v15 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v52, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v31) = (*(_QWORD *)(v51 + 40) >> 60) & 7;
  if ( (_BYTE)v31 == 3 )
  {
    if ( v15 )
      LOBYTE(v31) = MiClearPfnImageVerified(v51);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v31) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v31 != 3 )
        LOBYTE(v31) = MiMarkPfnVerified(v8);
    }
  }
  if ( v9 < 0 )
  {
    v32 = *(unsigned __int8 *)(v51 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v32 )
      MiChangePageAttribute(v8, v32, 0LL);
    if ( !a3 )
    {
      a3 = &v54;
      if ( (a4 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v54), !DWORD1(v54)) )
      {
        v33 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
        {
          v34 = KeGetCurrentPrcb()->SchedulerAssist;
          v34[5] |= (-1 << (v33 + 1)) & 4;
        }
        BYTE8(v54) = v33;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        *(_QWORD *)&v54 = 0x200000000LL;
        v55 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE9(v54) = 1;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v40 = ZeroPte;
    v41 = 0xFFFFF6FB7DBED7F8uLL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v38, v39) )
      {
        if ( !HIBYTE(word_140C4E008) && (v40 & 1) != 0 )
          v40 |= 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v40;
        MiWritePteShadow(PteFromCopyList, v40);
LABEL_82:
        v42 = ZeroPte;
        v43 = (__int64 *)(PteFromCopyList + 8);
        if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v43 <= v41 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v38, v39) )
          {
            if ( !HIBYTE(word_140C4E008) && (v42 & 1) != 0 )
              v42 |= 0x8000000000000000uLL;
            *v43 = v42;
            MiWritePteShadow(v43, v42);
            goto LABEL_93;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v42 & 1) != 0 )
          {
            v42 |= 0x8000000000000000uLL;
          }
        }
        *v43 = v42;
LABEL_93:
        v31 = &v54;
        if ( a3 == &v54 )
        {
          v44 = *((_BYTE *)a3 + 8);
          if ( v44 == 17 )
          {
            LOBYTE(v31) = MiReleasePtes(&qword_140C4EF40, *((_QWORD *)a3 + 2), 2LL);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v44 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v46 = KeGetCurrentIrql();
                if ( v46 <= 0xFu && v44 <= 0xFu && v46 >= 2u )
                {
                  v47 = KeGetCurrentPrcb();
                  v48 = v47->SchedulerAssist;
                  v49 = ~(unsigned __int16)(-1LL << (v44 + 1));
                  v25 = (v49 & v48[5]) == 0;
                  v48[5] &= v49;
                  if ( v25 )
                    KiRemoveSystemWorkPriorityKick(v47);
                }
              }
            }
            LOBYTE(v31) = v44;
            __writecr8(v44);
          }
        }
        return (char)v31;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v40 & 1) != 0 )
        v40 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)PteFromCopyList = v40;
    goto LABEL_82;
  }
  return (char)v31;
}
