/*
 * XREFs of MiMapSinglePage @ 0x14026C124
 * Callers:
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x1405BB84C (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v13; // r15d
  bool v14; // zf
  unsigned __int64 v15; // rbx
  int v16; // r15d
  bool v17; // zf

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE(v9) )
      goto LABEL_4;
    v15 = ZeroPte;
    v16 = 0;
    if ( (unsigned int)MiPteInShadowRange(v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v17 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v17 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v17 )
          v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v9 = v15;
    if ( v16 )
      MiWritePteShadow((__int64)v9, v15);
    KeFlushSingleTb(v7, 0LL, 1LL);
    goto LABEL_4;
  }
  result = MiReservePtes(&qword_140C534C0, 1LL);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = result << 25 >> 16;
  if ( (a4 & 2) != 0 )
  {
    ValidPte = ZeroPte;
    goto LABEL_7;
  }
LABEL_4:
  v10 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
  if ( (a3 & 0x40000000) != 0 )
    v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, 48 * a2 - 0x220000000000LL);
  ValidPte = MiMakeValidPte(v9, a2, ProtectionPfnCompatible | 0xA0000000);
LABEL_7:
  v13 = 0;
  if ( (unsigned int)MiPteInShadowRange(v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
      v14 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v14 = (ValidPte & 1) == 0;
    }
    if ( !v14 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = ValidPte;
  if ( v13 )
    MiWritePteShadow((__int64)v9, ValidPte);
  return v7;
}
