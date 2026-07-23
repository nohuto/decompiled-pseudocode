/*
 * XREFs of MiScrubAwePage @ 0x14054DF7C
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAwePage(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // r13
  __int64 v9; // r13
  unsigned __int8 v10; // al
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // edi
  __int64 v16; // rbx
  int v17; // ebp
  bool v18; // zf
  unsigned __int8 v19; // [rsp+68h] [rbp+10h]

  v5 = 48 * a2 - 0x58000000000LL;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*a3 & 1) == 0 )
    return 0LL;
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  v9 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v10 = MiLockWorkingSetShared(v9, a2, (__int64)a3, a4);
  v19 = v10;
  if ( *(_WORD *)(v5 + 32) != 2 )
  {
    v15 = 0;
    goto LABEL_33;
  }
  MiLockPageTableInternal(v9, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
  v11 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v11 & 1) != 0 )
  {
    v12 = ZeroPte;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C4E048) )
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
            v12 = ZeroPte | 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v13 = 0;
    }
    *(_QWORD *)v6 = v12;
    if ( v13 )
      MiWritePteShadow(v6, v12);
    KeFlushSingleTb((__int64)(v6 << 25) >> 16, 1u, 0);
  }
  v15 = MiScrubPage(a1, v5, 0LL, 1LL);
  if ( (v11 & 1) != 0 )
  {
    v16 = v11 | 0x20;
    v17 = 0;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v18 = (v16 & 1) == 0;
          goto LABEL_27;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (v16 & 1) == 0;
LABEL_27:
        if ( !v18 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v16;
    if ( v17 )
      MiWritePteShadow(v6, v16);
  }
  MiUnlockPageTableInternal(v9, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = v19;
LABEL_33:
  MiUnlockWorkingSetShared(v9, v10);
  return v15;
}
