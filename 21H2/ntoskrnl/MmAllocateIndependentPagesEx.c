/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140762A0C
 * Callers:
 *     MmAllocateIndependentPages @ 0x1407629F0 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14079F938 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14079FD30 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407A05B0 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x14088EB04 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140897254 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x140897674 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140897C64 (IopLiveDumpAllocateIptBuffers.c)
 *     KiStartDynamicProcessor @ 0x1408BA678 (KiStartDynamicProcessor.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiReturnPoolCharges @ 0x140296DB0 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetNextPageColor @ 0x1402E5C08 (MiGetNextPageColor.c)
 *     MiObtainPoolCharges @ 0x1402E5C24 (MiObtainPoolCharges.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  unsigned __int64 ValidPte; // rax
  int v9; // edx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r11d
  unsigned int NextPageColor; // r15d
  __int64 SlabPage; // rcx
  unsigned __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // r8
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
  unsigned int v31; // [rsp+D8h] [rbp+20h]

  v31 = a4;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C4EF40, v6, a3, a4);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v7, v6);
    return 0LL;
  }
  v30 = a3 && (dword_140C50D84 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v26 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v9 = 0;
  v10 = ValidPte;
  if ( a2 != -1 )
    v9 = a2 + 1;
  MiInitializePageColorBase(0LL, v9, (__int64)&v27);
  v11 = 0LL;
  v25 = 0LL;
  do
  {
    v12 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v27);
    if ( v30 )
    {
      if ( a3 != -1 )
      {
        v22 = 0;
        if ( !v31 )
          goto LABEL_9;
        v23 = (_QWORD *)a3;
        while ( v13 != *v23 >> 12 )
        {
          v22 += v14;
          ++v23;
          if ( v22 >= v31 )
            goto LABEL_9;
        }
      }
      v12 = v14;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v12 )
      {
        SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, v14, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 8LL);
      if ( SlabPage != -1 )
        goto LABEL_11;
      MiWaitForFreePage(&MiSystemPartition);
      v14 = 1;
    }
    ++v11;
LABEL_11:
    v10 ^= (v10 ^ (SlabPage << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * SlabPage - 0x58000000000LL, (__int64 *)v7, 4u, 4);
    v17 = v10;
    v18 = 0;
    if ( !MiPteInShadowRange(v7) )
    {
      v20 = 1LL;
      goto LABEL_13;
    }
    HasShadow = MiPteHasShadow();
    v20 = 1LL;
    if ( HasShadow )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( (v10 & 1) != 0 )
      v17 = v10 | 0x8000000000000000uLL;
LABEL_13:
    *(_QWORD *)v7 = v17;
    if ( v18 )
      MiWritePteShadow(v7, v17, v19);
    v7 += 8LL;
    v25 += v20;
    v6 -= v20;
  }
  while ( v6 );
  if ( v11 )
  {
    v28[3] = v11;
    v28[0] = v11;
    *(_OWORD *)&v28[1] = 0LL;
    v29 = 0LL;
    MiReturnPoolCharges(v28, v20);
  }
  return v26;
}
