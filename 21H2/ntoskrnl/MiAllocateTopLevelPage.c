/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406A7B04
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
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
  unsigned __int64 *v16; // rdi
  int v17; // esi
  bool v19; // zf
  bool v20; // zf
  _OWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF

  v21[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v21);
  NextPageColor = MiGetNextPageColor((__int64)v21);
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
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512);
  v14 = MiMakeValidPte(0LL, v10, -1610612732);
  v15 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_4;
      v19 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v19 = (v14 & 1) == 0;
    }
    if ( !v19 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v14;
  if ( v15 )
    MiWritePteShadow(a2, v14);
  v16 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v17 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v16) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_7;
      v20 = (v13 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v20 = (v13 & 1) == 0;
    }
    if ( !v20 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v16 = v13;
  if ( v17 )
    MiWritePteShadow((__int64)v16, v13);
  return v10;
}
