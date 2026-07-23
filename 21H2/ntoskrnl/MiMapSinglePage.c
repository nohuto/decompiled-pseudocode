/*
 * XREFs of MiMapSinglePage @ 0x14036B2B4
 * Callers:
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x14055B44C (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x14055B9E0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // bl
  int v5; // r12d
  unsigned __int64 v7; // rsi
  ULONG_PTR result; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  char v11; // cl
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v14; // r15d
  bool v15; // zf
  unsigned __int64 v16; // rbx
  int v17; // r15d
  bool v18; // zf

  v4 = a4;
  v5 = a3;
  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) )
      goto LABEL_4;
    v16 = ZeroPte;
    v17 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v18 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v18 )
          v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v9 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v9, v16);
    KeFlushSingleTb(v7, 0, 1u);
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&qword_140C4EF80, 1u, a3, a4);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (v4 & 2) != 0 )
  {
    ValidPte = ZeroPte;
    goto LABEL_7;
  }
LABEL_4:
  v10 = ((v5 >> 31) & 0xFFFFFFFD) + 4;
  v11 = v10 | 2;
  if ( (v5 & 0x40000000) != 0 )
    v11 = v10;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v11, 48 * a2 - 0x58000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000);
LABEL_7:
  v14 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_8;
      v15 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v15 = (ValidPte & 1) == 0;
    }
    if ( !v15 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = ValidPte;
  if ( v14 )
    MiWritePteShadow((__int64)v9, ValidPte);
  return v7;
}
