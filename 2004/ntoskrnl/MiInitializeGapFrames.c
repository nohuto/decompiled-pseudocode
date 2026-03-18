/*
 * XREFs of MiInitializeGapFrames @ 0x140A6225C
 * Callers:
 *     MiInitNucleus @ 0x140A3D174 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x140A6220C (MiFillPfnGaps.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // ebp
  __int64 v6; // r14
  _QWORD *v7; // r12
  unsigned int v8; // esi
  __int64 *v9; // r15
  __int64 Page; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 ValidPte; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int64 v19; // r8
  __int64 v20; // rdi

  v4 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v6 = qword_140C4EB68;
  }
  else
  {
    v6 = qword_140C4EB80;
  }
  v7 = (_QWORD *)MiReservePtes((__int64)&qword_140C4ED40, 3u, a3, a4);
  if ( v7 && (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
  {
    v8 = 0;
    v9 = a2;
    while ( !v8 )
    {
LABEL_23:
      *v9 = v6;
      ++v8;
      ++v9;
      if ( v8 >= 4 )
      {
        MiReleasePtes((__int64)&qword_140C4ED40, v7, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)&MiSystemPartition, v8, 520LL);
    v6 = Page;
    if ( Page == -1 )
      return 0LL;
    v12 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)(v12 + 40) &= ~0x8000000000000000uLL;
    v13 = *(_QWORD *)(v12 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v12 + 32) = 1;
    *(_QWORD *)(v12 + 24) = v13 | 1;
    v14 = (__int64)&v7[v8 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v7[v8], v6, 2684354564LL, v11);
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v4 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v18 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v18 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = ValidPte;
    if ( v4 )
      MiWritePteShadow(v14, ValidPte, v16);
    v19 = 536870913LL;
    v4 = 0;
    v20 = v14 << 25 >> 16;
    if ( v8 != 1 )
    {
      v19 = 2818572292LL;
      v14 = 0LL;
    }
    memset64((void *)v20, MiMakeValidPte(v14, a2[v8 - 1], v19, v17), 0x200uLL);
    goto LABEL_23;
  }
  return 0LL;
}
