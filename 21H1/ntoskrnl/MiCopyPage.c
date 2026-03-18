/*
 * XREFs of MiCopyPage @ 0x140221A00
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiCopyHeaderIfResident @ 0x1402BEB60 (MiCopyHeaderIfResident.c)
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1403177D0 (MiSwapStackPageNoDpc.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAllocateHyperSpace @ 0x1402FF124 (MiAllocateHyperSpace.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x14050D310 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, __int128 *a3, int a4)
{
  char v6; // bl
  ULONG_PTR v7; // rbp
  __int64 v8; // rsi
  int v9; // edi
  unsigned int PagePrivilege; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 v13; // dl
  int v14; // ebp
  __int64 v15; // rdx
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
  _KPROCESS *Process; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // r11
  __int64 v39; // rdx
  __int64 *v40; // rbx
  unsigned __int8 v41; // bl
  _QWORD *MmInternal; // rcx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned int v48; // [rsp+30h] [rbp-88h]
  ULONG_PTR v49; // [rsp+38h] [rbp-80h]
  __int128 v50; // [rsp+40h] [rbp-78h] BYREF
  __int128 v51; // [rsp+50h] [rbp-68h] BYREF
  __int128 v52; // [rsp+60h] [rbp-58h] BYREF
  __int64 v53; // [rsp+70h] [rbp-48h]
  int v56; // [rsp+D8h] [rbp+20h]

  v53 = 0LL;
  v6 = 0;
  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  v49 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v56 = a4 & 4;
  v48 = v56 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v7, v56, (unsigned __int64 *)&v51);
  v12 = 2LL;
  v13 = PagePrivilege;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v6 = 2;
      v14 = a4 & 2;
    }
    else if ( (MiFlags & 0x10000) == 0
           || (a4 & 8) != 0
           || (PagePrivilege & 1) == 0
           || (unsigned int)MI_PFN_IS_PROTO(v7, PagePrivilege, 2LL) )
    {
      if ( (MiFlags & 0x40000) == 0 || (a4 & 8) != 0 || (v6 = v12, (v13 & (unsigned __int8)v12) == 0) )
        v6 = 4;
      v14 = v12 & a4;
    }
    else
    {
      v6 = v12;
      v14 = v12 & a4;
    }
  }
  else
  {
    v14 = a4 & 2;
    if ( (a4 & 2) == 0 )
      v6 = 4;
  }
  v15 = 0xFFFFF68000000000uLL;
  if ( ((unsigned __int8)v6 & (unsigned __int8)v12) != 0 )
  {
    v16 = 17;
    v17 = v14 != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v11, 0xFFFFF68000000000uLL);
      v15 = 0xFFFFF68000000000uLL;
      if ( (a4 & 0x100) != 0 )
        v17 |= 0x80u;
    }
    v18 = 0LL;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_40;
    if ( v14 )
    {
      v50 = v51;
    }
    else
    {
      *(_QWORD *)&v50 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v50 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v50 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v56 )
          v16 = MiLockPageInline(v8, 0xFFFFF68000000000uLL, v12);
        MiMarkPfnVerified(v8, 4LL);
        MiAbortCombineScan(v8);
        v19 = v56;
        if ( v56 )
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
              v15 = -1LL << (v16 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)v15;
              v24 = (v23 & SchedulerAssist[5]) == 0;
              v12 = (unsigned int)v23 & SchedulerAssist[5];
              SchedulerAssist[5] = v12;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v16);
        v16 = 17;
      }
    }
    v19 = v56;
LABEL_36:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v19 )
        v16 = MiLockPageInline(v8, v15, v12);
      v18 = (((*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_40:
    v25 = KeCopyPrivilegedPage(a1, (unsigned int)&v50, a2, (unsigned int)&v51, v18, v17);
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
    if ( (MiFlags & 0x40000) != 0 && !v14 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v50, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v30) = (*(_QWORD *)(v49 + 40) >> 60) & 7;
  if ( (_BYTE)v30 == 3 )
  {
    if ( v14 )
      LOBYTE(v30) = MiClearPfnImageVerified(v49, v48);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v30) = (*(_QWORD *)(v8 + 40) >> 60) & 7;
      if ( (_BYTE)v30 != 3 )
        LOBYTE(v30) = MiMarkPfnVerified(v8, v48);
    }
  }
  if ( v9 < 0 )
  {
    v31 = *(unsigned __int8 *)(v49 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v31 )
      MiChangePageAttribute(v8, v31, 0LL);
    if ( !a3 )
    {
      a3 = &v52;
      if ( (a4 & 1) == 0 || (MiCreatePteCopyList(2LL, 2LL, &v52), !DWORD1(v52)) )
      {
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
        {
          v33 = KeGetCurrentPrcb()->SchedulerAssist;
          v33[5] |= (-1 << (v32 + 1)) & 4;
        }
        BYTE8(v52) = v32;
        HyperSpace = MiAllocateHyperSpace(2LL);
        *(_QWORD *)&v52 = 0x200000000LL;
        v53 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        BYTE9(v52) = 1;
      }
    }
    PteFromCopyList = MiGetPteFromCopyList(a3, a1, a2);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    v37 = ZeroPte;
    v38 = 0xFFFFF6FB7DBED7F8uLL;
    if ( PteFromCopyList >= 0xFFFFF6FB7DBED000uLL && PteFromCopyList <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, ZeroPte) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v37 & 1) != 0 )
          v37 |= 0x8000000000000000uLL;
        *(_QWORD *)PteFromCopyList = v37;
        MiWritePteShadow(PteFromCopyList, v37);
LABEL_82:
        v39 = ZeroPte;
        v40 = (__int64 *)(PteFromCopyList + 8);
        if ( (unsigned __int64)v40 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v40 <= v38 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, ZeroPte) )
          {
            if ( !HIBYTE(word_140C4DF48) && (v39 & 1) != 0 )
              v39 |= 0x8000000000000000uLL;
            *v40 = v39;
            MiWritePteShadow(v40, v39);
            goto LABEL_93;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v39 & 1) != 0 )
          {
            v39 |= 0x8000000000000000uLL;
          }
        }
        *v40 = v39;
LABEL_93:
        v30 = &v52;
        if ( a3 == &v52 )
        {
          v41 = *((_BYTE *)a3 + 8);
          if ( v41 == 17 )
          {
            LOBYTE(v30) = MiReleasePtes(&qword_140C4EE80, *((_QWORD *)a3 + 2), 2LL);
          }
          else
          {
            MmInternal = KeGetCurrentPrcb()->MmInternal;
            if ( MmInternal )
            {
              MmInternal[1543] = 0LL;
              v41 = *((_BYTE *)a3 + 8);
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v43 = KeGetCurrentIrql();
                if ( v43 <= 0xFu && v41 <= 0xFu && v43 >= 2u )
                {
                  v44 = KeGetCurrentPrcb();
                  v45 = v44->SchedulerAssist;
                  v46 = ~(unsigned __int16)(-1LL << (v41 + 1));
                  v24 = (v46 & v45[5]) == 0;
                  v45[5] &= v46;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
            }
            LOBYTE(v30) = v41;
            __writecr8(v41);
          }
        }
        return (char)v30;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v37 & 1) != 0 )
        v37 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)PteFromCopyList = v37;
    goto LABEL_82;
  }
  return (char)v30;
}
