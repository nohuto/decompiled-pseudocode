/*
 * XREFs of MiScrubAwePage @ 0x1405AC670
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAwePage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  _KPROCESS *Process; // r13
  __int64 v8; // r13
  unsigned __int8 v9; // al
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // edi
  __int64 v16; // rbx
  int v17; // ebp
  bool v18; // zf
  unsigned __int8 v19; // [rsp+68h] [rbp+10h]

  v4 = 48 * a2 - 0x220000000000LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return MiScrubPage(a1, 48 * a2 - 0x220000000000LL, 0LL, 1LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*(_DWORD *)(a3 + 8) & 1) == 0 )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiScrubPage(a1, 48 * a2 - 0x220000000000LL, 0LL, 1LL);
  v8 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v9 = MiLockWorkingSetShared(v8);
  v19 = v9;
  if ( *(_WORD *)(v4 + 32) != 2 )
  {
    v15 = 0;
    goto LABEL_33;
  }
  MiLockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, v10);
  v11 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v11 & 1) != 0 )
  {
    v12 = ZeroPte;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( !HIBYTE(word_140C51864) )
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
    *(_QWORD *)v5 = v12;
    if ( v13 )
      MiWritePteShadow(v5, v12);
    KeFlushSingleTb((__int64)(v5 << 25) >> 16, 1u, 0);
  }
  v15 = MiScrubPage(a1, v4, 0LL, 1LL);
  if ( (v11 & 1) != 0 )
  {
    v16 = v11 | 0x20;
    v17 = 0;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C51864) )
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
    *(_QWORD *)v5 = v16;
    if ( v17 )
      MiWritePteShadow(v5, v16);
  }
  MiUnlockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v19;
LABEL_33:
  MiUnlockWorkingSetShared(v8, v9);
  return v15;
}
