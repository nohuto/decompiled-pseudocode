/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14055A474
 * Callers:
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  int v11; // r15d
  unsigned __int64 v12; // rbx
  LONG *SharedVm; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // r9d
  __int64 TransitionPte; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // edx
  bool v24; // zf
  char v25; // r14
  __int64 v26; // rbx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  unsigned __int64 v32; // rbx
  _DWORD *v33; // r9
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // edx
  int v39; // [rsp+20h] [rbp-48h]
  int v40; // [rsp+24h] [rbp-44h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  unsigned int v42; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v43; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  __int64 v45; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v45 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C4DF80 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C4DF80;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v43 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v43, a4);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v43);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v15 = (v8 >> 5) & 0x1F;
  v40 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v10 + 16));
  v17 = v16 + 48 * a3;
  if ( v11 != 1 )
    MiLockNestedPageAtDpcInline(v16 + 48 * a3);
  v18 = 129;
  if ( v11 != 1 )
    v18 = 132;
  MiCopyPage(a3, v9, 0LL, v18);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v10);
  v42 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v11 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a3, v15);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v45, a3);
  }
  v45 = TransitionPte;
  v25 = TransitionPte;
  v39 = 0;
  v26 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v39 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
LABEL_31:
        if ( (v25 & 1) != 0 )
          v26 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_31;
    }
  }
  v27 = (unsigned __int64)a2;
  *a2 = v26;
  if ( v39 )
    MiWritePteShadow((__int64)a2, v26);
  v28 = MiVaToPfn(v27);
  MiInitializePfnForOtherProcess(a3, a1, v28, 16);
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v15);
  v32 = (unsigned __int8)MiLockPageInline(v17, v29, v30, v31);
  if ( v40 )
    *(_QWORD *)(v17 + 16) |= 0x4000000uLL;
  v34 = *(_BYTE *)(v17 + 34);
  if ( v34 >> 6 != v42 )
  {
    MiChangePageAttribute(v17, v42, 3LL, v33);
    v34 = *(_BYTE *)(v17 + 34);
  }
  *(_BYTE *)(v17 + 35) ^= (PfnPriority ^ *(_BYTE *)(v17 + 35)) & 7;
  *(_BYTE *)(v17 + 34) = v34 & 0xF8 | 6;
  MiDecrementShareCount(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v32 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
        v24 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick((__int64)v36);
      }
    }
  }
  __writecr8(v32);
  return 1LL;
}
