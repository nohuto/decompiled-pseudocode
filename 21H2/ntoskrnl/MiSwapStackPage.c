/*
 * XREFs of MiSwapStackPage @ 0x1402C605C
 * Callers:
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x1402C6830 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1402C69E4 (MiCanStealKernelStack.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     KiReleaseThreadStateLock @ 0x1402EA480 (KiReleaseThreadStateLock.c)
 *     KeGenericCallDpc @ 0x1402ECF00 (KeGenericCallDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140329FF0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiGetLeafPfnBuddy @ 0x140380A4C (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x140513388 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140535C50 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14053666C (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, unsigned int *a3, int a4, int a5, __int64 *a6, _DWORD *a7)
{
  __int64 *Pool; // rax
  __int64 *v11; // rsi
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 Page; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // r12
  int v33; // eax
  unsigned __int64 v34; // r15
  __int64 v35; // r15
  __int64 LeafPfnBuddy; // rbp
  __int64 *PteFromCopyList; // r12
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  int v44; // ebp
  __int64 v45; // rdx
  __int64 v46; // r8
  bool v47; // zf
  unsigned __int64 v48; // rbx
  int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // r8
  bool v52; // zf
  struct _KTHREAD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // eax
  unsigned __int64 v58; // rbx
  int v59; // edi
  __int64 v60; // r8
  bool v61; // zf
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rcx
  unsigned __int64 v65; // rbx
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  unsigned __int64 v70; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v73; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v76; // [rsp+30h] [rbp-68h]
  int v77; // [rsp+34h] [rbp-64h] BYREF
  __int64 v78; // [rsp+38h] [rbp-60h]
  __int64 v79; // [rsp+40h] [rbp-58h]
  __int64 v80; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v82; // [rsp+58h] [rbp-40h]

  v80 = 0LL;
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
  LODWORD(v78) = SystemRegionType;
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
  if ( !byte_140C4EEDC )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v82 = v19;
  if ( a4 == -1 )
  {
    v21 = *(_DWORD *)(MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 8);
    v20 = ((unsigned int)MiGetPfnChannel(a2, v22, v23) << byte_140C4DE8D) | dword_140C4DEF8 & v19 | (v21 << byte_140C4DE8C);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DEF8 & v19 | a4 & ~dword_140C4DEF8;
  }
  Page = MiGetPage(a1, v20, v18);
  v79 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v25 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v25, 0, 0);
  v11[7] = 0LL;
  v77 = 0;
  v32 = MiLockWorkingSetShared(v17, v26, v27, v28);
  v76 = v32;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v77, v29, v30, v31);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v33 = MiGetSystemRegionType(v11[6]), (_DWORD)v78 != v33)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v34 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v17, v34, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v25) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
    v78 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a3, v79, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v80) == 1 )
        {
          MiCopyKstack(v25, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v25, v38, v39, v40);
          MiSwitchKstackPages(v25, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v41 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v41 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v11[6], 0, 2u);
          KiReleaseThreadStateLock(v42, v80, 0LL);
          KiReleaseThreadLockSafe(v78);
          v43 = ZeroPte;
          v44 = 0;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList, v45) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v47 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v47 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v47 )
                v43 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v43;
          if ( v44 )
            MiWritePteShadow((__int64)PteFromCopyList, v43, v46);
          MiUnlockPageTableInternal(v17, v34);
          MiUnlockWorkingSetShared(v17, v76);
          v35 = v79;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17, v34);
        MiUnlockWorkingSetShared(v17, v76);
        v53 = CurrentThread;
        v35 = v79;
        *v11 = v82;
        v54 = v78;
        v11[3] = (__int64)v53;
        v11[1] = v35;
        v11[2] = (__int64)PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v54 == -16 || (struct _KTHREAD *)v54 == v53 )
        {
          v57 = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStack, (ULONG_PTR)v11, 0LL);
          if ( v57 < 0 )
            *((_DWORD *)v11 + 10) = v57;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v70 = (unsigned __int8)MiLockPageInline(a2, v55, v56);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v70 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v47 = (v73 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v73;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v70);
          goto LABEL_83;
        }
        v58 = ZeroPte;
        v59 = 0;
        if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList, v55) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v59 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v61 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v61 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v61 )
            v58 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v58;
        if ( v59 )
          MiWritePteShadow((__int64)PteFromCopyList, v58, v60);
        MiReleaseFreshPage(v25);
        v64 = v11[7];
        if ( v64 )
        {
          v65 = (unsigned __int8)MiLockPageInline(v64, v62, v63);
          MiRemoveLockedPageChargeAndDecRef(v11[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v66 = KeGetCurrentIrql();
              if ( v66 <= 0xFu && (unsigned __int8)v65 <= 0xFu && v66 >= 2u )
              {
                v67 = KeGetCurrentPrcb();
                v68 = v67->SchedulerAssist;
                v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
                v47 = (v69 & v68[5]) == 0;
                v68[5] &= v69;
                if ( v47 )
                  KiRemoveSystemWorkPriorityKick(v67);
              }
            }
          }
          __writecr8(v65);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0LL) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17, v34);
      MiUnlockWorkingSetShared(v17, v76);
      v48 = ZeroPte;
      v49 = 0;
      if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList, v50) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v49 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v52 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v52 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v52 )
          v48 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v48;
      if ( v49 )
        MiWritePteShadow((__int64)PteFromCopyList, v48, v51);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17, v34);
LABEL_88:
    MiUnlockWorkingSetShared(v17, v32);
LABEL_89:
    MiReleaseFreshPage(v25);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17, v34);
  MiUnlockWorkingSetShared(v17, v32);
  v35 = v79;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v35;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
