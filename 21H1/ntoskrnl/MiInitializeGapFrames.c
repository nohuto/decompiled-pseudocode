/*
 * XREFs of MiInitializeGapFrames @ 0x140A5F0F0
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x140A5F0A0 (MiFillPfnGaps.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
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
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // rdi

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C4ECA8;
  }
  else
  {
    v4 = qword_140C4ECC0;
  }
  v5 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EE80, 3LL);
  if ( v5 && (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
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
        MiReleasePtes((__int64)&qword_140C4EE80, v5, 3u);
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
        if ( !HIBYTE(word_140C4DF48) )
        {
          v15 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v15 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v15 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v12 = ValidPte;
    if ( v2 )
      MiWritePteShadow(v12, ValidPte);
    v16 = 536870913LL;
    v2 = 0;
    v17 = v12 << 25 >> 16;
    if ( v6 != 1 )
    {
      v16 = 2818572292LL;
      v12 = 0LL;
    }
    memset64((void *)v17, MiMakeValidPte(v12, a2[v6 - 1], v16, v14), 0x200uLL);
    goto LABEL_23;
  }
  return 0LL;
}
