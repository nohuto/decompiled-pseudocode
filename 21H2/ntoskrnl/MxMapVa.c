/*
 * XREFs of MxMapVa @ 0x140AF61F4
 * Callers:
 *     MxMapPfnRange @ 0x140AF5F74 (MxMapPfnRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x140235AAC (MiFillPhysicalPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     MxGetNextPage @ 0x140AF65CC (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  int i; // esi
  unsigned __int64 v5; // rdi
  __int64 NextPage; // rdx
  unsigned __int64 ValidPte; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  int v13; // ebp
  unsigned __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v14, 0, 32);
  v3 = qword_140C590D0 > 0x20000;
  MiFillPteHierarchy(v2, v14);
  for ( i = 3; ; --i )
  {
    v5 = v14[i];
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
  if ( i == 1 )
  {
    if ( v3 )
    {
      NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
      if ( NextPage != -1 )
      {
        qword_140C53558 += 512LL;
        ValidPte = MiMakeValidPte(v5, NextPage, -1275068412);
        v9 = 0;
        if ( !MiPteInShadowRange(v5) )
        {
LABEL_13:
          *(_QWORD *)v5 = ValidPte;
          if ( v9 )
            MiWritePteShadow(v5, ValidPte);
          if ( *(_DWORD *)(a1 + 12)
            || v5 == ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
            || v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          {
            KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
          }
          *(_DWORD *)(a1 + 32) = 1;
          return 1LL;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v9 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_13;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_13;
        }
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
        goto LABEL_13;
      }
    }
  }
  v11 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v11 != -1 )
  {
    ++qword_140C53558;
    if ( i || *(_DWORD *)(a1 + 12) )
      MiFillPhysicalPages(v11, v10, 0LL);
    v12 = MiMakeValidPte(v5, v11, i != 0 ? -1744830460 : -1342177276);
    v13 = 0;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_33:
        if ( (v12 & 1) != 0 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_33;
    }
LABEL_24:
    *(_QWORD *)v5 = v12;
    if ( v13 )
      MiWritePteShadow(v5, v12);
    goto LABEL_5;
  }
  return 0LL;
}
