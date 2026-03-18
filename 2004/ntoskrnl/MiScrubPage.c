/*
 * XREFs of MiScrubPage @ 0x14055EE54
 * Callers:
 *     MiScrubAwePage @ 0x14054886C (MiScrubAwePage.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14055EBAC (MiScrubNode.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeCopyPage @ 0x1403FB0A0 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x14058B128 (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v9; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v11; // r9
  unsigned __int64 ValidPte; // rbx
  int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rbx
  int v18; // esi
  __int64 v19; // r8

  if ( a3 )
  {
    UltraMapping = a3;
    v9 = 0LL;
    goto LABEL_12;
  }
  UltraMapping = MiGetUltraMapping(a1 + 18, 3u, 1LL, 0);
  v9 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  ValidPte = MiMakeValidPte(
               (unsigned __int64)v9,
               (a2 + 0x58000000000LL) / 48,
               ProtectionPfnCompatible | 0xA0000000,
               v11);
  v13 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
LABEL_8:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_8;
    }
  }
  *v9 = ValidPte;
  if ( v13 )
    MiWritePteShadow((__int64)v9, ValidPte, v14);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v15 = a1[25];
    KeCopyPage(v15, UltraMapping);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v15 )
    KeCopyPage(UltraMapping, v15);
  if ( !a3 )
  {
    v17 = ZeroPte;
    v18 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
LABEL_23:
          if ( (ZeroPte & 1) != 0 )
            v17 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_23;
      }
    }
    *v9 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v9, v17, v19);
  }
  ++a1[26];
  return v16;
}
