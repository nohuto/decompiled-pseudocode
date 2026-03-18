/*
 * XREFs of MiInitializeGapFrames @ 0x140A6961C
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x140A695CC (MiFillPfnGaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // esi
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 ValidPte; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // r8
  __int64 v18; // rdi

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C4EBE8;
  }
  else
  {
    v4 = qword_140C4EC00;
  }
  v5 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EDC0, 3u);
  if ( v5 && (int)MiAcquireNonPagedResources((unsigned __int64)&MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
  {
    v6 = 0;
    v7 = a2;
    while ( !v6 )
    {
LABEL_23:
      *v7 = v4;
      ++v6;
      ++v7;
      if ( v6 >= 4 )
      {
        MiReleasePtes((__int64)&qword_140C4EDC0, v5, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)&MiSystemPartition, v6, 520LL);
    v4 = Page;
    if ( Page == -1 )
      return 0LL;
    v10 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)(v10 + 40) &= ~0x8000000000000000uLL;
    v11 = *(_QWORD *)(v10 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v10 + 32) = 1;
    *(_QWORD *)(v10 + 24) = v11 | 1;
    v12 = (__int64)&v5[v6 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v5[v6], v4, 2684354564LL, v9);
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v16 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v16 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v16 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v12 = ValidPte;
    if ( v2 )
      MiWritePteShadow(v12, ValidPte, v14);
    v17 = 536870913LL;
    v2 = 0;
    v18 = v12 << 25 >> 16;
    if ( v6 != 1 )
    {
      v17 = 2818572292LL;
      v12 = 0LL;
    }
    memset64((void *)v18, MiMakeValidPte(v12, a2[v6 - 1], v17, v15), 0x200uLL);
    goto LABEL_23;
  }
  return 0LL;
}
