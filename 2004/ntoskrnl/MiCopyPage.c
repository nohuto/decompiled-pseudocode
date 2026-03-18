/*
 * XREFs of MiCopyPage @ 0x1402B4680
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiCopyHeaderIfResident @ 0x140265B30 (MiCopyHeaderIfResident.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x140355280 (MiSwapStackPageNoDpc.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140A48284 (MiTradeBootImagePage.c)
 * Callees:
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402B7128 (MiCreatePteCopyList.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x14033BA24 (MiAllocateHyperSpace.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1403FB0A0 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x14050D960 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14050DA08 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int128 *a3, int a4)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  __int64 v8; // rsi
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rcx
  _DWORD *v12; // r9
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
  int v28; // eax
  __int128 *v29; // rax
  __int64 v30; // rdx
  unsigned __int8 v31; // r10
  _DWORD *v32; // r9
  unsigned __int64 HyperSpace; // rax
  unsigned __int64 PteFromCopyList; // rbx
  _KPROCESS *Process; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r11
  __int64 v40; // rdx
  __int64 *v41; // rbx
  unsigned __int8 v42; // bl
  _QWORD *MmInternal; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned int v49; // [rsp+30h] [rbp-88h]
  ULONG_PTR v50; // [rsp+38h] [rbp-80h]
  __int128 v51; // [rsp+40h] [rbp-78h] BYREF
  __int128 v52; // [rsp+50h] [rbp-68h] BYREF
  __int128 v53; // [rsp+60h] [rbp-58h] BYREF
  __int64 v54; // [rsp+70h] [rbp-48h]
  int v57; // [rsp+D8h] [rbp+20h]

  v54 = 0LL;
  v6 = 0;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  v50 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v57 = a4 & 4;
  v49 = v57 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7, v57, (unsigned __int64 *)&v52);
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
      v51 = v52;
    }
    else
    {
      *(_QWORD *)&v51 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v51 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v51 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v57 )
          v16 = MiLockPageInline(v8);
        MiMarkPfnVerified(v8, 4LL, v13, v12);
        MiAbortCombineScan(v8);
        v19 = v57;
        if ( v57 )
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
    v19 = v57;
LABEL_36:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v19 )
        v16 = MiLockPageInline(v8);
      v18 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_40:
    v25 = KeCopyPrivilegedPage(a1, (unsigned int)&v51, a2, (unsigned int)&v52, v18, v17);
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
            v12 = v27->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (v16 + 1));
            v24 = (v28 & v12[5]) == 0;
            v13 = (unsigned int)v28 & v12[5];
            v12[5] = v13;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v16);
    }
    if ( (MiFlags & 0x40000) != 0 && !v15 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v51, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v29) = (*(_QWORD *)(v50 + 40) >> 60) & 7;
  if ( (_BYTE)v29 == 3 )
  {
    if ( v15 )
      LOBYTE(v29) = MiClearPfnImageVerified(v50, v49);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v29) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v29 != 3 )
        LOBYTE(v29) = MiMarkPfnVerified(v8, v49, v13, v12);
    }
  }
  if ( v9 < 0 )
  {
    v30 = *(unsigned __int8 *)(v50 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v30 )
      MiChangePageAttribute(v8, v30, 0LL);
    if ( !a3 )
    {
      a3 = &v53;
      if ( (a4 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v53), !DWORD1(v53)) )
      {
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
        {
          v32 = KeGetCurrentPrcb()->SchedulerAssist;
          v32[5] |= (-1 << (v31 + 1)) & 4;
        }
        BYTE8(v53) = v31;
        HyperSpace = MiAllocateHyperSpace(2LL);
        *(_QWORD *)&v53 = 0x200000000LL;
        v54 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE9(v53) = 1;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v38 = ZeroPte;
    v39 = 0xFFFFF6FB7DBED7F8uLL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v36, v37) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v38 & 1) != 0 )
          v38 |= 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v38;
        MiWritePteShadow(PteFromCopyList, v38);
LABEL_82:
        v40 = ZeroPte;
        v41 = (__int64 *)(PteFromCopyList + 8);
        if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v41 <= v39 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, ZeroPte, v36, v37) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v40 & 1) != 0 )
              v40 |= 0x8000000000000000uLL;
            *v41 = v40;
            MiWritePteShadow(v41, v40);
            goto LABEL_93;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v40 & 1) != 0 )
          {
            v40 |= 0x8000000000000000uLL;
          }
        }
        *v41 = v40;
LABEL_93:
        v29 = &v53;
        if ( a3 == &v53 )
        {
          v42 = *((_BYTE *)a3 + 8);
          if ( v42 == 17 )
          {
            LOBYTE(v29) = MiReleasePtes((__int64)&qword_140C4ED40, *((_QWORD **)a3 + 2), 2u);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v42 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v44 = KeGetCurrentIrql();
                if ( v44 <= 0xFu && v42 <= 0xFu && v44 >= 2u )
                {
                  v45 = KeGetCurrentPrcb();
                  v46 = v45->SchedulerAssist;
                  v47 = ~(unsigned __int16)(-1LL << (v42 + 1));
                  v24 = (v47 & v46[5]) == 0;
                  v46[5] &= v47;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(v45);
                }
              }
            }
            LOBYTE(v29) = v42;
            __writecr8(v42);
          }
        }
        return (char)v29;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v38 & 1) != 0 )
        v38 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)PteFromCopyList = v38;
    goto LABEL_82;
  }
  return (char)v29;
}
