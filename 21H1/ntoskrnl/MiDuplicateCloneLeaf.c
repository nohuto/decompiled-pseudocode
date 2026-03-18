/*
 * XREFs of MiDuplicateCloneLeaf @ 0x140554744
 * Callers:
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140308C48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiVaToPfn @ 0x14033BCD4 (MiVaToPfn.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14034B85C (MiUpdateTransitionPteFrame.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  unsigned __int64 v34; // rbx
  _DWORD *v35; // r9
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
    if ( qword_140C4DE80 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C4DE80;
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
      if ( !HIBYTE(word_140C4DF48) )
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
  v29 = (unsigned __int64)a2;
  *a2 = v28;
  if ( v41 )
    MiWritePteShadow((__int64)a2, v28);
  v30 = MiVaToPfn(v29);
  MiInitializePfnForOtherProcess(a3, a1, v30, 16LL);
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v15);
  v34 = (unsigned __int8)MiLockPageInline(v19, v31, v32, v33);
  if ( v42 )
    *(_QWORD *)(v19 + 16) |= 0x4000000uLL;
  v36 = *(_BYTE *)(v19 + 34);
  if ( v36 >> 6 != v44 )
  {
    MiChangePageAttribute(v19, v44, 3LL, v35);
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
      if ( v37 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
        v26 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)v38);
      }
    }
  }
  __writecr8(v34);
  return 1LL;
}
