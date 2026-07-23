/*
 * XREFs of MxMapVa @ 0x140A45B6C
 * Callers:
 *     MxMapPfnRange @ 0x140A458EC (MxMapPfnRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x1402977C0 (MiFillPhysicalPages.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     MxGetNextPage @ 0x140A45EE4 (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  int i; // edi
  unsigned __int64 v5; // rsi
  __int64 NextPage; // rdx
  unsigned __int64 ValidPte; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  int v14; // ebp
  unsigned __int64 v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v15, 0, sizeof(v15));
  v3 = qword_140C528D0 > 0x20000;
  MiFillPteHierarchy(v2, v15);
  for ( i = 3; ; --i )
  {
    v5 = v15[i];
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
      qword_140C4F018 += 512LL;
      ValidPte = MiMakeValidPte(v5, NextPage, -1275068412);
      v9 = 0;
      if ( !MiPteInShadowRange(v5) )
        goto LABEL_13;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v9 = 1;
        if ( !HIBYTE(word_140C4E048) )
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
      if ( v9 )
        MiWritePteShadow(v5, ValidPte);
      v10 = *(_DWORD *)(a1 + 12);
      if ( !v10 )
      {
        if ( v5 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v5 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_18;
        }
        v10 = 1;
      }
      if ( v10 == 1 )
        KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_18:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v12 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v12 != -1 )
  {
    ++qword_140C4F018;
    if ( i || *(_DWORD *)(a1 + 12) == 1 )
      MiFillPhysicalPages(v12, v11, 0LL);
    v13 = MiMakeValidPte(v5, v12, i != 0 ? -1744830460 : -1342177276);
    v14 = 0;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
LABEL_35:
        if ( (v13 & 1) != 0 )
          v13 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_35;
    }
LABEL_26:
    *(_QWORD *)v5 = v13;
    if ( v14 )
      MiWritePteShadow(v5, v13);
    goto LABEL_5;
  }
  return 0LL;
}
