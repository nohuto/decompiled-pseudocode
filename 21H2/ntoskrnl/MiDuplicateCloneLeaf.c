/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1405BA864
 * Callers:
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140239F04 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402E7D14 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiVaToPfnEx @ 0x1403B8520 (MiVaToPfnEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rbx
  __int64 v10; // rsi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rbx
  volatile LONG *SharedVm; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int16 v19; // r9
  __int64 TransitionPte; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // edx
  bool v25; // zf
  char v26; // si
  __int64 v27; // rbx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // cl
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // edx
  int v39; // [rsp+20h] [rbp-48h]
  int v40; // [rsp+24h] [rbp-44h]
  unsigned int v41; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  char *v44; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v44 = (char *)v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C50780 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C50780;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v13 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      v44 = (char *)v13;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v13, a4);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = (volatile LONG *)MiGetSharedVm((__int64)v13);
      ExAcquireSpinLockExclusive(SharedVm);
      *((_DWORD *)SharedVm + 1) = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v16 = (v8 >> 5) & 0x1F;
  v40 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v10 + 16));
  v18 = v17 + 48 * a3;
  if ( v11 )
  {
    v19 = 129;
  }
  else
  {
    MiLockNestedPageAtDpcInline(v17 + 48 * a3);
    v19 = 132;
  }
  MiCopyPage(a3, v9, 0LL, v19);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v10);
  v41 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v11 )
  {
    TransitionPte = MiMakeTransitionPte(a3, v16);
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
          v24 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame((__int64)v44, a3);
  }
  v44 = (char *)TransitionPte;
  v26 = TransitionPte;
  v39 = 0;
  v27 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v39 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_30:
        if ( (v26 & 1) != 0 )
          v27 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_30;
    }
  }
  v28 = (unsigned __int64)a2;
  *a2 = v27;
  if ( v39 )
    MiWritePteShadow((__int64)a2, v27);
  v29 = MiVaToPfnEx(v28);
  MiInitializePfnForOtherProcess(a3, a1, v29, 16);
  *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v16);
  v30 = (unsigned __int8)MiLockPageInline(v18);
  if ( v40 )
    *(_QWORD *)(v18 + 16) |= 0x4000000uLL;
  v33 = *(_BYTE *)(v18 + 34);
  v34 = v41;
  if ( v33 >> 6 != v41 )
  {
    MiChangePageAttribute(v18, v41, 3);
    v33 = *(_BYTE *)(v18 + 34);
  }
  *(_BYTE *)(v18 + 35) ^= (PfnPriority ^ *(_BYTE *)(v18 + 35)) & 7;
  *(_BYTE *)(v18 + 34) = v33 & 0xF8 | 6;
  MiDecrementShareCount(v18, v34, v31, v32);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
        v25 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)v36);
      }
    }
  }
  __writecr8(v30);
  return 1LL;
}
