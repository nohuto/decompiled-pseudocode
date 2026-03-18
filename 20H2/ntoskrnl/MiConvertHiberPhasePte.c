/*
 * XREFs of MiConvertHiberPhasePte @ 0x140997FE0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIsPfn @ 0x14021F200 (MiIsPfn.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // rbx
  int v4; // r9d
  __int64 v7; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a2;
  v4 = a3;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  v7 = *(_QWORD *)(a1 + 168);
  v14 = PteShadow;
  if ( v7 )
  {
    if ( (PteShadow & 1) != 0 && !v4 )
    {
      v9 = PteShadow;
      if ( MiPteInShadowRange((unsigned __int64)&v14) )
        v9 = MiReadPteShadow((unsigned __int64)&v14, PteShadow);
      v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
      if ( (unsigned int)MiIsPfn(v10) )
      {
        if ( v10 != qword_140C4EC00
          && v10 != qword_140C4EBE8
          && !_bittest64(*(const signed __int64 **)(v7 + 8), (unsigned int)v10) )
        {
          v12 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          v14 = v12;
          if ( MiPteInShadowRange((unsigned __int64)a2) && (unsigned int)MiPteHasShadow() )
          {
LABEL_20:
            *a2 = v12;
            MiWritePteShadow((__int64)a2, v12, v11);
            return 0LL;
          }
LABEL_29:
          *a2 = v12;
        }
      }
    }
  }
  else if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
  {
    v12 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
    v14 = v12;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4DE88) )
          v12 |= 0x8000000000000000uLL;
        goto LABEL_20;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v12 |= 0x8000000000000000uLL;
    }
    goto LABEL_29;
  }
  return 0LL;
}
