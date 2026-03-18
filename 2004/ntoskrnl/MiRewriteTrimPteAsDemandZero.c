/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x1402F4B78
 * Callers:
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // esi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // ebp
  unsigned __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  unsigned __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DD40 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DD40;
    v5 = MiTransferSoftwarePte(a2[2], v7, HIDWORD(v2), 2LL);
  }
  else
  {
    v25 = a2[2];
    MiSetNonResidentPteHeat(&v25, 0);
    v5 = v25;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v25 & 0xFFFFFFFFFFFFFFF9uLL;
      v25 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v9 = 0;
    result = MiPteInShadowRange(v8);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v12, v11, v13, v14);
      if ( (_DWORD)result )
      {
        v9 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v15 = (v5 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 )
        {
          v15 = (v5 & 1) == 0;
LABEL_15:
          if ( !v15 )
            v5 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v8 = v5;
    if ( v9 )
      result = MiWritePteShadow(v8, v5);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return result;
  }
  v16 = a2[5] & 0xFFFFFFFFFLL;
  v17 = 48 * v16 - 0x58000000000LL;
  v18 = 0;
  v19 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000LL) + 8 * ((v8 >> 3) & 0x1FF));
  if ( MiPteInShadowRange((unsigned __int64)v19) )
  {
    if ( (unsigned int)MiPteHasShadow(v21, v20, v22, v23) )
    {
      v18 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v24 = (v5 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v24 = (v5 & 1) == 0;
LABEL_27:
      if ( !v24 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *v19 = v5;
  if ( v18 )
    MiWritePteShadow(v19, v5);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000);
  MiLockNestedPageAtDpcInline(v17);
  MiDecrementShareCount(v17);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
