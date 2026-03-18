/*
 * XREFs of MiSwapStackPage @ 0x140316FFC
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     KeGenericCallDpc @ 0x140303170 (KeGenericCallDpc.c)
 *     MiSwapStackPageNoDpc @ 0x1403177D0 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140317984 (MiCanStealKernelStack.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1403544A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiGetLeafPfnBuddy @ 0x14037DA1C (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x14050D8C8 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140530130 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140530B4C (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 Page; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int8 v29; // r12
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 LeafPfnBuddy; // rbp
  __int64 v35; // r8
  __int64 *PteFromCopyList; // r12
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  int v44; // ebp
  __int64 v45; // r8
  bool v46; // zf
  unsigned __int64 v47; // rbx
  int v48; // edi
  bool v49; // zf
  struct _KTHREAD *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // eax
  unsigned __int64 v55; // rbx
  int v56; // edi
  bool v57; // zf
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  unsigned __int64 v61; // rbx
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  _DWORD *v64; // r8
  int v65; // eax
  unsigned __int64 v66; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v69; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v72; // [rsp+30h] [rbp-68h]
  int v73; // [rsp+34h] [rbp-64h] BYREF
  __int64 v74; // [rsp+38h] [rbp-60h]
  __int64 v75; // [rsp+40h] [rbp-58h]
  __int64 v76; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v78; // [rsp+58h] [rbp-40h]

  v76 = 0LL;
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
  LODWORD(v74) = SystemRegionType;
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
  if ( !byte_140C4EE1C )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v78 = v19;
  if ( a4 == -1 )
  {
    v21 = *((_DWORD *)MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 2);
    v20 = ((unsigned int)MiGetPfnChannel(a2, v22, v23) << byte_140C4DDCD) | dword_140C4DE38 & v19 | (v21 << byte_140C4DDCC);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DE38 & v19 | a4 & ~dword_140C4DE38;
  }
  Page = MiGetPage(a1, v20, v18);
  v75 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v25 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v25, 0, 0);
  v11[7] = 0LL;
  v73 = 0;
  v29 = MiLockWorkingSetShared(v17);
  v72 = v29;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v73, v26, v27, v28);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v30 = MiGetSystemRegionType(v11[6]), (_DWORD)v74 != v30)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v31 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v17, v31, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v25) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2);
    v74 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a3, v75, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v76) == 1 )
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
          KeFlushSingleTb(v11[6], 0LL, 2LL);
          KiReleaseThreadStateLock(v42, v76, 0LL);
          KiReleaseThreadLockSafe(v74);
          v43 = ZeroPte;
          v44 = 0;
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C4DF48) )
              {
                v46 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v46 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v46 )
                v43 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v43;
          if ( v44 )
            MiWritePteShadow((__int64)PteFromCopyList, v43);
          MiUnlockPageTableInternal(v17, v31, v45);
          MiUnlockWorkingSetShared(v17, v72);
          v33 = v75;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17, v31, v37);
        MiUnlockWorkingSetShared(v17, v72);
        v50 = CurrentThread;
        v33 = v75;
        *v11 = v78;
        v51 = v74;
        v11[3] = (__int64)v50;
        v11[1] = v33;
        v11[2] = (__int64)PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v51 == -16 || (struct _KTHREAD *)v51 == v50 )
        {
          v54 = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStack, (ULONG_PTR)v11, 0LL);
          if ( v54 < 0 )
            *((_DWORD *)v11 + 10) = v54;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v66 = (unsigned __int8)MiLockPageInline(a2, v52, v53);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v66 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v46 = (v69 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v69;
                if ( v46 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v66);
          goto LABEL_83;
        }
        v55 = ZeroPte;
        v56 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v56 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
            v57 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v57 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v57 )
            v55 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v55;
        if ( v56 )
          MiWritePteShadow((__int64)PteFromCopyList, v55);
        MiReleaseFreshPage(v25);
        v60 = v11[7];
        if ( v60 )
        {
          v61 = (unsigned __int8)MiLockPageInline(v60, v58, v59);
          MiRemoveLockedPageChargeAndDecRef(v11[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v62 >= 2u )
              {
                v63 = KeGetCurrentPrcb();
                v64 = v63->SchedulerAssist;
                v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
                v46 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v46 )
                  KiRemoveSystemWorkPriorityKick(v63);
              }
            }
          }
          __writecr8(v61);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17, v31, v37);
      MiUnlockWorkingSetShared(v17, v72);
      v47 = ZeroPte;
      v48 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v48 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v49 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v49 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v49 )
          v47 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v47;
      if ( v48 )
        MiWritePteShadow((__int64)PteFromCopyList, v47);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17, v31, v35);
LABEL_88:
    MiUnlockWorkingSetShared(v17, v29);
LABEL_89:
    MiReleaseFreshPage(v25);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17, v31, v32);
  MiUnlockWorkingSetShared(v17, v29);
  v33 = v75;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v33;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
