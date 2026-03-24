/*
 * XREFs of MiScrubAwePage @ 0x14054DD3C
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiScrubPage @ 0x1405642F4 (MiScrubPage.c)
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
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // edi
  __int64 v17; // rbx
  int v18; // ebp
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int8 v21; // [rsp+68h] [rbp+10h]

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
  v21 = v10;
  if ( *(_WORD *)(v5 + 32) != 2 )
  {
    v16 = 0;
    goto LABEL_33;
  }
  MiLockPageTableInternal(v9, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
  v11 = MI_READ_PTE_LOCK_FREE(v6);
  if ( (v11 & 1) != 0 )
  {
    v12 = ZeroPte;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v15 = (ZeroPte & 1) == 0;
          goto LABEL_12;
        }
      }
      else
      {
        v14 = 0;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v15 = (ZeroPte & 1) == 0;
LABEL_12:
          if ( !v15 )
            v12 = ZeroPte | 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      v14 = 0;
    }
    *(_QWORD *)v6 = v12;
    if ( v14 )
      MiWritePteShadow(v6, v12, v13);
    KeFlushSingleTb((__int64)(v6 << 25) >> 16, 1u, 0);
  }
  v16 = MiScrubPage(a1, v5, 0LL, 1LL);
  if ( (v11 & 1) != 0 )
  {
    v17 = v11 | 0x20;
    v18 = 0;
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v20 = (v17 & 1) == 0;
          goto LABEL_27;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v17 & 1) == 0;
LABEL_27:
        if ( !v20 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v6 = v17;
    if ( v18 )
      MiWritePteShadow(v6, v17, v19);
  }
  MiUnlockPageTableInternal(v9, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = v21;
LABEL_33:
  MiUnlockWorkingSetShared(v9, v10);
  return v16;
}
