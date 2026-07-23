/*
 * XREFs of MiInitializeGapFrames @ 0x140A67B10
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x140A67AC0 (MiFillPfnGaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // ebp
  __int64 v6; // r14
  _QWORD *v7; // r12
  unsigned int v8; // esi
  __int64 *v9; // r15
  __int64 Page; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 ValidPte; // rdi
  bool v15; // zf
  int v16; // r8d
  __int64 v17; // rdi

  v4 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v6 = qword_140C4EDA8;
  }
  else
  {
    v6 = qword_140C4EDC0;
  }
  v7 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF80, 3u, a3, a4);
  if ( v7 && (int)MiAcquireNonPagedResources(&MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
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
        MiReleasePtes((__int64)&qword_140C4EF80, v7, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)&MiSystemPartition, v8, 520LL);
    v6 = Page;
    if ( Page == -1 )
      return 0LL;
    v11 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)(v11 + 40) &= ~0x8000000000000000uLL;
    v12 = *(_QWORD *)(v11 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v11 + 32) = 1;
    *(_QWORD *)(v11 + 24) = v12 | 1;
    v13 = (__int64)&v7[v8 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v7[v8], v6, -1610612732);
    if ( MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v4 = 1;
        if ( !HIBYTE(word_140C4E048) )
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
    *(_QWORD *)v13 = ValidPte;
    if ( v4 )
      MiWritePteShadow(v13, ValidPte);
    v16 = 536870913;
    v4 = 0;
    v17 = v13 << 25 >> 16;
    if ( v8 != 1 )
    {
      v16 = -1476395004;
      v13 = 0LL;
    }
    memset64((void *)v17, MiMakeValidPte(v13, a2[v8 - 1], v16), 0x200uLL);
    goto LABEL_23;
  }
  return 0LL;
}
