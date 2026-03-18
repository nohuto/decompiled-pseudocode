/*
 * XREFs of MiAllocateKernelStackPages @ 0x1402B7180
 * Callers:
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140359230 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiMarkKernelStack @ 0x1402B7780 (MiMarkKernelStack.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  _QWORD *v10; // r14
  signed __int32 v11; // ecx
  unsigned int v12; // esi
  __int64 Page; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v17; // r15
  BOOL v18; // ebp
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  _QWORD *v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  _KPROCESS *Process; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _LIST_ENTRY *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rbx
  unsigned int Queue; // ebp
  unsigned int v43; // ebp
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  int v48; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+24h] [rbp-74h]
  BOOL v50; // [rsp+28h] [rbp-70h]
  BOOL v51; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v52; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-60h] BYREF
  __int128 v54; // [rsp+40h] [rbp-58h] BYREF
  __int64 v55; // [rsp+50h] [rbp-48h]
  unsigned __int64 v56; // [rsp+58h] [rbp-40h]
  unsigned __int8 v57; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  v54 = 0LL;
  if ( !a3 )
    return 1LL;
  v10 = 0LL;
  v56 = a2 + 8 * a3;
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v54);
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v54, 1u);
    v12 = DWORD2(v54) & v11 | HIDWORD(v54);
    Page = MiGetPage(a1, v12, 0LL);
    if ( Page == -1 )
      break;
LABEL_7:
    v15 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v15 = v10;
    v10 = (_QWORD *)v15;
    if ( !--v6 )
    {
      ValidPte = MiMakeValidPte(v7, 0LL, 2684354564LL, v14);
      v17 = 0LL;
      v57 = MiLockWorkingSetShared((__int64)&unk_140C4F300);
      v49 = MiProtectionToCacheAttribute(4LL);
      v18 = MiPteInShadowRange((unsigned __int64)&v53);
      v51 = v18;
      while ( 1 )
      {
        v55 = *(_QWORD *)v15;
        ValidPte ^= (ValidPte ^ (((v15 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( v17 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_13;
          MiUnlockPageTableInternal((__int64)&unk_140C4F300, v17);
        }
        v17 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_140C4F300, v17, 0LL);
LABEL_13:
        v19 = *(_QWORD *)v7;
        v50 = MiPteInShadowRange(v7);
        if ( v50
          && (unsigned int)MiPteHasShadow(v21, v20, v22, v23)
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v25 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
            v26 = v19 | 0x20;
            if ( (v25 & 0x20) == 0 )
              v26 = v19;
            v19 = v26;
            if ( (v25 & 0x42) != 0 )
              v19 = v26 | 0x42;
          }
        }
        if ( v19 )
          v27 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v27 = MiSwizzleInvalidPte(128LL);
        v52 = v27;
        MiSetNonResidentPteHeat(&v52, 0LL);
        v29 = v52;
        *(_QWORD *)v15 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v15 + 16) = v29 & 0xFFFFFFFFFC00FFFFuLL;
        v30 = (v7 >> 9) & 0x7FFFFFFFF8LL;
        *(_WORD *)(v15 + 32) = 1;
        v31 = *(_QWORD *)(v30 - 0x98000000000LL);
        if ( MiPteInShadowRange(v30 - 0x98000000000LL)
          && (unsigned int)MiPteHasShadow(Process, v32, v34, v35)
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v32 = (v7 >> 9) & 0xFFFFFFF8;
          Process = KeGetCurrentThread()->ApcState.Process;
          v36 = Process[1].ProcessListEntry.Flink;
          if ( v36 )
          {
            v37 = *((_QWORD *)&v36->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
            v32 = v31 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v37;
            LOBYTE(Process) = v37 & 0x20;
            if ( (v37 & 0x20) == 0 )
              v32 = v31;
            v31 = v32;
            if ( (v37 & 0x42) != 0 )
              v31 = v32 | 0x42;
          }
        }
        v53 = v31;
        if ( v18
          && (unsigned int)MiPteHasShadow(Process, v32, v34, v35)
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v32 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v32 )
          {
            v38 = *(_QWORD *)(v32 + 8 * (((unsigned __int64)&v53 >> 3) & 0x1FF));
            v32 = v31 | 0x20;
            if ( (v38 & 0x20) == 0 )
              v32 = v31;
            v31 = v32;
            if ( (v38 & 0x42) != 0 )
              v31 = v32 | 0x42;
          }
        }
        v39 = (v31 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v15 + 40) = v39 | *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v41 = 48 * v39 - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v43 = Queue >> 9;
        else
          LOBYTE(v43) = PsGetPagePriorityThread(CurrentThread);
        v48 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v48, v32, v34, v35);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        MiLockNestedPageAtDpcInline(v41);
        *(_QWORD *)(v41 + 24) ^= (*(_QWORD *)(v41 + 24) ^ (*(_QWORD *)(v41 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(unsigned __int8 *)(v15 + 34) >> 6 != v49 )
          MiChangePageAttribute(v15, v49, 1LL);
        MiSetPfnTbFlushStamp(v15, 0LL, 1LL);
        v46 = *(_QWORD *)(v15 + 24);
        *(_BYTE *)(v15 + 35) ^= (*(_BYTE *)(v15 + 35) ^ v43) & 7;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v15 + 24) = v46 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 6;
        *(_BYTE *)(v15 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v47 = ValidPte;
        if ( v50 )
        {
          if ( (unsigned int)MiPteHasShadow(0xC000000000000001uLL, ValidPte, v44, v45) )
          {
            if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
              v47 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v47;
            MiWritePteShadow(v7, v47);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v47 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v47;
LABEL_67:
        MiMarkKernelStack(v7, a4);
        v15 = v55;
        v7 += 8LL;
        v18 = v51;
        if ( v7 >= v56 )
        {
          if ( v17 )
            MiUnlockPageTableInternal((__int64)&unk_140C4F300, v17);
          MiUnlockWorkingSetShared((__int64)&unk_140C4F300, v57);
          return 1LL;
        }
      }
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v12, 0LL);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v10 )
  {
    do
    {
      v28 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v28;
    }
    while ( v28 );
  }
  return 0LL;
}
