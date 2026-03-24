/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406D0824
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406D073C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14021AD40 (MiGetProcessPartition.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E5B84 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x1402E5C08 (MiGetNextPageColor.c)
 *     MiSetPfnLink @ 0x14031818C (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *ProcessPartition; // rbx
  int v6; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 Page; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // ebp
  __int64 v16; // r8
  unsigned __int64 *v17; // rdi
  int v18; // esi
  __int64 v19; // r8
  bool v21; // zf
  bool v22; // zf
  _OWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF

  v23[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v23);
  NextPageColor = MiGetNextPageColor((__int64)v23);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 770LL);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v11 = (_QWORD *)(48 * Page - 0x58000000000LL);
  MiSetPfnLink(v11, 0LL);
  ValidPte = MiMakeValidPte(0LL, v10, -1879048186);
  *v11 = 0LL;
  v11[5] ^= (v10 ^ v11[5]) & 0xFFFFFFFFFLL;
  v13 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0LL);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512LL);
  v14 = MiMakeValidPte(0LL, v10, -1610612732);
  v15 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_4;
      v21 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v21 = (v14 & 1) == 0;
    }
    if ( !v21 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v14;
  if ( v15 )
    MiWritePteShadow(a2, v14, v16);
  v17 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v18 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v17) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_7;
      v22 = (v13 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v22 = (v13 & 1) == 0;
    }
    if ( !v22 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v17 = v13;
  if ( v18 )
    MiWritePteShadow((__int64)v17, v13, v19);
  return v10;
}
