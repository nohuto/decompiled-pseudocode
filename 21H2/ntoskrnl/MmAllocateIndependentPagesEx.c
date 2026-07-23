/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140762BCC
 * Callers:
 *     MmAllocateIndependentPages @ 0x140762BB0 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14079FB38 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14079FF30 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x1407A07B0 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x14088EC64 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408973B4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1408977D4 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x140897DC4 (IopLiveDumpAllocateIptBuffers.c)
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReturnPoolCharges @ 0x140273E90 (MiReturnPoolCharges.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiObtainPoolCharges @ 0x140296F74 (MiObtainPoolCharges.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
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
  __int64 v19; // r11
  unsigned int v21; // edx
  _QWORD *v22; // rcx
  int HasShadow; // eax
  __int64 v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int128 v26; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v27[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v28; // [rsp+70h] [rbp-48h]
  BOOL v29; // [rsp+C0h] [rbp+8h]
  unsigned int v30; // [rsp+D8h] [rbp+20h]

  v30 = a4;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v26 = 0LL;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C4EF80, v6, a3, a4);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v7, v6);
    return 0LL;
  }
  v29 = a3 && (dword_140C50DC4 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v25 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v9 = 0;
  v10 = ValidPte;
  if ( a2 != -1 )
    v9 = a2 + 1;
  MiInitializePageColorBase(0LL, v9, (__int64)&v26);
  v11 = 0LL;
  v24 = 0LL;
  do
  {
    v12 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v26);
    if ( v29 )
    {
      if ( a3 != -1 )
      {
        v21 = 0;
        if ( !v30 )
          goto LABEL_9;
        v22 = (_QWORD *)a3;
        while ( v13 != *v22 >> 12 )
        {
          v21 += v14;
          ++v22;
          if ( v21 >= v30 )
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
      v19 = 1LL;
      goto LABEL_13;
    }
    HasShadow = MiPteHasShadow();
    v19 = 1LL;
    if ( HasShadow )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4E048) )
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
      MiWritePteShadow(v7, v17);
    v7 += 8LL;
    v24 += v19;
    v6 -= v19;
  }
  while ( v6 );
  if ( v11 )
  {
    v27[3] = v11;
    v27[0] = v11;
    *(_OWORD *)&v27[1] = 0LL;
    v28 = 0LL;
    MiReturnPoolCharges(v27, v19);
  }
  return v25;
}
