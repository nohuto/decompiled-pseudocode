/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140269EA8
 * Callers:
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // esi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // ebp
  unsigned __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DF40;
    v5 = MiTransferSoftwarePte(a2[2], v7, HIDWORD(v2), 2LL);
  }
  else
  {
    v28 = a2[2];
    MiSetNonResidentPteHeat(&v28, 0);
    v5 = v28;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v28 & 0xFFFFFFFFFFFFFFF9uLL;
      v28 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v11 = 0;
    result = MiPteInShadowRange(v8, v9);
    if ( (_DWORD)result )
    {
      result = MiPteHasShadow(v14, v13, v15, v16);
      if ( (_DWORD)result )
      {
        v11 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v17 = (v5 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        result = (__int64)KeGetCurrentThread();
        if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) != 0 )
        {
          v17 = (v5 & 1) == 0;
LABEL_15:
          if ( !v17 )
            v5 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v8 = v5;
    if ( v11 )
      result = MiWritePteShadow(v8, v5);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return result;
  }
  v18 = a2[5] & 0xFFFFFFFFFLL;
  v19 = 48 * v18 - 0x58000000000LL;
  v20 = 0;
  v21 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v18, 0LL, 0x80000000LL, v10) + 8 * ((v8 >> 3) & 0x1FF));
  if ( (unsigned int)MiPteInShadowRange(v21, v22) )
  {
    if ( (unsigned int)MiPteHasShadow(v24, v23, v25, v26) )
    {
      v20 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v27 = (v5 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v27 = (v5 & 1) == 0;
LABEL_27:
      if ( !v27 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *v21 = v5;
  if ( v20 )
    MiWritePteShadow(v21, v5);
  LOBYTE(v23) = 17;
  MiUnmapPageInHyperSpaceWorker(v21, v23, 0x80000000LL);
  MiLockNestedPageAtDpcInline(v19);
  MiDecrementShareCount(v19);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
