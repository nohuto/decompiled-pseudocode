/*
 * XREFs of MiSwapStackPage @ 0x14024483C
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1402451C4 (MiCanStealKernelStack.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140334D40 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x1405135C8 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140535E90 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1405368AC (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 *a6, _DWORD *a7)
{
  int v9; // r13d
  __int64 Pool; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  int SystemRegionType; // eax
  __int64 v15; // rcx
  __int64 AnyMultiplexedVm; // rax
  __int64 v17; // r14
  unsigned int v18; // r12d
  __int64 v19; // rbp
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 Page; // rax
  __int64 v23; // r13
  __int64 v24; // rdx
  char v25; // r12
  int v26; // eax
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 LeafPfnBuddy; // rbp
  unsigned __int64 *PteFromCopyList; // r12
  char v32; // al
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  int v35; // ebp
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // rbx
  int v40; // edi
  bool v41; // zf
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  unsigned __int64 v46; // rbx
  int v47; // edi
  bool v48; // zf
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  unsigned __int64 v55; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v58; // eax
  _DWORD *SchedulerAssist; // r8
  char v61; // [rsp+30h] [rbp-68h]
  int v62; // [rsp+34h] [rbp-64h] BYREF
  __int64 v63; // [rsp+38h] [rbp-60h]
  __int64 v64; // [rsp+40h] [rbp-58h]
  __int64 v65; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v67; // [rsp+58h] [rbp-40h]

  v65 = 0LL;
  v9 = a4;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(64LL, 80LL, 1934321997LL, a4);
  v11 = (_QWORD *)Pool;
  if ( !Pool )
    return 0LL;
  *(_QWORD *)(Pool + 32) = a1;
  v12 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v13 = (__int64)(v12 << 25) >> 16;
  *(_QWORD *)(Pool + 48) = v13;
  SystemRegionType = MiGetSystemRegionType(v13);
  LODWORD(v63) = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v15 = 4LL;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_90:
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    v15 = 1LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
  v11[8] = AnyMultiplexedVm;
  v17 = AnyMultiplexedVm;
  if ( !byte_140C4EF1C )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v67 = v19;
  if ( v9 == -1 )
  {
    v21 = *(_DWORD *)(MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 8);
    v20 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C4DECD) | dword_140C4DF38 & v19 | (v21 << byte_140C4DECC);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DF38 & v19 | v9 & ~dword_140C4DF38;
  }
  Page = MiGetPage(a1, v20, v18);
  v64 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v23 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v23, 0LL, 0LL);
  v11[7] = 0LL;
  v62 = 0;
  v25 = MiLockWorkingSetShared(v17);
  v61 = v25;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v62);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v26 = MiGetSystemRegionType(v11[6]), (_DWORD)v63 != v26)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v27 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v17, v27, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v23) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
    v63 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = (unsigned __int64 *)MiGetPteFromCopyList(a3, v64, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v65) == 1 )
        {
          MiCopyKstack(v23, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v23);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v32 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v11[6], 0LL, 2LL);
          KiReleaseThreadStateLock(v33, v65, 0LL);
          KiReleaseThreadLockSafe(v63);
          v34 = ZeroPte;
          v35 = 0;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v35 = 1;
              if ( !HIBYTE(word_140C4E048) )
              {
                v36 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v36 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v36 )
                v34 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v34;
          if ( v35 )
            MiWritePteShadow((__int64)PteFromCopyList, v34);
          MiUnlockPageTableInternal(v17, v27);
          LOBYTE(v37) = v61;
          MiUnlockWorkingSetShared(v17, v37);
          v29 = v64;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17, v27);
        LOBYTE(v42) = v61;
        MiUnlockWorkingSetShared(v17, v42);
        v43 = CurrentThread;
        v29 = v64;
        *v11 = v67;
        v44 = v63;
        v11[3] = v43;
        v11[1] = v29;
        v11[2] = PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v44 == -16 || (struct _KTHREAD *)v44 == v43 )
        {
          v45 = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStack, (ULONG_PTR)v11, 0LL);
          if ( v45 < 0 )
            *((_DWORD *)v11 + 10) = v45;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v55 = (unsigned __int8)MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v55 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v36 = (v58 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v58;
                if ( v36 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v55);
          goto LABEL_83;
        }
        v46 = ZeroPte;
        v47 = 0;
        if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v47 = 1;
          if ( !HIBYTE(word_140C4E048) )
          {
            v48 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v48 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v48 )
            v46 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v46;
        if ( v47 )
          MiWritePteShadow((__int64)PteFromCopyList, v46);
        MiReleaseFreshPage(v23);
        v49 = v11[7];
        if ( v49 )
        {
          v50 = (unsigned __int8)MiLockPageInline(v49);
          MiRemoveLockedPageChargeAndDecRef(v11[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v51 = KeGetCurrentIrql();
              if ( v51 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v51 >= 2u )
              {
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                v36 = (v54 & v53[5]) == 0;
                v53[5] &= v54;
                if ( v36 )
                  KiRemoveSystemWorkPriorityKick(v52);
              }
            }
          }
          __writecr8(v50);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0LL) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17, v27);
      LOBYTE(v38) = v61;
      MiUnlockWorkingSetShared(v17, v38);
      v39 = ZeroPte;
      v40 = 0;
      if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v40 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v41 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v41 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v41 )
          v39 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v39;
      if ( v40 )
        MiWritePteShadow((__int64)PteFromCopyList, v39);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17, v27);
LABEL_88:
    LOBYTE(v24) = v25;
    MiUnlockWorkingSetShared(v17, v24);
LABEL_89:
    MiReleaseFreshPage(v23);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17, v27);
  LOBYTE(v28) = v25;
  MiUnlockWorkingSetShared(v17, v28);
  v29 = v64;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v29;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
