/*
 * XREFs of MiMakeProtoTransition @ 0x14055C9A8
 * Callers:
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiMakeProtoTransition(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  char v8; // di
  int v9; // ebp
  __int64 v10; // rbx
  bool v11; // zf
  __int64 TransitionPte; // [rsp+40h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (v2 >> 5) & 0x1F;
  v5 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                 + 8 * ((v3 >> 3) & 0x1FF));
  TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  v6 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)&TransitionPte)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
        v6 |= 0x20uLL;
    }
  }
  TransitionPte = MiMakeTransitionPte((v6 >> 12) & 0xFFFFFFFFFLL, v4);
  v8 = TransitionPte;
  v9 = 0;
  v10 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_18;
      v11 = (v8 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v11 = (v8 & 1) == 0;
    }
    if ( !v11 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_18:
  *v5 = v10;
  if ( v9 )
    MiWritePteShadow((__int64)v5, v10);
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v5, 0x11u, 0x80000000);
}
