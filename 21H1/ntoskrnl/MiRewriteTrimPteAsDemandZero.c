/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140350B54
 * Callers:
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int16 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // r9
  int v12; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // ebp
  unsigned __int64 *v18; // rdi
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DE80 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DE80;
    v7 = MiTransferSoftwarePte(a2[2], v9, HIDWORD(v2), 2LL);
  }
  else
  {
    v25 = a2[2];
    MiSetNonResidentPteHeat(&v25, 0);
    v7 = v25;
    if ( (v8 & 0x400) == 0 )
    {
      v7 = v25 & 0xFFFFFFFFFFFFFFF9uLL;
      v25 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v10 = a2[1] | 0x8000000000000000uLL;
  if ( !(unsigned int)MI_PFN_IS_PROTO(a2, v5, v6) )
  {
    v12 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(v10);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v12 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v14 = (v7 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v14 = (v7 & 1) == 0;
LABEL_15:
          if ( !v14 )
            v7 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v10 = v7;
    if ( v12 )
      LOBYTE(CurrentThread) = MiWritePteShadow(v10, v7);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      LOBYTE(CurrentThread) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return (char)CurrentThread;
  }
  v15 = a2[5] & 0xFFFFFFFFFLL;
  v16 = 48 * v15 - 0x58000000000LL;
  v17 = 0;
  v18 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000LL, v11) + 8 * ((v10 >> 3) & 0x1FF));
  if ( MiPteInShadowRange((unsigned __int64)v18) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v20 = (v7 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v20 = (v7 & 1) == 0;
LABEL_27:
      if ( !v20 )
        v7 |= 0x8000000000000000uLL;
    }
  }
  *v18 = v7;
  if ( v17 )
    MiWritePteShadow((__int64)v18, v7);
  LOBYTE(v19) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, v19, 0x80000000);
  MiLockNestedPageAtDpcInline(v16, v21, v22, v23);
  MiDecrementShareCount(v16);
  LOBYTE(CurrentThread) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (char)CurrentThread;
}
