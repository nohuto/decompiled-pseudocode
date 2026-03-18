/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140829CBC
 * Callers:
 *     ExCreatePoolTagTable @ 0x140829A28 (ExCreatePoolTagTable.c)
 *     MmAllocateIndependentPages @ 0x140829AB0 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x140829ACC (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14082A2D4 (HvlInitializeProcessor.c)
 *     HvpAllocateNonPagedBin @ 0x140924648 (HvpAllocateNonPagedBin.c)
 *     HvlpPreallocatePageListResources @ 0x1409314BC (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14093B5F8 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14093BF5C (IopLiveDumpAllocateIptBuffers.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiObtainPoolCharges @ 0x14026A718 (MiObtainPoolCharges.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x14033C880 (MiInitializePfn.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  unsigned __int64 ValidPte; // rax
  int v9; // r10d
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // ebx
  __int64 v13; // r8
  int v14; // r10d
  unsigned int NextPageColor; // r15d
  __int64 SlabPage; // rcx
  unsigned __int64 v17; // rbx
  int v18; // r15d
  unsigned int v20; // edx
  _QWORD *v21; // rcx
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  __int128 v26; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v27[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp-40h]
  BOOL v30; // [rsp+D0h] [rbp+8h]

  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v7 = MiReservePtes((__int64)&qword_140C534C0, v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v7, v6);
    return 0LL;
  }
  v30 = a3 && (dword_140C54F84 & 8) != 0;
  v25 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v9 = 0;
  v10 = ValidPte;
  if ( a2 != -1 )
    v9 = a2 + 1;
  v23 = v9;
  MiInitializePageColorBase(0LL, v9, (__int64)&v26);
  v11 = 0LL;
  v24 = 0LL;
  do
  {
    v12 = 0;
    NextPageColor = MiGetNextPageColor((__int64)&v26);
    if ( v30 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v20 = 0;
        if ( !a4 )
          goto LABEL_9;
        v21 = a3;
        while ( v13 != *v21 >> 12 )
        {
          ++v20;
          ++v21;
          if ( v20 >= a4 )
            goto LABEL_9;
        }
      }
      v12 = 1;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v12 )
      {
        SlabPage = MiGetSlabPage(
                     (__int64)&MiSystemPartition,
                     1,
                     NextPageColor,
                     v14 == 0 ? 2 : 0,
                     (_QWORD *)0xFFFFFFFFFFFFFFFFLL,
                     0);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 8u);
      if ( SlabPage != -1 )
        goto LABEL_11;
      MiWaitForFreePage(&MiSystemPartition);
      v14 = v23;
    }
    ++v11;
LABEL_11:
    v10 ^= (v10 ^ (SlabPage << 12)) & 0xFFFFFFFFFF000LL;
    MiInitializePfn(48 * SlabPage - 0x220000000000LL, v7, 4u, 4);
    v17 = v10;
    v18 = 0;
    if ( MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_12;
        v22 = (v10 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_12;
        v22 = (v10 & 1) == 0;
      }
      if ( !v22 )
        v17 = v10 | 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v7 = v17;
    if ( v18 )
      MiWritePteShadow(v7, v17);
    v7 += 8LL;
    ++v24;
    --v6;
  }
  while ( v6 );
  if ( v11 )
  {
    *(_QWORD *)&v28 = v11;
    *(_QWORD *)&v27[0] = v11;
    MiReturnPoolCharges((unsigned __int64 *)v27, 1, 0);
  }
  return v25;
}
