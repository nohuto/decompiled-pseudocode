/*
 * XREFs of MiAllocateKernelStackPages @ 0x140348E30
 * Callers:
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x1403299E0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiMarkKernelStack @ 0x140349430 (MiMarkKernelStack.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
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
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _LIST_ENTRY *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rbx
  unsigned int Queue; // ebp
  unsigned int v38; // ebp
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+24h] [rbp-74h]
  BOOL v44; // [rsp+28h] [rbp-70h]
  BOOL v45; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v46; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-60h] BYREF
  __int128 v48; // [rsp+40h] [rbp-58h] BYREF
  __int64 v49; // [rsp+50h] [rbp-48h]
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]
  unsigned __int8 v51; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  v48 = 0LL;
  if ( !a3 )
    return 1LL;
  v10 = 0LL;
  v50 = a2 + 8 * a3;
  MiInitializePageColorBase(0LL, a5 + 1, (__int64)&v48);
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v48, 1u);
    v12 = DWORD2(v48) & v11 | HIDWORD(v48);
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
      v51 = MiLockWorkingSetShared((__int64)&unk_140C4F380);
      v43 = MiProtectionToCacheAttribute(4u);
      v18 = MiPteInShadowRange((unsigned __int64)&v47);
      v45 = v18;
      while ( 1 )
      {
        v49 = *(_QWORD *)v15;
        ValidPte ^= (ValidPte ^ (((v15 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( v17 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_13;
          MiUnlockPageTableInternal(&unk_140C4F380);
        }
        v17 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_140C4F380, v17, 0LL);
LABEL_13:
        v19 = *(_QWORD *)v7;
        v44 = MiPteInShadowRange(v7);
        if ( v44 && (unsigned int)MiPteHasShadow() && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v21 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
            v22 = v19 | 0x20;
            if ( (v21 & 0x20) == 0 )
              v22 = v19;
            v19 = v22;
            if ( (v21 & 0x42) != 0 )
              v19 = v22 | 0x42;
          }
        }
        if ( v19 )
          v23 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v23 = MiSwizzleInvalidPte(128LL);
        v46 = v23;
        MiSetNonResidentPteHeat(&v46, 0LL);
        v25 = v46;
        *(_QWORD *)v15 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v15 + 16) = v25 & 0xFFFFFFFFFC00FFFFuLL;
        v26 = (v7 >> 9) & 0x7FFFFFFFF8LL;
        *(_WORD *)(v15 + 32) = 1;
        v27 = *(_QWORD *)(v26 - 0x98000000000LL);
        if ( MiPteInShadowRange(v26 - 0x98000000000LL)
          && (unsigned int)MiPteHasShadow()
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v28 = (v7 >> 9) & 0xFFFFFFF8;
          v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v31 )
          {
            v32 = *((_QWORD *)&v31->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
            v28 = v27 | 0x20;
            if ( (v32 & 0x20) == 0 )
              v28 = v27;
            v27 = v28;
            if ( (v32 & 0x42) != 0 )
              v27 = v28 | 0x42;
          }
        }
        v47 = v27;
        if ( v18 && (unsigned int)MiPteHasShadow() && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v28 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v28 )
          {
            v33 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
            v28 = v27 | 0x20;
            if ( (v33 & 0x20) == 0 )
              v28 = v27;
            v27 = v28;
            if ( (v33 & 0x42) != 0 )
              v27 = v28 | 0x42;
          }
        }
        v34 = (v27 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v15 + 40) = v34 | *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v36 = 48 * v34 - 0x58000000000LL;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v38 = Queue >> 9;
        else
          LOBYTE(v38) = PsGetPagePriorityThread((__int64)CurrentThread);
        v42 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v42, v28, v29, v30);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        MiLockNestedPageAtDpcInline(v36, v28, v29, v30);
        *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( *(unsigned __int8 *)(v15 + 34) >> 6 != v43 )
          MiChangePageAttribute(v15, v43, 1);
        MiSetPfnTbFlushStamp(v15, 0, 1);
        v39 = *(_QWORD *)(v15 + 24);
        *(_BYTE *)(v15 + 35) ^= (*(_BYTE *)(v15 + 35) ^ v38) & 7;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v15 + 24) = v39 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 6;
        *(_BYTE *)(v15 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v40 = ValidPte;
        if ( v44 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
              v40 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v40;
            MiWritePteShadow(v7, v40, v41);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            v40 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v40;
LABEL_67:
        MiMarkKernelStack(v7, a4);
        v15 = v49;
        v7 += 8LL;
        v18 = v45;
        if ( v7 >= v50 )
        {
          if ( v17 )
            MiUnlockPageTableInternal(&unk_140C4F380);
          MiUnlockWorkingSetShared((__int64)&unk_140C4F380, v51);
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
      v24 = (_QWORD *)*v10;
      MiReleaseFreshPage((__int64)v10);
      v10 = v24;
    }
    while ( v24 );
  }
  return 0LL;
}
