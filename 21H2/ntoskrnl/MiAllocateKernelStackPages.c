/*
 * XREFs of MiAllocateKernelStackPages @ 0x1402E3050
 * Callers:
 *     MmGrowKernelStackEx @ 0x1402497C0 (MmGrowKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiMarkKernelStack @ 0x1402E3650 (MiMarkKernelStack.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  _QWORD *v10; // r14
  signed __int32 v11; // ecx
  unsigned int v12; // esi
  __int64 Page; // rax
  __int64 v14; // rsi
  __int64 ValidPte; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20; // ebp
  __int64 v21; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  struct _LIST_ENTRY *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v38; // rbx
  unsigned int Queue; // ebp
  unsigned int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+24h] [rbp-74h]
  int v45; // [rsp+28h] [rbp-70h]
  int v46; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v47; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-60h] BYREF
  __int128 v49; // [rsp+40h] [rbp-58h] BYREF
  __int64 v50; // [rsp+50h] [rbp-48h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]
  unsigned __int8 v52; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  v49 = 0LL;
  if ( !a3 )
    return 1LL;
  v10 = 0LL;
  v51 = a2 + 8 * a3;
  MiInitializePageColorBase(0LL, (unsigned int)(a5 + 1), &v49);
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v49, 1u);
    v12 = DWORD2(v49) & v11 | HIDWORD(v49);
    Page = MiGetPage(a1, v12, 0LL);
    if ( Page == -1 )
      break;
LABEL_7:
    v14 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v14 = v10;
    v10 = (_QWORD *)v14;
    if ( !--v6 )
    {
      ValidPte = MiMakeValidPte(v7, 0LL, 2684354564LL);
      v16 = 0LL;
      v52 = MiLockWorkingSetShared((__int64)&unk_140C4F540, v17, v18, v19);
      v44 = MiProtectionToCacheAttribute(4LL);
      v20 = MiPteInShadowRange(&v48);
      v46 = v20;
      while ( 1 )
      {
        v50 = *(_QWORD *)v14;
        ValidPte ^= (ValidPte ^ (((v14 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( v16 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_13;
          MiUnlockPageTableInternal((__int64)&unk_140C4F540, v16);
        }
        v16 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_140C4F540, v16, 0);
LABEL_13:
        v21 = *(_QWORD *)v7;
        v45 = MiPteInShadowRange(v7);
        if ( v45 && (unsigned int)MiPteHasShadow() && (v21 & 1) != 0 && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v23 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
            v24 = v21 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v21;
            v21 = v24;
            if ( (v23 & 0x42) != 0 )
              v21 = v24 | 0x42;
          }
        }
        if ( v21 )
          v25 = v21 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v25 = MiSwizzleInvalidPte(128LL);
        v47 = v25;
        MiSetNonResidentPteHeat(&v47, 0);
        v27 = v47;
        *(_QWORD *)v14 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v14 + 16) = v27 & 0xFFFFFFFFFC00FFFFuLL;
        v28 = (v7 >> 9) & 0x7FFFFFFFF8LL;
        *(_WORD *)(v14 + 32) = 1;
        v29 = *(_QWORD *)(v28 - 0x98000000000LL);
        if ( (unsigned int)MiPteInShadowRange(v28 - 0x98000000000LL)
          && (unsigned int)MiPteHasShadow()
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v30 )
          {
            v31 = *((_QWORD *)&v30->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
            v32 = v29 | 0x20;
            if ( (v31 & 0x20) == 0 )
              v32 = v29;
            v29 = v32;
            if ( (v31 & 0x42) != 0 )
              v29 = v32 | 0x42;
          }
        }
        v48 = v29;
        if ( v20 && (unsigned int)MiPteHasShadow() && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v33 )
          {
            v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF));
            v35 = v29 | 0x20;
            if ( (v34 & 0x20) == 0 )
              v35 = v29;
            v29 = v35;
            if ( (v34 & 0x42) != 0 )
              v29 = v35 | 0x42;
          }
        }
        v36 = (v29 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v14 + 40) = v36 | *(_QWORD *)(v14 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v38 = 48 * v36 - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v40 = Queue >> 9;
        else
          LOBYTE(v40) = PsGetPagePriorityThread(CurrentThread);
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v43);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiLockNestedPageAtDpcInline(v38);
        *(_QWORD *)(v38 + 24) ^= (*(_QWORD *)(v38 + 24) ^ (*(_QWORD *)(v38 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v44 )
          MiChangePageAttribute(v14, v44, 1LL);
        MiSetPfnTbFlushStamp(v14, 0LL, 1LL);
        v41 = *(_QWORD *)(v14 + 24);
        *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ v40) & 7;
        *(_QWORD *)(v14 + 8) = v7;
        *(_QWORD *)(v14 + 24) = v41 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 6;
        *(_BYTE *)(v14 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v42 = ValidPte;
        if ( v45 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
              v42 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v42;
            MiWritePteShadow(v7, v42);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v42 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v42;
LABEL_67:
        MiMarkKernelStack(v7, a4);
        v14 = v50;
        v7 += 8LL;
        v20 = v46;
        if ( v7 >= v51 )
        {
          if ( v16 )
            MiUnlockPageTableInternal((__int64)&unk_140C4F540, v16);
          MiUnlockWorkingSetShared((__int64)&unk_140C4F540, v52);
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
      v26 = (_QWORD *)*v10;
      MiReleaseFreshPage((__int64)v10);
      v10 = v26;
    }
    while ( v26 );
  }
  return 0LL;
}
