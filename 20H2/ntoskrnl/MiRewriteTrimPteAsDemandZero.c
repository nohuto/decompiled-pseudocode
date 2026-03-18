/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140346EE4
 * Callers:
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // ebp
  unsigned __int64 *v16; // rdi
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DDC0 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DDC0;
    v5 = MiTransferSoftwarePte(a2[2], v7, HIDWORD(v2), 2LL);
  }
  else
  {
    v23 = a2[2];
    MiSetNonResidentPteHeat(&v23, 0LL);
    v5 = v23;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v23 & 0xFFFFFFFFFFFFFFF9uLL;
      v23 &= 0xFFFFFFFFFFFFFFF9uLL;
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
        if ( !HIBYTE(word_140C4DE88) )
        {
          v12 = (v5 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v12 = (v5 & 1) == 0;
LABEL_15:
          if ( !v12 )
            v5 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v8 = v5;
    if ( v9 )
      LOBYTE(CurrentThread) = MiWritePteShadow(v8, v5, v11);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      LOBYTE(CurrentThread) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return (char)CurrentThread;
  }
  v13 = a2[5] & 0xFFFFFFFFFLL;
  v14 = 48 * v13 - 0x58000000000LL;
  v15 = 0;
  v16 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000LL) + 8 * ((v8 >> 3) & 0x1FF));
  if ( MiPteInShadowRange((unsigned __int64)v16) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C4DE88) )
      {
        v18 = (v5 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v18 = (v5 & 1) == 0;
LABEL_27:
      if ( !v18 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *v16 = v5;
  if ( v15 )
    MiWritePteShadow((__int64)v16, v5, v17);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, 0x11u, 0x80000000);
  MiLockNestedPageAtDpcInline(v14, v19, v20, v21);
  MiDecrementShareCount(v14);
  LOBYTE(CurrentThread) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (char)CurrentThread;
}
