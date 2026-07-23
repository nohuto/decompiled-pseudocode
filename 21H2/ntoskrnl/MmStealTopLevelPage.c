/*
 * XREFs of MmStealTopLevelPage @ 0x140388728
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1403885F0 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402956D0 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402959F4 (KeMakeUserDirectoryTableBase.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  LONG *SharedVm; // rbx
  unsigned int v6; // esi
  __int64 v7; // r15
  _QWORD *v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  BOOL v12; // r11d
  int v13; // edx
  __int64 v14; // r8
  bool v15; // zf
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  int v21; // ebp
  BOOL v22; // r12d
  bool v23; // zf
  int v24; // edx
  unsigned __int64 v25; // rbx
  bool v26; // zf
  KIRQL v27; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v6 = 0;
  v27 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v9 = 0;
    v10 = ((v7 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0xFFFF000000000FFFuLL;
    v11 = ZeroPte;
    v12 = MiPteInShadowRange((unsigned __int64)v8);
    if ( !v12 )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v15 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v15 = (ZeroPte & 1) == 0;
    }
    if ( !v15 )
      v11 = v14 | ZeroPte;
LABEL_5:
    *v8 = v11;
    if ( v9 )
      MiWritePteShadow((__int64)v8, v11);
    v13 = 0;
    if ( v12 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_8;
        v17 = (v10 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v17 = (v10 & 1) == 0;
      }
      if ( !v17 )
        v10 |= v16;
    }
LABEL_8:
    *v8 = v10;
    if ( v13 )
      MiWritePteShadow((__int64)v8, v10);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v7 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v18 = (((unsigned __int64)Process[1].ProcessListEntry.Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = ZeroPte;
    v20 = MI_READ_PTE_LOCK_FREE(v18);
    v21 = 0;
    v22 = MiPteInShadowRange(v18);
    if ( v22 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_36;
        v23 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v23 = (ZeroPte & 1) == 0;
      }
      if ( !v23 )
        v19 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_36:
    *(_QWORD *)v18 = v19;
    if ( v21 )
      MiWritePteShadow(v18, v19);
    KeFlushSingleTb(v18 << 25 >> 16, 0, 2u);
    v24 = 0;
    v25 = ((v7 & 0xFFFFFFFFFLL) << 12) | v20 & 0xFFFF000000000FFFuLL;
    if ( !v22 )
      goto LABEL_46;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v26 = (v25 & 1) == 0;
        goto LABEL_44;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v26 = (v25 & 1) == 0;
LABEL_44:
      if ( !v26 )
        v25 |= 0x8000000000000000uLL;
    }
LABEL_46:
    *(_QWORD *)v18 = v25;
    if ( v24 )
      MiWritePteShadow(v18, v25);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v7 << 12);
    goto LABEL_12;
  }
LABEL_13:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v27);
  return v6;
}
