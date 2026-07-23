/*
 * XREFs of MiScrubPage @ 0x140564534
 * Callers:
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x140590798 (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v9; // rdi
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // r15d
  unsigned __int64 v15; // rbx
  int v16; // esi

  if ( a3 )
  {
    UltraMapping = a3;
    v9 = 0LL;
    goto LABEL_12;
  }
  UltraMapping = MiGetUltraMapping(a1 + 18, 3u, 1LL, 0);
  v9 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  ValidPte = MiMakeValidPte((unsigned __int64)v9, (a2 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000);
  v12 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( !HIBYTE(word_140C4E048) )
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
  if ( v12 )
    MiWritePteShadow((__int64)v9, ValidPte);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v13 = a1[25];
    KeCopyPage(v13, UltraMapping);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v13 )
    KeCopyPage(UltraMapping, v13);
  if ( !a3 )
  {
    v15 = ZeroPte;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
LABEL_23:
          if ( (ZeroPte & 1) != 0 )
            v15 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_23;
      }
    }
    *v9 = v15;
    if ( v16 )
      MiWritePteShadow((__int64)v9, v15);
  }
  ++a1[26];
  return v14;
}
