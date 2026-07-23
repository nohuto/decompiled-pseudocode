/*
 * XREFs of MiConvertHiberPhasePte @ 0x1409967D0
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // rbx
  int v4; // r9d
  __int64 v7; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a2;
  v4 = a3;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  v7 = *(_QWORD *)(a1 + 168);
  v13 = PteShadow;
  if ( v7 )
  {
    if ( (PteShadow & 1) != 0 && !v4 )
    {
      v9 = PteShadow;
      if ( MiPteInShadowRange((unsigned __int64)&v13) )
        v9 = MiReadPteShadow((unsigned __int64)&v13, PteShadow);
      v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
      if ( (unsigned int)MiIsPfn(v10) )
      {
        if ( v10 != qword_140C4EDC0
          && v10 != qword_140C4EDA8
          && !_bittest64(*(const signed __int64 **)(v7 + 8), (unsigned int)v10) )
        {
          v11 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          v13 = v11;
          if ( MiPteInShadowRange((unsigned __int64)a2) && (unsigned int)MiPteHasShadow() )
          {
LABEL_20:
            *a2 = v11;
            MiWritePteShadow((__int64)a2, v11);
            return 0LL;
          }
LABEL_29:
          *a2 = v11;
        }
      }
    }
  }
  else if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
  {
    v11 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
    v13 = v11;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) )
          v11 |= 0x8000000000000000uLL;
        goto LABEL_20;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v11 |= 0x8000000000000000uLL;
    }
    goto LABEL_29;
  }
  return 0LL;
}
