/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406EDC28
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSetPfnLink @ 0x1402301EC (MiSetPfnLink.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x1403366E8 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140336A64 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x140336AE8 (MiGetNextPageColor.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
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
  __int64 v12; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  int v17; // ebp
  __int64 v18; // r8
  unsigned __int64 *v19; // rdi
  int v20; // esi
  __int64 v21; // r8
  bool v23; // zf
  bool v24; // zf
  _OWORD v25[2]; // [rsp+20h] [rbp-28h] BYREF

  v25[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v25);
  NextPageColor = MiGetNextPageColor((__int64)v25);
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
  ValidPte = MiMakeValidPte(0LL, v10, 2415919110LL, v12);
  *v11 = 0LL;
  v11[5] ^= (v10 ^ v11[5]) & 0xFFFFFFFFFLL;
  v14 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512LL);
  v16 = MiMakeValidPte(0LL, v10, 2684354564LL, v15);
  v17 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_4;
      v23 = (v16 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v23 = (v16 & 1) == 0;
    }
    if ( !v23 )
      v16 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v16;
  if ( v17 )
    MiWritePteShadow(a2, v16, v18);
  v19 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v20 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v19) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_7;
      v24 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v24 = (v14 & 1) == 0;
    }
    if ( !v24 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v19 = v14;
  if ( v20 )
    MiWritePteShadow((__int64)v19, v14, v21);
  return v10;
}
