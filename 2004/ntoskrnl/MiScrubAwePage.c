/*
 * XREFs of MiScrubAwePage @ 0x14054886C
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiScrubPage @ 0x14055EE54 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAwePage(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  _KPROCESS *Process; // r13
  __int64 v8; // r13
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // edi
  __int64 v16; // rbx
  int v17; // ebp
  __int64 v18; // r8
  bool v19; // zf
  unsigned __int8 v20; // [rsp+68h] [rbp+10h]

  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*a3 & 1) == 0 )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v9 = MiLockWorkingSetShared(v8);
  v20 = v9;
  if ( *(_WORD *)(v4 + 32) != 2 )
  {
    v15 = 0;
    goto LABEL_33;
  }
  MiLockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
  v10 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v10 & 1) != 0 )
  {
    v11 = ZeroPte;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v14 = (ZeroPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else
      {
        v13 = 0;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v14 = (ZeroPte & 1) == 0;
LABEL_12:
          if ( !v14 )
            v11 = ZeroPte | 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v13 = 0;
    }
    *(_QWORD *)v5 = v11;
    if ( v13 )
      MiWritePteShadow(v5, v11, v12);
    KeFlushSingleTb((__int64)(v5 << 25) >> 16, 1u, 0);
  }
  v15 = MiScrubPage(a1, v4, 0LL, 1LL);
  if ( (v10 & 1) != 0 )
  {
    v16 = v10 | 0x20;
    v17 = 0;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v19 = (v16 & 1) == 0;
          goto LABEL_27;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (v16 & 1) == 0;
LABEL_27:
        if ( !v19 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v16;
    if ( v17 )
      MiWritePteShadow(v5, v16, v18);
  }
  MiUnlockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v20;
LABEL_33:
  MiUnlockWorkingSetShared(v8, v9);
  return v15;
}
