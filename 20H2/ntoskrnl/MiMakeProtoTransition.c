/*
 * XREFs of MiMakeProtoTransition @ 0x14055AC98
 * Callers:
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiMakeProtoTransition(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r9
  __int64 *v6; // rsi
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  char v9; // di
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // r8
  bool v13; // zf
  __int64 TransitionPte; // [rsp+40h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (v2 >> 5) & 0x1F;
  v6 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v5)
                 + 8 * ((v3 >> 3) & 0x1FF));
  TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
  v7 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)&TransitionPte)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
        v7 |= 0x20uLL;
    }
  }
  TransitionPte = MiMakeTransitionPte((v7 >> 12) & 0xFFFFFFFFFLL, v4);
  v9 = TransitionPte;
  v10 = 0;
  v11 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v10 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_18;
      v13 = (v9 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v13 = (v9 & 1) == 0;
    }
    if ( !v13 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_18:
  *v6 = v11;
  if ( v10 )
    MiWritePteShadow((__int64)v6, v11, v12);
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v6, 0x11u, 0x80000000);
}
