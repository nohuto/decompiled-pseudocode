/*
 * XREFs of MiMakeProtoTransition @ 0x14055C768
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // zf
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
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_18;
      v13 = (v8 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_18;
      v13 = (v8 & 1) == 0;
    }
    if ( !v13 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_18:
  *v5 = v10;
  if ( v9 )
    MiWritePteShadow((__int64)v5, v10, v12);
  LOBYTE(v11) = 17;
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v5, v11, 0x80000000);
}
