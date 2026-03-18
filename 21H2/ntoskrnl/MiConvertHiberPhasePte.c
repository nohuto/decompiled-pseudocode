/*
 * XREFs of MiConvertHiberPhasePte @ 0x140A4FFC0
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14027D890 (MiReadPteShadow.c)
 *     MiIsPfn @ 0x1402B2E00 (MiIsPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // rbx
  BOOL v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a2;
  v7 = MiPteInShadowRange((unsigned __int64)a2);
  if ( v7 )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, PteShadow);
  v8 = *(_QWORD *)(a1 + 168);
  v13 = PteShadow;
  if ( v8 )
  {
    if ( (PteShadow & 1) != 0 && !a3 )
    {
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL;
      if ( (unsigned int)MiIsPfn(v9) )
      {
        if ( v9 != qword_140C53278
          && v9 != qword_140C53290
          && !_bittest64(*(const signed __int64 **)(v8 + 8), (unsigned int)v9) )
        {
          v10 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          v13 = v10;
          if ( v7 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
LABEL_19:
              *a2 = v10;
              MiWritePteShadow((__int64)a2, v10);
              return 0LL;
            }
          }
LABEL_17:
          *a2 = v10;
        }
      }
    }
  }
  else if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
  {
    v10 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
    v13 = v10;
    if ( v7 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) )
          v10 |= 0x8000000000000000uLL;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        v10 |= 0x8000000000000000uLL;
    }
    goto LABEL_17;
  }
  return 0LL;
}
