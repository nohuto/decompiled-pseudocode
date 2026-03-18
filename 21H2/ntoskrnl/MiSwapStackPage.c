/*
 * XREFs of MiSwapStackPage @ 0x140249930
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 * Callees:
 *     KeTryToFreezeThreadStack @ 0x140201DF4 (KeTryToFreezeThreadStack.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiSwapStackPageNoDpc @ 0x14024A0FC (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x14024A2B8 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyKstack @ 0x140590A18 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x140591040 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 *a6, _DWORD *a7)
{
  __int64 Pool; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  int SystemRegionType; // eax
  __int64 v17; // rcx
  __int64 AnyMultiplexedVm; // rax
  __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  unsigned int v22; // ebx
  int v23; // ebx
  __int64 Page; // rax
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r12
  int v30; // eax
  unsigned __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 LeafPfnBuddy; // rbp
  unsigned __int64 *PteFromCopyList; // r12
  char v36; // al
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  int v39; // ebp
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  int v44; // edi
  bool v45; // zf
  __int64 v46; // rdx
  struct _KTHREAD *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  unsigned __int64 v50; // rbx
  int v51; // edi
  bool v52; // zf
  __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  unsigned __int64 v59; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v62; // eax
  _DWORD *SchedulerAssist; // r8
  char v65; // [rsp+30h] [rbp-68h]
  int v66; // [rsp+34h] [rbp-64h] BYREF
  __int64 v67; // [rsp+38h] [rbp-60h]
  __int64 v68; // [rsp+40h] [rbp-58h]
  __int64 v69; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  unsigned __int64 v71; // [rsp+58h] [rbp-40h]

  v69 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(64LL, 80LL, 1934321997LL);
  v13 = (_QWORD *)Pool;
  if ( !Pool )
    return 0LL;
  *(_QWORD *)(Pool + 32) = a1;
  v14 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v15 = (__int64)(v14 << 25) >> 16;
  *(_QWORD *)(Pool + 48) = v15;
  SystemRegionType = MiGetSystemRegionType(v15, 0LL, v11, v12);
  LODWORD(v67) = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v17 = 4LL;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_90:
      ExFreePoolWithTag(v13, 0);
      return 0LL;
    }
    v17 = 1LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v17);
  v13[8] = AnyMultiplexedVm;
  v19 = AnyMultiplexedVm;
  if ( !byte_140C53444 )
    goto LABEL_90;
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v71 = v20;
  if ( a4 == -1 )
  {
    v23 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8);
    v22 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C506CD) | dword_140C50738 & v20 | (v23 << byte_140C506CC);
    v21 = (a5 & 0x1000000 | 0x20000u) >> 8;
    if ( (a5 & 0x2000000) != 0 )
      v21 = (unsigned int)v21 | 0x20000;
  }
  else
  {
    v21 = 560LL;
    v22 = dword_140C50738 & v20 | a4 & ~dword_140C50738;
  }
  Page = MiGetPage(a1, v22, v21);
  v68 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v25 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v25, 0LL, 0LL);
  v13[7] = 0LL;
  v29 = MiLockWorkingSetShared(v19);
  v65 = v29;
  v66 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v66);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v14 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v30 = MiGetSystemRegionType(v13[6], v26, v27, v28), (_DWORD)v67 != v30)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v31 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        !(unsigned int)MiLockPageTableInternal(v19, v31, (unsigned int)v26)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (byte_140C506CE & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a3, a2, v25) )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2, v26);
    v67 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = (unsigned __int64 *)MiGetPteFromCopyList(a3, v68, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( KeTryToFreezeThreadStack(LeafPfnBuddy, &v69) )
        {
          MiCopyKstack(v25, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v25);
          MiSwitchKstackPages(v25, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v36 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v13[6], 0LL, 2LL);
          KiReleaseThreadStateLock(v37, v69, 0LL);
          KiReleaseThreadLockSafe(v67);
          v38 = ZeroPte;
          v39 = 0;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v39 = 1;
              if ( !HIBYTE(word_140C51864) )
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
                v38 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v38;
          if ( v39 )
            MiWritePteShadow((__int64)PteFromCopyList, v38);
          MiUnlockPageTableInternal(v19, v31);
          LOBYTE(v41) = v65;
          MiUnlockWorkingSetShared(v19, v41);
          v33 = v68;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v19, v31);
        LOBYTE(v46) = v65;
        MiUnlockWorkingSetShared(v19, v46);
        v47 = CurrentThread;
        v33 = v68;
        *v13 = v71;
        v48 = v67;
        v13[3] = v47;
        v13[1] = v33;
        v13[2] = PteFromCopyList;
        *((_DWORD *)v13 + 10) = 0;
        if ( v48 == -16 || (struct _KTHREAD *)v48 == v47 )
        {
          v49 = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStack, (ULONG_PTR)v13, 0LL);
          if ( v49 < 0 )
            *((_DWORD *)v13 + 10) = v49;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)v13);
        }
        if ( *((int *)v13 + 10) >= 0 )
        {
          *a7 = 0;
          v59 = (unsigned __int8)MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v59 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v40 = (v62 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v62;
                if ( v40 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v59);
          goto LABEL_83;
        }
        v50 = ZeroPte;
        v51 = 0;
        if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v51 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v52 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v52 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v52 )
            v50 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v50;
        if ( v51 )
          MiWritePteShadow((__int64)PteFromCopyList, v50);
        MiReleaseFreshPage(v25);
        v53 = v13[7];
        if ( v53 )
        {
          v54 = (unsigned __int8)MiLockPageInline(v53);
          MiRemoveLockedPageChargeAndDecRef(v13[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v13[7] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v55 = KeGetCurrentIrql();
              if ( v55 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v55 >= 2u )
              {
                v56 = KeGetCurrentPrcb();
                v57 = v56->SchedulerAssist;
                v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
                v40 = (v58 & v57[5]) == 0;
                v57[5] &= v58;
                if ( v40 )
                  KiRemoveSystemWorkPriorityKick(v56);
              }
            }
          }
          __writecr8(v54);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0LL) )
      {
        v13[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v19, v31);
      LOBYTE(v42) = v65;
      MiUnlockWorkingSetShared(v19, v42);
      v43 = ZeroPte;
      v44 = 0;
      if ( !(unsigned int)MiPteInShadowRange(PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v44 = 1;
        if ( !HIBYTE(word_140C51864) )
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
          v43 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v43;
      if ( v44 )
        MiWritePteShadow((__int64)PteFromCopyList, v43);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v19, v31);
LABEL_88:
    LOBYTE(v26) = v29;
    MiUnlockWorkingSetShared(v19, v26);
LABEL_89:
    MiReleaseFreshPage(v25);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v19, v31);
  LOBYTE(v32) = v29;
  MiUnlockWorkingSetShared(v19, v32);
  v33 = v68;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v33;
  ExFreePoolWithTag(v13, 0);
  return 1LL;
}
