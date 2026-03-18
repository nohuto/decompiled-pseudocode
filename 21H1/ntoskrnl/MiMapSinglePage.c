/*
 * XREFs of MiMapSinglePage @ 0x1403684B4
 * Callers:
 *     MiFillCombinePage @ 0x1403683BC (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x14055571C (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v7; // rsi
  ULONG_PTR result; // rax
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  char v11; // cl
  int ProtectionPfnCompatible; // eax
  __int64 v13; // r9
  unsigned __int64 ValidPte; // rbx
  int v15; // r15d
  bool v16; // zf
  unsigned __int64 v17; // rbx
  int v18; // r15d
  bool v19; // zf

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) )
      goto LABEL_4;
    v17 = ZeroPte;
    v18 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v19 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v19 )
          v17 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v9 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v9, v17);
    KeFlushSingleTb(v7, 0, 1u);
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) != 0 )
  {
    ValidPte = ZeroPte;
    goto LABEL_7;
  }
LABEL_4:
  v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
  v11 = v10 | 2;
  if ( (a3 & 0x40000000) != 0 )
    v11 = v10;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v11, 48 * a2 - 0x58000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000, v13);
LABEL_7:
  v15 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_8;
      v16 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v16 = (ValidPte & 1) == 0;
    }
    if ( !v16 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = ValidPte;
  if ( v15 )
    MiWritePteShadow((__int64)v9, ValidPte);
  return v7;
}
