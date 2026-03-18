/*
 * XREFs of MiInitializeGapFrames @ 0x140AF6B44
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x140AF6A74 (MiFillPfnGaps.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // esi
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 ValidPte; // rdi
  BOOL v13; // eax
  __int64 v14; // r11
  bool v15; // zf
  __int64 v16; // rdi
  int v17; // r8d
  unsigned __int64 v18; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C53278;
  }
  else
  {
    v4 = qword_140C53290;
  }
  v5 = (_QWORD *)MiReservePtes((__int64)&qword_140C534C0, 3u);
  if ( v5 && (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, 3LL, 0LL, 2u) >= 0 )
  {
    v6 = 0;
    v7 = a2;
    while ( !v6 )
    {
LABEL_26:
      *v7 = v4;
      ++v6;
      ++v7;
      if ( v6 >= 4 )
      {
        MiReleasePtes((__int64)&qword_140C534C0, v5, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)&MiSystemPartition, v6, 0x208u);
    v4 = Page;
    if ( Page == -1 )
      return 0LL;
    v9 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    v10 = *(_QWORD *)(v9 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 24) = v10 | 1;
    v11 = (__int64)&v5[v6 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v5[v6], v4, -1610612732);
    v13 = MiPteInShadowRange(v11);
    v14 = 0LL;
    if ( v13 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = v14 + 1;
        if ( HIBYTE(word_140C51864) == (_BYTE)v14 )
        {
          v15 = ((unsigned __int8)ValidPte & (unsigned __int8)v2) == 0;
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
    *(_QWORD *)v11 = ValidPte;
    if ( v2 )
      MiWritePteShadow(v11, ValidPte);
    v16 = v11 << 25 >> 16;
    v17 = 536870913;
    if ( v6 != 1 )
    {
      v11 = v14;
      v17 = -1476395004;
    }
    v18 = MiMakeValidPte(v11, a2[v6 - 1], v17);
    if ( (MiFlags & 0x4000000) == 0 && ((unsigned __int8)(1 << (v6 - 1)) & (unsigned __int8)byte_140C506CE) != 0 )
      v18 &= ~0x20uLL;
    v2 = 0;
    memset64((void *)v16, v18, 0x200uLL);
    goto LABEL_26;
  }
  return 0LL;
}
