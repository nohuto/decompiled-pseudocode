/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x14033F8E0
 * Callers:
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 */

char __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  __int64 v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r14
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = a2[5];
    v15 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v7 >> 43) & 0x3FF))
                    + 8LL * ((unsigned __int16)v2 >> 12)
                    + 16736);
    if ( qword_140C50780 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C50780;
    v5 = MiTransferSoftwarePte(a2[2], v15, HIDWORD(v2), 2LL);
  }
  else
  {
    v17 = a2[2];
    MiSetNonResidentPteHeat(&v17, 0);
    v5 = v17;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v17 & 0xFFFFFFFFFFFFFFF9uLL;
      v17 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
    v7 = a2[5];
  }
  v8 = (_QWORD *)(a2[1] | 0x8000000000000000uLL);
  if ( v7 < 0 )
  {
    v10 = v7 & 0xFFFFFFFFFFLL;
    v11 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000)
                             + 8 * (((unsigned __int64)(unsigned int)v8 >> 3) & 0x1FF));
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (v5 & 1) != 0 )
          v5 |= 0x8000000000000000uLL;
        *v11 = v5;
        MiWritePteShadow((__int64)v11, v5);
        goto LABEL_13;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
        v5 |= 0x8000000000000000uLL;
    }
    *v11 = v5;
LABEL_13:
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v11, 0x11u);
    MiLockNestedPageAtDpcInline(48 * v10 - 0x220000000000LL);
    MiDecrementShareCount(48 * v10 - 0x220000000000LL, v12, v13, v14);
    LOBYTE(CurrentThread) = -1;
    _InterlockedAnd64((volatile signed __int64 *)(48 * v10 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (char)CurrentThread;
  }
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v8);
  if ( (_DWORD)CurrentThread )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C51864) && (v5 & 1) != 0 )
        v5 |= 0x8000000000000000uLL;
      *v8 = v5;
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v8, v5);
      goto LABEL_8;
    }
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
      v5 |= 0x8000000000000000uLL;
  }
  *v8 = v5;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    LOBYTE(CurrentThread) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
  return (char)CurrentThread;
}
