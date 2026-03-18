/*
 * XREFs of MiAllocateKernelStackPages @ 0x140224500
 * Callers:
 *     MmGrowKernelStackEx @ 0x14031B660 (MmGrowKernelStackEx.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiMarkKernelStack @ 0x140224B00 (MiMarkKernelStack.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  __int64 *v7; // r12
  _QWORD *v10; // r14
  signed __int32 v11; // ecx
  unsigned int v12; // esi
  __int64 Page; // rax
  __int64 v14; // rsi
  __int64 ValidPte; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rbx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v42; // rbx
  unsigned int Queue; // ebp
  unsigned int v44; // ebp
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+24h] [rbp-74h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-60h] BYREF
  __int128 v53; // [rsp+40h] [rbp-58h] BYREF
  __int64 v54; // [rsp+50h] [rbp-48h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]
  unsigned __int8 v56; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  v53 = 0LL;
  if ( !a3 )
    return 1LL;
  v10 = 0LL;
  v55 = (unsigned __int64)&a2[a3];
  MiInitializePageColorBase(0LL, (unsigned int)(a5 + 1), &v53);
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v53, 1u);
    v12 = DWORD2(v53) & v11 | HIDWORD(v53);
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
      v56 = MiLockWorkingSetShared((__int64)&unk_140C4F440);
      v48 = MiProtectionToCacheAttribute(4LL, v17, v18, v19);
      v21 = MiPteInShadowRange(&v52, v20);
      v50 = v21;
      while ( 1 )
      {
        v54 = *(_QWORD *)v14;
        v22 = (ValidPte ^ (((v14 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        ValidPte ^= v22;
        if ( v16 )
        {
          if ( ((unsigned __int16)v7 & 0xFFF) != 0 )
            goto LABEL_13;
          MiUnlockPageTableInternal(&unk_140C4F440, v16);
        }
        v16 = (((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_140C4F440, v16, 0LL);
LABEL_13:
        v23 = *v7;
        v49 = MiPteInShadowRange(v7, v22);
        if ( v49 && (unsigned int)MiPteHasShadow(v25, v24) && (v23 & 1) != 0 && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v27 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v7 >> 3) & 0x1FF));
            v28 = v23 | 0x20;
            if ( (v27 & 0x20) == 0 )
              v28 = v23;
            v23 = v28;
            if ( (v27 & 0x42) != 0 )
              v23 = v28 | 0x42;
          }
        }
        if ( v23 )
          v29 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v29 = MiSwizzleInvalidPte(128LL);
        v51 = v29;
        MiSetNonResidentPteHeat(&v51, 0LL);
        v31 = v51;
        *(_QWORD *)v14 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v14 + 16) = v31 & 0xFFFFFFFFFC00FFFFuLL;
        v32 = ((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL;
        *(_WORD *)(v14 + 32) = 1;
        v33 = *(_QWORD *)(v32 - 0x98000000000LL);
        if ( (unsigned int)MiPteInShadowRange(v32 - 0x98000000000LL, v34)
          && (unsigned int)MiPteHasShadow(Process, v35)
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v35 = ((unsigned __int64)v7 >> 9) & 0xFFFFFFF8;
          Process = KeGetCurrentThread()->ApcState.Process;
          v37 = Process[1].ProcessListEntry.Flink;
          if ( v37 )
          {
            v38 = *((_QWORD *)&v37->Flink + (((((unsigned __int64)v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
            v35 = v33 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v38;
            LOBYTE(Process) = v38 & 0x20;
            if ( (v38 & 0x20) == 0 )
              v35 = v33;
            v33 = v35;
            if ( (v38 & 0x42) != 0 )
              v33 = v35 | 0x42;
          }
        }
        v52 = v33;
        if ( v21
          && (unsigned int)MiPteHasShadow(Process, v35)
          && (v33 & 1) != 0
          && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
        {
          v35 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v35 )
          {
            v39 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)&v52 >> 3) & 0x1FF));
            v35 = v33 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v35 = v33;
            v33 = v35;
            if ( (v39 & 0x42) != 0 )
              v33 = v35 | 0x42;
          }
        }
        v40 = (v33 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v14 + 40) = v40 | *(_QWORD *)(v14 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v42 = 48 * v40 - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v44 = Queue >> 9;
        else
          LOBYTE(v44) = PsGetPagePriorityThread(CurrentThread, v35);
        v47 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v47);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiLockNestedPageAtDpcInline(v42);
        *(_QWORD *)(v42 + 24) ^= (*(_QWORD *)(v42 + 24) ^ (*(_QWORD *)(v42 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v48 )
          MiChangePageAttribute(v14, v48, 1LL);
        MiSetPfnTbFlushStamp(v14, 0LL, 1LL);
        v45 = *(_QWORD *)(v14 + 24);
        *(_BYTE *)(v14 + 35) ^= (*(_BYTE *)(v14 + 35) ^ v44) & 7;
        *(_QWORD *)(v14 + 8) = v7;
        *(_QWORD *)(v14 + 24) = v45 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 6;
        *(_BYTE *)(v14 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v46 = ValidPte;
        if ( v49 )
        {
          if ( (unsigned int)MiPteHasShadow(0xC000000000000001uLL, ValidPte) )
          {
            if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
              v46 |= 0x8000000000000000uLL;
            *v7 = v46;
            MiWritePteShadow(v7, v46);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v46 |= 0x8000000000000000uLL;
          }
        }
        *v7 = v46;
LABEL_67:
        MiMarkKernelStack(v7, a4);
        v14 = v54;
        ++v7;
        v21 = v50;
        if ( (unsigned __int64)v7 >= v55 )
        {
          if ( v16 )
            MiUnlockPageTableInternal(&unk_140C4F440, v16);
          MiUnlockWorkingSetShared((__int64)&unk_140C4F440, v56);
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
      v30 = (_QWORD *)*v10;
      MiReleaseFreshPage(v10);
      v10 = v30;
    }
    while ( v30 );
  }
  return 0LL;
}
