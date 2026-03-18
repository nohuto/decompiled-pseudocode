/*
 * XREFs of MiSwapStackPage @ 0x14032576C
 * Callers:
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AD400 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1402E9B20 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     KeGenericCallDpc @ 0x140310FA0 (KeGenericCallDpc.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x140325F40 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1403260F4 (MiCanStealKernelStack.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiGetLeafPfnBuddy @ 0x14038020C (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x140511848 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140534150 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140534B6C (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v29; // r15
  __int64 LeafPfnBuddy; // rbp
  __int64 *PteFromCopyList; // r12
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  int v38; // ebp
  __int64 v39; // r8
  bool v40; // zf
  unsigned __int64 v41; // rbx
  int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  bool v45; // zf
  struct _KTHREAD *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rbx
  int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // r8
  bool v53; // zf
  __int64 v54; // rcx
  unsigned __int64 v55; // rbx
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  unsigned __int64 v60; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v63; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v66; // [rsp+30h] [rbp-68h]
  int v67; // [rsp+34h] [rbp-64h] BYREF
  __int64 v68; // [rsp+38h] [rbp-60h]
  __int64 v69; // [rsp+40h] [rbp-58h]
  __int64 v70; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v72; // [rsp+58h] [rbp-40h]

  v70 = 0LL;
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
  LODWORD(v68) = SystemRegionType;
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
  if ( !byte_140C4ED5C )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v72 = v19;
  if ( a4 == -1 )
  {
    v21 = *((_DWORD *)MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 2);
    v20 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C4DD0D) | dword_140C4DD78 & v19 | (v21 << byte_140C4DD0C);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DD78 & v19 | a4 & ~dword_140C4DD78;
  }
  Page = MiGetPage(a1, v20, v18);
  v69 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v23 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v23, 0, 0);
  v11[7] = 0LL;
  v67 = 0;
  v27 = MiLockWorkingSetShared(v17);
  v66 = v27;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v67, v24, v25, v26);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v28 = MiGetSystemRegionType(v11[6]), (_DWORD)v68 != v28)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || !(unsigned int)MiLockPageTableInternal(v17, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v23) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
    v68 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a3, v69, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v70) == 1 )
        {
          MiCopyKstack(v23, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v23, v32, v33, v34);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v35 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v11[6], 0LL);
          KiReleaseThreadStateLock(v36, v70, 0LL);
          KiReleaseThreadLockSafe(v68);
          v37 = ZeroPte;
          v38 = 0;
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v38 = 1;
              if ( !HIBYTE(word_140C4DE88) )
              {
                v40 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v40 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v40 )
                v37 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v37;
          if ( v38 )
            MiWritePteShadow((__int64)PteFromCopyList, v37, v39);
          MiUnlockPageTableInternal(v17);
          MiUnlockWorkingSetShared(v17, v66);
          v29 = v69;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17);
        MiUnlockWorkingSetShared(v17, v66);
        v46 = CurrentThread;
        v29 = v69;
        *v11 = v72;
        v47 = v68;
        v11[3] = (__int64)v46;
        v11[1] = v29;
        v11[2] = (__int64)PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v47 == -16 || (struct _KTHREAD *)v47 == v46 )
        {
          v48 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)v11,
                  24576,
                  1,
                  0LL);
          if ( v48 < 0 )
            *((_DWORD *)v11 + 10) = v48;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v60 = (unsigned __int8)MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v60 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v40 = (v63 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v63;
                if ( v40 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v60);
          goto LABEL_83;
        }
        v49 = ZeroPte;
        v50 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v50 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v53 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v53 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v53 )
            v49 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v49;
        if ( v50 )
          MiWritePteShadow((__int64)PteFromCopyList, v49, v52);
        MiReleaseFreshPage(v23, v51);
        v54 = v11[7];
        if ( v54 )
        {
          v55 = (unsigned __int8)MiLockPageInline(v54);
          MiRemoveLockedPageChargeAndDecRef(v11[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v56 = KeGetCurrentIrql();
              if ( v56 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v56 >= 2u )
              {
                v57 = KeGetCurrentPrcb();
                v58 = v57->SchedulerAssist;
                v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
                v40 = (v59 & v58[5]) == 0;
                v58[5] &= v59;
                if ( v40 )
                  KiRemoveSystemWorkPriorityKick(v57);
              }
            }
          }
          __writecr8(v55);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17);
      MiUnlockWorkingSetShared(v17, v66);
      v41 = ZeroPte;
      v42 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v42 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v45 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v45 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v45 )
          v41 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v41;
      if ( v42 )
        MiWritePteShadow((__int64)PteFromCopyList, v41, v44);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17);
LABEL_88:
    MiUnlockWorkingSetShared(v17, v27);
LABEL_89:
    MiReleaseFreshPage(v23, v43);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17);
  MiUnlockWorkingSetShared(v17, v27);
  v29 = v69;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v29;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
