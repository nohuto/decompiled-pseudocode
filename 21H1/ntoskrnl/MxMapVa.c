/*
 * XREFs of MxMapVa @ 0x140A45B74
 * Callers:
 *     MxMapPfnRange @ 0x140A458F4 (MxMapPfnRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1403511A8 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     MxGetNextPage @ 0x140A45EEC (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  int i; // edi
  unsigned __int64 v5; // rsi
  __int64 NextPage; // rdx
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  int v16; // ebp
  unsigned __int64 v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v17, 0, sizeof(v17));
  v3 = qword_140C52790 > 0x20000;
  MiFillPteHierarchy(v2, v17);
  for ( i = 3; ; --i )
  {
    v5 = v17[i];
    if ( (*(_QWORD *)v5 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v5 & 0x80u) != 0LL )
    {
      *(_DWORD *)(a1 + 32) = i;
      return 1LL;
    }
LABEL_5:
    if ( !i )
      return 1LL;
  }
  if ( i == 1 && v3 )
  {
    NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
    if ( NextPage != -1 )
    {
      qword_140C4EF18 += 512LL;
      ValidPte = MiMakeValidPte(v5, NextPage, 3019898884LL, v8);
      v10 = 0;
      if ( !MiPteInShadowRange(v5) )
        goto LABEL_13;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C4DF48) )
          goto LABEL_41;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_41:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
LABEL_13:
      *(_QWORD *)v5 = ValidPte;
      if ( v10 )
        MiWritePteShadow(v5, ValidPte);
      v11 = *(_DWORD *)(a1 + 12);
      if ( !v11 )
      {
        if ( v5 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v5 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_18;
        }
        v11 = 1;
      }
      if ( v11 == 1 )
        KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_18:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v13 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v13 != -1 )
  {
    ++qword_140C4EF18;
    if ( i || *(_DWORD *)(a1 + 12) == 1 )
      MiFillPhysicalPages(v13, v12, 0LL, v14);
    v15 = MiMakeValidPte(v5, v13, i != 0 ? -1744830460 : -1342177276, v14);
    v16 = 0;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
LABEL_35:
        if ( (v15 & 1) != 0 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_35;
    }
LABEL_26:
    *(_QWORD *)v5 = v15;
    if ( v16 )
      MiWritePteShadow(v5, v15);
    goto LABEL_5;
  }
  return 0LL;
}
