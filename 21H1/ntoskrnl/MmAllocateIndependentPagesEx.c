/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x14074B21C
 * Callers:
 *     MmAllocateIndependentPages @ 0x14074B200 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x140781D84 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14078217C (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407829FC (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x14088A6F4 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140892CB4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408930D4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1408936C4 (IopLiveDumpAllocateIptBuffers.c)
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiGetNextPageColor @ 0x140280344 (MiGetNextPageColor.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReturnPoolCharges @ 0x1402D4E10 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MiObtainPoolCharges @ 0x1403288B8 (MiObtainPoolCharges.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rax
  int v10; // edx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // r11d
  unsigned int NextPageColor; // r15d
  __int64 SlabPage; // rcx
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v20; // r11
  unsigned int v22; // edx
  _QWORD *v23; // rcx
  int HasShadow; // eax
  __int64 v25; // [rsp+30h] [rbp-88h]
  __int64 v26; // [rsp+38h] [rbp-80h]
  __int128 v27; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v28[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+70h] [rbp-48h]
  BOOL v30; // [rsp+C0h] [rbp+8h]

  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v7, v6);
    return 0LL;
  }
  v30 = a3 && (dword_140C50C84 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v26 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, 2684354564LL, v8);
  v10 = 0;
  v11 = ValidPte;
  if ( a2 != -1 )
    v10 = a2 + 1;
  MiInitializePageColorBase(0LL, v10, (__int64)&v27);
  v12 = 0LL;
  v25 = 0LL;
  do
  {
    v13 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v27);
    if ( v30 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v22 = 0;
        if ( !a4 )
          goto LABEL_9;
        v23 = a3;
        while ( v14 != *v23 >> 12 )
        {
          v22 += v15;
          ++v23;
          if ( v22 >= a4 )
            goto LABEL_9;
        }
      }
      v13 = v15;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v13 )
      {
        SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, v15, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 8LL);
      if ( SlabPage != -1 )
        goto LABEL_11;
      MiWaitForFreePage(&MiSystemPartition);
      v15 = 1;
    }
    ++v12;
LABEL_11:
    v11 ^= (v11 ^ (SlabPage << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * SlabPage - 0x58000000000LL, (unsigned __int64 *)v7, 4u, 4);
    v18 = v11;
    v19 = 0;
    if ( !MiPteInShadowRange(v7) )
    {
      v20 = 1LL;
      goto LABEL_13;
    }
    HasShadow = MiPteHasShadow();
    v20 = 1LL;
    if ( HasShadow )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v11 & 1) != 0 )
      v18 = v11 | 0x8000000000000000uLL;
LABEL_13:
    *(_QWORD *)v7 = v18;
    if ( v19 )
      MiWritePteShadow(v7, v18);
    v7 += 8LL;
    v25 += v20;
    v6 -= v20;
  }
  while ( v6 );
  if ( v12 )
  {
    v28[3] = v12;
    v28[0] = v12;
    *(_OWORD *)&v28[1] = 0LL;
    v29 = 0LL;
    MiReturnPoolCharges(v28, v20);
  }
  return v26;
}
