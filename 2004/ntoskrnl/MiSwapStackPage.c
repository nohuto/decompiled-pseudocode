/*
 * XREFs of MiSwapStackPage @ 0x140354AAC
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     KiReleaseThreadStateLock @ 0x1402F11C0 (KiReleaseThreadStateLock.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402F84C0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     KeGenericCallDpc @ 0x14033FF70 (KeGenericCallDpc.c)
 *     MiSwapStackPageNoDpc @ 0x140355280 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140355434 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14037E4DC (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x14050DF18 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140530780 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14053119C (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, unsigned int *a3, int a4, int a5, __int64 *a6, _DWORD *a7)
{
  __int64 *Pool; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  int SystemRegionType; // eax
  int v15; // ecx
  char *AnyMultiplexedVm; // rax
  __int64 v17; // r14
  unsigned int v18; // r12d
  __int64 v19; // rbp
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 Page; // rax
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // r12
  int v28; // eax
  unsigned __int64 v29; // r15
  __int64 v30; // r15
  __int64 LeafPfnBuddy; // rbp
  __int64 v32; // r8
  unsigned __int64 *PteFromCopyList; // r12
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // al
  __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  int v40; // ebp
  __int64 v41; // r8
  bool v42; // zf
  unsigned __int64 v43; // rbx
  int v44; // edi
  __int64 v45; // r8
  bool v46; // zf
  struct _KTHREAD *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int64 v53; // rbx
  int v54; // edi
  __int64 v55; // r8
  bool v56; // zf
  __int64 v57; // rdx
  __int64 v58; // r8
  _DWORD *v59; // r9
  __int64 v60; // rcx
  unsigned __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r9
  _DWORD *v67; // r8
  int v68; // eax
  unsigned __int64 v69; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v72; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v75; // [rsp+30h] [rbp-68h]
  int v76; // [rsp+34h] [rbp-64h] BYREF
  __int64 v77; // [rsp+38h] [rbp-60h]
  __int64 v78; // [rsp+40h] [rbp-58h]
  __int64 v79; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v81; // [rsp+58h] [rbp-40h]

  v79 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Pool = (__int64 *)MiAllocatePool(64, 0x50uLL, 0x734B694Du);
  v11 = Pool;
  if ( !Pool )
    return 0LL;
  Pool[4] = a1;
  v12 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v13 = (__int64)(v12 << 25) >> 16;
  Pool[6] = v13;
  SystemRegionType = MiGetSystemRegionType(v13);
  LODWORD(v77) = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v15 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_90:
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    v15 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
  v11[8] = (__int64)AnyMultiplexedVm;
  v17 = (__int64)AnyMultiplexedVm;
  if ( !byte_140C4ECDC )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v81 = v19;
  if ( a4 == -1 )
  {
    v21 = *((_DWORD *)MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 2);
    v20 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C4DC8D) | dword_140C4DCF8 & v19 | (v21 << byte_140C4DC8C);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DCF8 & v19 | a4 & ~dword_140C4DCF8;
  }
  Page = MiGetPage(a1, v20, v18);
  v78 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v23 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v23, 0, 0);
  v11[7] = 0LL;
  v76 = 0;
  v27 = MiLockWorkingSetShared(v17);
  v75 = v27;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v76, v24, v25, v26);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v28 = MiGetSystemRegionType(v11[6]), (_DWORD)v77 != v28)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v29 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v17, v29, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v23) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
    v77 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a3, v78, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v79) == 1 )
        {
          MiCopyKstack(v23, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v23, v34, v35, v36);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v37 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v37 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v11[6], 0, 2u);
          KiReleaseThreadStateLock(v38, v79, 0LL);
          KiReleaseThreadLockSafe(v77);
          v39 = ZeroPte;
          v40 = 0;
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v40 = 1;
              if ( !HIBYTE(word_140C4DE08) )
              {
                v42 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v42 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v42 )
                v39 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v39;
          if ( v40 )
            MiWritePteShadow((__int64)PteFromCopyList, v39, v41);
          MiUnlockPageTableInternal(v17, v29);
          MiUnlockWorkingSetShared(v17, v75);
          v30 = v78;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17, v29);
        MiUnlockWorkingSetShared(v17, v75);
        v47 = CurrentThread;
        v30 = v78;
        *v11 = v81;
        v48 = v77;
        v11[3] = (__int64)v47;
        v11[1] = v30;
        v11[2] = (__int64)PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v48 == -16 || (struct _KTHREAD *)v48 == v47 )
        {
          v52 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)v11,
                  24576,
                  1,
                  0LL);
          if ( v52 < 0 )
            *((_DWORD *)v11 + 10) = v52;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v69 = (unsigned __int8)MiLockPageInline(a2, v49, v50, v51);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v69 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v69 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v42 = (v72 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v72;
                if ( v42 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v69);
          goto LABEL_83;
        }
        v53 = ZeroPte;
        v54 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v54 = 1;
          if ( !HIBYTE(word_140C4DE08) )
          {
            v56 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v56 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v56 )
            v53 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v53;
        if ( v54 )
          MiWritePteShadow((__int64)PteFromCopyList, v53, v55);
        MiReleaseFreshPage(v23);
        v60 = v11[7];
        if ( v60 )
        {
          v61 = (unsigned __int8)MiLockPageInline(v60, v57, v58, v59);
          MiRemoveLockedPageChargeAndDecRef(v11[7], v62, v63, v64);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v65 = KeGetCurrentIrql();
              if ( v65 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v65 >= 2u )
              {
                v66 = KeGetCurrentPrcb();
                v67 = v66->SchedulerAssist;
                v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
                v42 = (v68 & v67[5]) == 0;
                v67[5] &= v68;
                if ( v42 )
                  KiRemoveSystemWorkPriorityKick(v66);
              }
            }
          }
          __writecr8(v61);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0LL, v32) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17, v29);
      MiUnlockWorkingSetShared(v17, v75);
      v43 = ZeroPte;
      v44 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v44 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v46 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v46 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v46 )
          v43 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v43;
      if ( v44 )
        MiWritePteShadow((__int64)PteFromCopyList, v43, v45);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17, v29);
LABEL_88:
    MiUnlockWorkingSetShared(v17, v27);
LABEL_89:
    MiReleaseFreshPage(v23);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17, v29);
  MiUnlockWorkingSetShared(v17, v27);
  v30 = v78;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v30;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
