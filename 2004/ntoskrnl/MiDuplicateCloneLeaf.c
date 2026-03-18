/*
 * XREFs of MiDuplicateCloneLeaf @ 0x140554D94
 * Callers:
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E2C58 (MiInitializePfnForOtherProcess.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14031C51C (MiUpdateTransitionPteFrame.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140346A48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiVaToPfn @ 0x140361944 (MiVaToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // r9d
  __int64 TransitionPte; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // edx
  bool v26; // zf
  char v27; // r14
  __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  unsigned __int64 v35; // rbx
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // edx
  int v41; // [rsp+20h] [rbp-48h]
  int v42; // [rsp+24h] [rbp-44h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  unsigned int v44; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v45; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  __int64 v47; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v47 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C4DD40 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C4DD40;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v45 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v45, a4);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v45);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v15 = (v8 >> 5) & 0x1F;
  v42 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v10 + 16));
  v19 = v16 + 48 * a3;
  if ( v11 != 1 )
    MiLockNestedPageAtDpcInline(v16 + 48 * a3, v16, v17, v18);
  v20 = 129;
  if ( v11 != 1 )
    v20 = 132;
  MiCopyPage(a3, v9, 0LL, v20);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v10);
  v44 = *(unsigned __int8 *)(v10 + 34) >> 6;
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
          v25 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v47, a3);
  }
  v47 = TransitionPte;
  v27 = TransitionPte;
  v41 = 0;
  v28 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v41 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
LABEL_31:
        if ( (v27 & 1) != 0 )
          v28 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_31;
    }
  }
  v30 = (unsigned __int64)a2;
  *a2 = v28;
  if ( v41 )
    MiWritePteShadow((__int64)a2, v28, v29);
  v31 = MiVaToPfn(v30);
  MiInitializePfnForOtherProcess(a3, a1, v31, 16LL);
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v15);
  v35 = (unsigned __int8)MiLockPageInline(v19, v32, v33, v34);
  if ( v42 )
    *(_QWORD *)(v19 + 16) |= 0x4000000uLL;
  v36 = *(_BYTE *)(v19 + 34);
  if ( v36 >> 6 != v44 )
  {
    MiChangePageAttribute(v19, v44, 3);
    v36 = *(_BYTE *)(v19 + 34);
  }
  *(_BYTE *)(v19 + 35) ^= (PfnPriority ^ *(_BYTE *)(v19 + 35)) & 7;
  *(_BYTE *)(v19 + 34) = v36 & 0xF8 | 6;
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v26 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)v38);
      }
    }
  }
  __writecr8(v35);
  return 1LL;
}
