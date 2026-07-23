/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140257E48
 * Callers:
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // ebp
  unsigned __int64 *v15; // rdi
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DF80 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DF80;
    v5 = MiTransferSoftwarePte(a2[2], v7, HIDWORD(v2), 2LL);
  }
  else
  {
    v19 = a2[2];
    MiSetNonResidentPteHeat(&v19, 0LL);
    v5 = v19;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v19 & 0xFFFFFFFFFFFFFFF9uLL;
      v19 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v9 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(v8);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v9 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v11 = (v5 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v11 = (v5 & 1) == 0;
LABEL_15:
          if ( !v11 )
            v5 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v8 = v5;
    if ( v9 )
      LOBYTE(CurrentThread) = MiWritePteShadow(v8, v5);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      LOBYTE(CurrentThread) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return (char)CurrentThread;
  }
  v12 = a2[5] & 0xFFFFFFFFFLL;
  v13 = 48 * v12 - 0x58000000000LL;
  v14 = 0;
  v15 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL) + 8 * ((v8 >> 3) & 0x1FF));
  if ( (unsigned int)MiPteInShadowRange(v15) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v17 = (v5 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v17 = (v5 & 1) == 0;
LABEL_27:
      if ( !v17 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *v15 = v5;
  if ( v14 )
    MiWritePteShadow((__int64)v15, v5);
  LOBYTE(v16) = 17;
  MiUnmapPageInHyperSpaceWorker(v15, v16, 0x80000000LL);
  MiLockNestedPageAtDpcInline(v13);
  MiDecrementShareCount(v13);
  LOBYTE(CurrentThread) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (char)CurrentThread;
}
