/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406F10F0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiSetPfnLink @ 0x14027AFCC (MiSetPfnLink.c)
 *     MiGetNextPageColor @ 0x140280344 (MiGetNextPageColor.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403292B4 (MiSetPageTablePfnBuddy.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
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
  unsigned __int64 *v18; // rdi
  int v19; // esi
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
  ValidPte = MiMakeValidPte(0LL, v10, 2415919110LL, v12);
  *v11 = 0LL;
  v11[5] ^= (v10 ^ v11[5]) & 0xFFFFFFFFFLL;
  v14 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0LL);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512LL);
  v16 = MiMakeValidPte(0LL, v10, 2684354564LL, v15);
  v17 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_4;
      v21 = (v16 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v21 = (v16 & 1) == 0;
    }
    if ( !v21 )
      v16 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v16;
  if ( v17 )
    MiWritePteShadow(a2, v16);
  v18 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v19 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v18) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_7;
      v22 = (v14 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v22 = (v14 & 1) == 0;
    }
    if ( !v22 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v18 = v14;
  if ( v19 )
    MiWritePteShadow((__int64)v18, v14);
  return v10;
}
